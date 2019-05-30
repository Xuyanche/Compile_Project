#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symtab.h"
#include "parser.h"

char* KindStr[] = { "Var", "Func", "Para", "Arr" };
static char* operators[26] = { "+", "-", "*", "/", ",", "=", "{", "}", "[", "]", "(", ")", ";", "int", "void", "if", "else", "while", "return", "<", "<=",
						">", ">=", "==", "!=", "address" };
extern int error;
extern SymTab *SymbolTable;

/* Traverse t and build symbol table */
SymTab* BuildTable(STNode* t, SymTab* curTable) {
	switch (t->kind)
	{
	case StmtK: {
		switch (t->type.stmt)
		{
		case ProgStmtT: {
			SymTab* ret = CreateTable(curTable, strdup("Global"));
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
				child = child->brother;
			}
			return ret;
		}
		case CompStmtT: {
			char FatherName[20];
			sprintf(FatherName, "%s", curTable->name);
			SymTab* ret = (t->father->type.decl==FuncDeclT) ? curTable : CreateTable(curTable, strdup(strcat(FatherName, "_Scope")));
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
			if (error = InsertSym(curTable, t->attr.name, VarK, t->attr.dtype, curTable->nr_localvar, 1))
				printf("Line %d: Redeclaration error.\n", t->No_Line);
			curTable->nr_localvar++;
			return 0;
		}
		case FuncDeclT: {
			if (error = InsertSym(curTable, t->attr.name, FuncK, t->attr.dtype, curTable->nr_func, 1))
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
			if (error = InsertSym(curTable, t->attr.name, ArrK, t->attr.dtype, curTable->nr_localvar, t->attr.val))
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
			if (error = InsertSym(curTable, t->attr.name, ParaK, t->attr.dtype, curTable->nr_para, 1))
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
	printf("Symbol Table: %s\n", table->name);
	int i;
	for (i = 0; i < MAX_SYMBOLS; i++)
	{
		SymtabEntryList *list = table->bucket[i];
		if (list) {
			while (list)
			{
				SymtabEntry record = list->entry;
				printf("%s\t%s\t%s\t%d\t%d\t\n", record.name, KindStr[record.kind], operators[record.dtype - 258], record.order, record.nr);
				list = list->next;
			}
		}
	}
	printf("\n");
	SymTab *child = table->child;
	while (child) {
		printTable(child);
		child = child->brother;
	}
}

int TypeCheck(STNode * t, SymTab *table)
{
	switch (t->kind)
	{
	case ExprK: {
		switch (t->type.expr)
		{
		case AssignT: {
			STNode *child1 = t->child;
			STNode *child2 = child1->brother;
			if (TypeCheck(child1, table) || TypeCheck(child2, table))
				return 1;
			int err = (child1->attr.dtype == child2->attr.dtype) ? 0 : 1;
			t->attr.dtype = child1->attr.dtype;
		}
		case OpT: {
			STNode *child1 = t->child;
			STNode *child2 = child1->brother;
			if (TypeCheck(child1, table) || TypeCheck(child2, table))
				return 1;
		}
		case IdT: {
			t->attr.dtype = lookup(table, t->attr.name)->dtype;
		}
		case EntryT: {
			t->attr.dtype = INT;
		}
		case CallT: {
			t->attr.dtype = lookup(table, t->attr.name)->dtype;
		}
		case ArgsT: {
			STNode *child = t->child;
			while (child)
			{
				
			}
		}
		default:
			break;
		}
	}
	case StmtK: {
		switch (t->type.stmt)
		{
		default:
			break;
		}
	}
	default:
		break;
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