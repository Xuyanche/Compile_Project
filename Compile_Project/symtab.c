#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symtab.h"
#include "parser.h"

char* KindStr[] = { "Var", "Func", "Para", "Arr" };
static char* operators[26] = { "+", "-", "*", "/", ",", "=", "{", "}", "[", "]", "(", ")", ";", "int", "void", "if", "else", "while", "return", "<", "<=",
						">", ">=", "==", "!=", "address" };
extern SymTab *SymbolTable;
extern FILE* soutput;
static SymTab *scope, *subscope;

/* Traverse t and build symbol table */
SymTab* BuildTable(STNode* t, SymTab* curTable) {
	switch (t->kind)
	{
	case StmtK: {
		switch (t->type.stmt)
		{
		case ProgStmtT: {
			SymTab* ret = CreateTable(curTable, strdup("Global"));
			InsertSym(ret, "input", FuncK, INT, 0, 1);
			InsertSym(ret, "output", FuncK, INT, 1, 1);
			ret->nr_func += 2;
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
				child = child->brother;
			}
			return ret;
		}
		case CompStmtT: {
			char newName[100];
			sprintf(newName, "%s", curTable->name);
			SymTab* ret = (t->father->type.decl == FuncDeclT && t->father->kind == DeclK) ? curTable : CreateTable(curTable, strdup(strcat(newName, "_Scope")));
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
				child = child->brother;
			}
			return 0;
		}
		case StmtListT: {
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, curTable);
				child = child->brother;
			}
			return 0;
		}
		default: {
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, curTable);
				child = child->brother;
			}
			return 0;
		}
		}
	}
	case DeclK: {
		switch (t->type.decl)
		{
		case LocalDeclT: {
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, curTable);
				child = child->brother;
			}
			return 0;
		}
		case VarDeclT: {
			if (InsertSym(curTable, t->attr.name, VarK, t->attr.dtype, curTable->nr_localvar, 1))
				printf("Line %d: Redeclaration error.\n", t->No_Line);
			curTable->nr_localvar++;
			return 0;
		}
		case FuncDeclT: {
			if (InsertSym(curTable, t->attr.name, FuncK, t->attr.dtype, curTable->nr_func, 1))
				printf("Line %d: Redeclaration error.\n", t->No_Line);
			curTable->nr_func++;
			SymTab* ret = CreateTable(curTable, t->attr.name);
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
				child = child->brother;
			}
			return 0;
		}
		case ArrDeclT: {
			if (InsertSym(curTable, t->attr.name, ArrK, t->attr.dtype, curTable->nr_localvar, t->attr.val))
				printf("Line %d: Redeclaration error.\n", t->No_Line);
			curTable->nr_localvar += t->attr.val;
			return 0;
		}
		default:
			return 0;
		}
	}
	case ExprK: {
		switch (t->type.expr) {
		case ParasT: {
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, curTable);
				child = child->brother;
			}
			return 0;
		}
		case IdT: {
			if (t->father->type.expr != ParasT) return 0;
			if (InsertSym(curTable, t->attr.name, ParaK, t->attr.dtype, curTable->nr_para, 1))
				printf("Line %d: Redeclaration error.\n", t->No_Line);
			curTable->nr_para++;
			return 0;
		}
		case AddrT: {
			if (t->father->type.expr != ParasT) return 0;
			if (InsertSym(curTable, t->attr.name, ParaK, t->attr.dtype, curTable->nr_para, 1))
				printf("Line %d: Redeclaration error.\n", t->No_Line);
			curTable->nr_para++;
			return 0;
		}
		default:
			break;
		}
	}
	default:
		break;
	}
}

int hash(char* name) {
	int sum = 0, i;
	for (i = 0; i < strlen(name); i++) {
		sum = (sum << 1) + name[i];
	}
	sum %= MAX_SYMBOLS;
	return sum;
}

/* Create new empty table and make it child of father */
SymTab* CreateTable(SymTab *father, const char* TableName) {
	SymTab *NewTable = (SymTab*)malloc(sizeof(SymTab));
	if (father) {
		SymTab* FirstChild = father->child;
		if (!FirstChild) {
			father->child = NewTable;
		}
		else
		{
			while (FirstChild->brother)
			{
				FirstChild = FirstChild->brother;
			}
			FirstChild->brother = NewTable;
		}
	}
	NewTable->father = father;
	NewTable->child = NewTable->brother = NULL;
	NewTable->nr_symbols = NewTable->nr_localvar = NewTable->nr_para = NewTable->nr_func = 0;
	NewTable->name = TableName;
	int i;
	for (i = 0; i < MAX_SYMBOLS; i++)
		NewTable->bucket[i] = NULL;
	return NewTable;
}

