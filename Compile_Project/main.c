#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symtab.h"
#include "parser.h"

FILE *input, *output;
STNode *TreeRoot;
SymTab *SymbolTable;
int error = 0;

int main(int argc, char* argv[]) {
	if (argc == 1) {
		printf("No input file.\n");
		return 0;
	}
	else if (argc == 2)
	{
		input = fopen(argv[1], "r");
		output = stdout;
	}
	else if (argc==3)
	{
		input = fopen(argv[1], "r");
		output = fopen(argv[2], "w");
	}
	// Build Parse Tree
	parse();
	// Build Symbol Table
	SymbolTable = BuildTable(TreeRoot, NULL);
	printf("Symbol Tables:\n");
	printTable(SymbolTable);
	// Do Type Checking
	error = TypeCheck(TreeRoot, SymbolTable);
	if (error)
		return 0;


	system("pause");
}