#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symtab.h"

char* KindStr[] = { "Var", "Func", "Para", "Arr" };
static char* operators[25] = { "+", "-", "*", "/", ",", "=", "{", "}", "[", "]", "(", ")", ";", "int", "void", "if", "else", "while", "return", "<", "<=",
						">", ">=", "==", "!=" };

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
			InsertSym(curTable, t->attr.name, VarK, t->attr.dtype, curTable->nr_localvar, 1);
			curTable->nr_localvar++;
			return 0;
		}
		case FuncDeclT: {
			InsertSym(curTable, t->attr.name, FuncK, t->attr.dtype, curTable->nr_func, 1);
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
			InsertSym(curTable, t->attr.name, ArrK, t->attr.dtype, curTable->nr_localvar, t->attr.val);
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
			InsertSym(curTable, t->attr.name, ParaK, t->attr.dtype, curTable->nr_para, 1);
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
	return NewTable;
}

SymtabEntry * lookup(SymTab * table, char * name)
{
	int i;
	for (i = 0; i < table->nr_symbols; i++) {
		if (!strcmp(table->bucket[i].name, name)) {
			return &table->bucket[i];
		}
	}
	return NULL;
}

void printTable(SymTab * table)
{
	printf("Symbol Table: %s\n", table->name);
	int i;
	for (i = 0; i < table->nr_symbols; i++)
	{
		SymtabEntry entry = table->bucket[i];
		printf("%s\t%s\t%s\t%d\t%d\t\n", entry.name, KindStr[entry.kind], operators[entry.dtype - 258], entry.order, entry.nr);
	}
	printf("\n");
	SymTab *child = table->child;
	while (child) {
		printTable(child);
		child = child->brother;
	}
}

int InsertSym(SymTab * table, char * name, SymKind kind, int type, int order, int nr)
{
	SymtabEntry *exist = lookup(table, name);
	if (exist) {
		if (exist->dtype != type || exist->kind != kind) {
			printf("Redeclaration Error.\n");
			return 1;
		}
	}
	else
	{
		table->bucket[table->nr_symbols].name = name;
		table->bucket[table->nr_symbols].kind = kind;
		table->bucket[table->nr_symbols].dtype = type;
		table->bucket[table->nr_symbols].order = order;
		table->bucket[table->nr_symbols].nr = nr;
		table->nr_symbols++;
	}
	return 0;
}