SymtabEntry * lookup(SymTab * table, char * name)
{
	SymtabEntryList* entrance = table->bucket[hash(name)];
	while (entrance)
	{
		if (strcmp(entrance->entry.name, name) == 0)
			return &entrance->entry;
		entrance = entrance->next;
	}
	return NULL;
}

void printTable(SymTab * table)
{
	fprintf(soutput, "Symbol Table: %s\n", table->name);
	fprintf(soutput, "Name\tKind\tDtype\tOrder\tCount\t\n", table->name);
	int i;
	for (i = 0; i < MAX_SYMBOLS; i++)
	{
		SymtabEntryList *list = table->bucket[i];
		if (list) {
			while (list)
			{
				SymtabEntry record = list->entry;
				fprintf(soutput,"%s\t%s\t%s\t%d\t%d\t\n", record.name, KindStr[record.kind], operators[record.dtype - 258], record.order, record.nr);
				list = list->next;
			}
		}
	}
	fprintf(soutput, "\n");
	SymTab *child = table->child;
	while (child) {
		printTable(child);
		child = child->brother;
	}
}

// Find the symtab entry corresponding to given function name and order
SymtabEntry* LocateParam(char* funcname, int order) {
	int FuncOrder = lookup(SymbolTable, funcname)->order - 2;
	SymTab *table = SymbolTable->child;
	int i = 0;
	for (i = 0; i < FuncOrder; i++) table = table->brother;
	// 'table' is the corresponding symbol table of the function we look for
	if (order > table->nr_para) {
		return 0;
	}
	for (i = 0; i < MAX_SYMBOLS; i++) { // Iterate through hash buckets
		SymtabEntryList *currentEntry = table->bucket[i];
		while (currentEntry) //Iterate through chain
		{
			SymtabEntry *entry = &currentEntry->entry;
			if (entry->order == order && entry->kind == ParaK)
				return entry;
			currentEntry = currentEntry->next;
		}
	}
}

