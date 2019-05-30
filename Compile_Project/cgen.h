#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "parser.h"
#include "symtab.h"

void GenStmt(STNode *t, SymTab *table);

void GenExpr(STNode *t, SymTab *table);

void GenDecl(STNode *t, SymTab *table);

/* Traverse syntax tree and generate code */
void cGen(STNode *t);