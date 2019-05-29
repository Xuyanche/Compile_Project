#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symtab.h"

/* Traverse t and build symbol table */
SymTab* BuildTable(STNode* t, SymTab* curTable) {
	switch (t->kind)
	{
	case StmtK: {
		switch (t->type.stmt)
		{
		case ProgStmtT: {
			SymTab* ret = CreateTable(curTable);
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
			}
			return ret;
			break;
		}
		case CompStmtT: {
			SymTab* ret = (t->father->type.decl==FuncDeclT) ? curTable : CreateTable(curTable);
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
			}
			return 0;
			break;
		}
		case StmtListT: {
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, curTable);
			}
			return 0;
			break;
		}
		default:
			break;
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
			}
			return 0;
			break;
		}
		case VarDeclT: {
			curTable->nr_localvar++;
			InsertSym(curTable, t->attr.name, VarK, t->attr.dtype, curTable->nr_localvar, 1);
		}
		case FuncDeclT: {
			curTable->nr_func++;
			InsertSym(curTable, t->attr.name, FuncK, t->attr.dtype, curTable->nr_func, 1);
			SymTab* ret = CreateTable(curTable);
			STNode *child = t->child;
			while (child)
			{
				BuildTable(child, ret);
			}
			return 0;
			break;
		}
		case ArrDeclT: {
			curTable->nr_localvar += t->attr.val;
			InsertSym(curTable, t->attr.name, ArrK, t->attr.dtype, curTable->nr_localvar, t->attr.val);
		}
		default:
			break;
		}
	}
	default:
		break;
	}
	return ;
}

SymTab* CreateTable(SymTab *father) {
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
	NewTable->nr_symbols = 0;
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
		table->nr_symbols++;
		table->bucket[table->nr_symbols].name = name;
		table->bucket[table->nr_symbols].kind = kind;
		table->bucket[table->nr_symbols].order = order;
		table->bucket[table->nr_symbols].nr = nr;
	}
	return 0;
}