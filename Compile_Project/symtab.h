#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

#define MAX_SYMBOLS 100

typedef struct SymTab SymTab; 
typedef struct SymtabEntry SymtabEntry; // Entry for hash bucket chain

typedef enum SymKind{VarK, FuncK, ParaK, ArrK}SymKind;

struct SymtabEntry
{
	int order;
	int dtype;
	SymKind kind;
	char* name;
	int nr;
};

struct SymTab
{
	SymTab *child, *brother, *father;
	int nr_symbols, nr_func, nr_localvar, nr_para;
	SymtabEntry bucket[MAX_SYMBOLS];
	char* name;
};

SymTab* BuildTable(STNode *t, SymTab* curTable);

SymTab* CreateTable(SymTab *father, const char* TableName);

/* Function `insert` inserts a symbol into symbol table */
int InsertSym(SymTab* table, char* name, SymKind kind, int dtype, int order, int nr);

/* Function `lookup` takes a var name and return the corresponding symbol table entry */
SymtabEntry* lookup(SymTab* table, char* name);

void printTable(SymTab* table);