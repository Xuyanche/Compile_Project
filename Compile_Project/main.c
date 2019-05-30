#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "symtab.h"
#include "parser.h"
#include "cgen.h"

FILE *input, *toutput, *soutput, *poutput;
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
		toutput = soutput = poutput = stdout;
	}
	else if (argc==3)
	{
		input = fopen(argv[1], "r");
		poutput = fopen(argv[2], "w");
		toutput = soutput = stdout;
	}
	else if (argc == 4)
	{
		input = fopen(argv[1], "r");
		poutput = fopen(argv[2], "w");
		toutput = fopen(argv[3], "w");
		soutput = stdout;
	}
	else if (argc == 5)
	{
		input = fopen(argv[1], "r");
		poutput = fopen(argv[2], "w");
		toutput = fopen(argv[3], "w");
		soutput = fopen(argv[4], "w");
	}
	// Build Parse Tree
	parse();
	// Build Symbol Table
	SymbolTable = BuildTable(TreeRoot, NULL);
	printf("Symbol Tables Built\n");
	printTable(SymbolTable);
	// Do Type Checking
	error = TypeCheck(TreeRoot, SymbolTable);
	if (error)
		return 0;
	cGen(TreeRoot);
	return 0;
}