#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_SYMBOLS 100

typedef struct symtab symtab; 
typedef struct stnode stnode; //Symbol table linked list node
typedef struct SymtabEntry SymtabEntry; // Entry for hash bucket chain

struct symtab
{
	stnode nest, tail;
	char* name;
	SymtabEntry bucket[MAX_SYMBOLS];
};

struct stnode
{
	symtab *table;
	stnode *next;
};

struct SymtabEntry
{
	int memloc, kind, dtype;
	SymtabEntry *next;
};

/* Function `insert` inserts a symbol into symbol table */
int insert(symtab* symtab, char* name, int kind, int type);

/* Function `lookup` takes a var name and return the corresponding symbol table entry */
SymtabEntry* lookup(symtab *table, char* name);