int TypeCheck(STNode * t)
{
	int TypeError = 0; // Number of type error.
	switch (t->kind)
	{
	case ExprK: {
		switch (t->type.expr)
		{
		case AssignT: {
			STNode *child1 = t->child;
			STNode *child2 = child1->brother;
			if (TypeCheck(child1) || TypeCheck(child2))
				return 1;
			int err = (child1->attr.dtype == child2->attr.dtype) ? 0 : 1;
			t->attr.dtype = child1->attr.dtype;
			return 0;
		}
		case OpT: {
			STNode *child1 = t->child;
			STNode *child2 = child1->brother;
			if (TypeCheck(child1) || TypeCheck(child2))
				return 1;
			if (child1->type.expr == ConstT && child2->type.expr == ConstT) {
				// Const folding optimization
				t->type.expr = ConstT;
				switch (t->attr.Op)
				{
				case ADD: {
					t->attr.val = child1->attr.val + child2->attr.val;
					break;
				}
				case SUB: {
					t->attr.val = child1->attr.val - child2->attr.val;
					break;
				}
				case MUL: {
					t->attr.val = child1->attr.val * child2->attr.val;
					break;
				}
				case DIV: {
					t->attr.val = child1->attr.val / child2->attr.val;
					break;
				}
				case GE: {
					t->attr.val = child1->attr.val > child2->attr.val;
					break;
				}
				case GEQ: {
					t->attr.val = child1->attr.val >= child2->attr.val;
					break;
				}
				case LE: {
					t->attr.val = child1->attr.val < child2->attr.val;
					break;
				}
				case LEQ: {
					t->attr.val = child1->attr.val <= child2->attr.val;
					break;
				}
				case EQ: {
					t->attr.val = child1->attr.val == child2->attr.val;
					break;
				}
				case NEQ: {
					t->attr.val = child1->attr.val != child2->attr.val;
					break;
				}
				default:
					break;
				}
				free(child1);
				free(child2);
				t->child = NULL;
			}
			t->attr.dtype = child1->attr.dtype;
			return 0;
		}
		case IdT: {
			SymTab *curScope = scope;
			while (curScope && !lookup(curScope, t->attr.name)) {
				curScope = curScope->father;
			}
			if (!curScope) {
				printf("Error at line %d: Undeclared identifier '%s'!\n", t->No_Line, t->attr.name);
				return 1;
			}
			t->attr.dtype = (lookup(curScope, t->attr.name)->kind == ArrK) ? ADDR : INT;
			return 0;
		}
		case EntryT: {
			// Check subscript
			STNode* child = t->child;
			TypeError = TypeCheck(child);
			// Check address name
			SymTab *curScope = scope;
			while (curScope && !lookup(curScope, t->attr.name)) {
				curScope = curScope->father;
			}
			if (!curScope) {
				printf("Error at line %d: Undeclared identifier '%s'!\n", t->No_Line, t->attr.name);
				TypeError++;
			}
			t->attr.dtype = lookup(curScope, t->attr.name);
			return TypeError;
		}
		case CallT: {
			SymTab *curScope = scope;
			while (curScope && !lookup(curScope, t->attr.name)) {
				curScope = curScope->father;
			}
			if (!curScope) {
				printf("Error at line %d: Undeclared identifier!\n", t->No_Line);
				return 1;
			}
			STNode *child = t->child;
			while (child)
			{
				TypeError += TypeCheck(child);
				child = child->brother;
			}
			t->attr.dtype = lookup(curScope, t->attr.name)->dtype;
			return TypeError;
		}
		case ArgsT: {
			STNode *child = t->child;
			int order = 0;
			while (child)
			{
				// First check if this argument exists(for var).
				int Error = TypeCheck(child);
				if (Error) {
					TypeError += Error;
					child = child->brother;
					continue;
				}
				// After type check, child's dtype is updated.
				int currentDtype = child->attr.dtype;
				// Get corresponding function parameter entry
				SymtabEntry* paraEntry = LocateParam(t->father->attr.name, order);
				if (!paraEntry) { // Arguments overload
					printf("Error at line %d: No corresponding paramters.\n", t->No_Line);
					TypeError++;
				}
				if (paraEntry->dtype != currentDtype) { // Dtype unmatch
					printf("Error at line %d: The no.%d argument's dtype doesn't match parameter's dtype.\n", t->No_Line, order + 1);
					TypeError++;
				}
				child = child->brother;
				order++;
			}
			return TypeError;
			break;
		}
		default:
			return 0;
		}
	}
	case StmtK: {
		switch (t->type.stmt)
		{
		case ProgStmtT: {
			scope = SymbolTable;
			subscope = scope->child;
			STNode *child = t->child;
			while (child)
			{
				TypeError += TypeCheck(child);
				child = child->brother;
			}
			return TypeError;
		}
		case CompStmtT: {
			int newScope = (t->father->kind != DeclK) ? 1 : 0;
			if (newScope) {
				scope = subscope;
				subscope = scope->child;
			}
			STNode *child = t->child;
			while (child)
			{
				TypeError += TypeCheck(child);
				child = child->brother;
			}
			subscope = scope->brother;
			scope = scope->father;
			return TypeError;
		}
		default: {
			STNode *child = t->child;
			while (child)
			{
				TypeError += TypeCheck(child);
				child = child->brother;
			}
			return TypeError;
		}
		}
	}
	case DeclK: {
		switch (t->type.decl)
		{
		case FuncDeclT: { // Function declaration will have to change the scope
			scope = subscope;
			subscope = scope->child;
			STNode* child = t->child;
			while (child)
			{
				TypeError += TypeCheck(child);
				child = child->brother;
			}
			return TypeError;
		}
		default:
			return 0;
		}
	}
	}
	return 0;
}

int InsertSym(SymTab * table, char * name, SymKind kind, int type, int order, int nr)
{
	SymtabEntry *exist = lookup(table, name);
	if (exist) {
		if (exist->dtype != type || exist->kind != kind) {
			return 1; // 1 means redeclaration error.
		}
	}
	else
	{
		SymtabEntryList *newEntry = (SymtabEntryList*)malloc(sizeof(SymtabEntryList)), *entrance = table->bucket[hash(name)];
		newEntry->entry.name = name;
		newEntry->entry.kind = kind;
		newEntry->entry.dtype= type;
		newEntry->entry.order= order;
		newEntry->entry.nr = nr;
		newEntry->next = NULL;
		if (!entrance) {
			table->bucket[hash(name)] = newEntry;
		}
		else
		{
			while (entrance->next)
			{
				entrance = entrance->next;
			}
			entrance->next = newEntry;
		}
		
		table->nr_symbols++;
	}
	return 0;
}