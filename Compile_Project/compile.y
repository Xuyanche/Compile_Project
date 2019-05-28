%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "scan.h"
#include "node.h"
#include "utils.h"

#define YYDEBUG 1

static STNode* TreeRoot;

void yyerror(char *s);

FILE *fout;

%}
%union{
	int Token;
	int dtype;
	int value;
	STNode* node;
	char* name;
}
%type <node> program declaration_list declaration var_decl func_decl paras comp_stmt para_list local_decls stmt_list para
%type <node> stmt expr_stmt selc_stmt iter_stmt retn_stmt expr simple_expr add_expr term factor call args arg_list var
%type <dtype> type
%type <Token> relop addop mulop
%token <Token> ADD SUB MUL DIV COM ASN LCR RCR LBR RBR LPR RPR SEMI INT VOID IF ELSE WHILE RETURN LE LEQ GE GEQ EQ NEQ
%token <name> ID
%token <value> NUM

%start program
%%

 /* 1 */
program
	: declaration_list {TreeRoot = newStmtNode(CompStmtT); refreshStmtNode(TreeRoot); insert(TreeRoot, $1);}
	;

 /* 2 */
declaration_list
	: declaration_list declaration
	{
		STNode* t = $1;
		if (t != NULL) {
			makeBrother(t, $2);
			$$ = t;
		}
		else
			$$ = $2;
	}
	| declaration	{$$ = $1;}
	;

 /* 3 */
declaration
	: var_decl	{$$ = $1;}
	| func_decl {$$ = $1;}
	;

 /* 4 */
var_decl
	: type ID SEMI
	{
		$$ = newDeclNode(VarDeclT);
		$$->attr.dtype = $1;
		$$->attr.name = $2;
		refreshDeclNode($$);
	}
	| type ID LBR NUM RBR SEMI
        {
            $$ = newDeclNode(ArrDeclT);
            $$->attr.dtype = $1;
		    $$->attr.name = $2;
            $$->attr.val = $4;
			refreshDeclNode($$);
        }
	;

 /* 5 */
type
	: VOID	{$$ = $1;}
	| INT	{$$ = $1;}
	;

 /* 6 */
func_decl
	: type ID LPR paras RPR comp_stmt	
	{	
		$$ = newDeclNode(FuncDeclT);
        $$->attr.dtype = $1;
        $$->attr.name = $2;
		refreshDeclNode($$);
		if ($4)
			insert($$, $4);
        if ($6)
            insert($$, $6);
	}
	;

 /* 7 */
paras
	: para_list {$$ = newExprNode(MultiT); refreshExprNode($$); insert($$, $1);}
	| VOID {$$ = NULL;}
	| {$$ = NULL;}
	;

 /* 8 */
para_list
	: para_list COM para
	{	
		STNode* t = $1;
		if (t != NULL) {
			makeBrother(t, $3);
			$$ = t;
		}
		else
			$$ = $3;
	}
	| para  {$$ = $1;}
	;
 
 /* 9 */
para
	: type ID
	{	
		$$ = newExprNode(IdT);
        $$->attr.dtype = $1;
        $$->attr.name = $2;
		refreshExprNode($$);
	}
	| type ID LBR RBR
	{	
		$$ = newExprNode(AddrT);
        $$->attr.dtype = $1;
        $$->attr.name = $2;
		refreshExprNode($$);
	}
	;

 /* 10 */
comp_stmt
	: LCR local_decls stmt_list RCR
	{	
        $$ = newStmtNode(CompStmtT);
		refreshStmtNode($$);
		if ($2){
			STNode* p = newDeclNode(MultiDeclT);
			refreshDeclNode(p);
			insert(p, $2);
			insert($$, p);
		}
		if ($3){
			STNode* p = newStmtNode(MultStmtT);
			refreshStmtNode(p);
			insert(p, $3);
			insert($$, p);
		}
	}
	;
 
 /* 11 */
local_decls
	: local_decls var_decl	
	{
		STNode* t = $1;
		if (t != NULL) {
			makeBrother(t, $2);
			$$ = t;
		}
		else
			$$ = $2;
	}
	| 
    {$$ = NULL;}
	;
	
 /* 12 */
stmt_list
	: stmt_list stmt
	{
		STNode* t = $1;
		if (t != NULL) {
			makeBrother(t, $2);
			$$ = t;
		}
		else
			$$ = $2;
	}
	| 
	{$$ = NULL;}
	;
	
 /* 13 */
stmt
	: expr_stmt		{$$ = $1;}
	| comp_stmt		{$$ = $1;}
	| selc_stmt		{$$ = $1;}
	| iter_stmt		{$$ = $1;}
	| retn_stmt		{$$ = $1;}
	;	

 /* 14 */
expr_stmt
	: expr SEMI {$$ = $1;}
	| SEMI {$$ = NULL;}
	;

 /* 15 */
selc_stmt
	: IF LPR expr RPR stmt	
	{	
		$$ = newStmtNode(IfT);
		refreshStmtNode($$);
        insert($$, $3);
        insert($$, $5);
	}
	| IF LPR expr RPR stmt ELSE stmt	
	{	
		$$ = newStmtNode(IfElseT);
		refreshStmtNode($$);
        insert($$, $3);
        insert($$, $5);
        insert($$, $7);
	}
	;
	
 /* 16 */
iter_stmt
	: WHILE LPR expr RPR stmt	
	{
		$$ = newStmtNode(IterStmtT);
		refreshStmtNode($$);
        insert($$, $3);
        insert($$, $5);
	}
	;

 /* 17 */
retn_stmt
	: RETURN expr SEMI	
	{	
        $$ = newStmtNode(RetnStmtT);
		refreshStmtNode($$);
        insert($$, $2);
	}
	| RETURN SEMI
	{
		$$ = newStmtNode(RetnStmtT);
		refreshStmtNode($$);
	}
	;

 /* 18 */
expr
	: var ASN expr
	{
		$$ = newExprNode(AssignT);
		refreshExprNode($$);
        insert($$, $1);
        insert($$, $3);
	}
	| simple_expr
	{
		$$ = $1;
	}
	;

 /* 19 */
var
	: ID	
	{	
		$$ = newExprNode(IdT);
        $$->attr.name = $1;
		refreshExprNode($$);
	}
	| ID LBR expr RBR	
	{	
		$$ = newExprNode(EntryT);
        $$->attr.name = $1;
		refreshExprNode($$);
        insert($$, $3);
	}
	;

 /* 20 */
simple_expr
	: add_expr relop add_expr
	{
		$$ = newExprNode(OpT);
        $$->attr.Op = $2;
		refreshExprNode($$);
        insert($$, $1);
        insert($$, $3);
	}
	| add_expr
	{
		$$ = $1;
	}
	;

 /* 21 */
relop
	: GE	{ $$ = $1;}
	| GEQ	{ $$ = $1;}
	| LE	{ $$ = $1;}
	| LEQ	{ $$ = $1;}
	| EQ	{ $$ = $1;}
	| NEQ	{ $$ = $1;}
	;

 /* 22 */
add_expr
	:add_expr addop term
	{
		$$ = newExprNode(OpT);
        $$->attr.Op = $2;
		refreshExprNode($$);
        insert($$, $1);
        insert($$, $3);
	}
	| term
	{
		$$ = $1;
	}
	;

 /* 23 */
addop
	: ADD	{$$ = $1;}
	| SUB	{$$ = $1;}
	;

 /* 24 */
term
	:term mulop factor
	{
		$$ = newExprNode(OpT);
        $$->attr.Op = $2;
		refreshExprNode($$);
        insert($$, $1);
        insert($$, $3);
	}
	| factor
	{
		$$ = $1;
	}
	;

 /* 25 */
mulop
	: MUL	{$$ = $1;}
	| DIV	{$$ = $1;}
	;

 /* 26 */
factor
	: LPR expr RPR {$$ = $2;}
	| var	{$$ = $1;}
	| call	{$$ = $1;}
	| NUM
    {
        $$ = newExprNode(ConstT);
        $$->attr.val = $1;
		refreshExprNode($$);
    }
	;

 /* 27 */
call
	: ID LPR args RPR
	{
		$$ = newExprNode(CallT);
        $$->attr.name = $1;
		refreshExprNode($$);
        if ($3) insert($$, $3);
	}
	;

 /* 28 */
args
	: arg_list	{$$ = $1;}
	| { $$ = NULL; }
	;

 /* 29 */
arg_list
	: arg_list COM expr
	{
		STNode* t = $1;
		if (t != NULL) {
			makeBrother(t, $3);
			$$ = t;
		}
		else
			$$ = $3;
	}
	| expr
	{
		$$ = $1;
	}
%%


void yyerror(char* s)
{    
	printf("Error:%s\n", s);
}

int main(int argc,char *argv[])
{    
	extern int yydebug;
	yydebug = 0;
	if (argc == 1)
	{
		printf("No input file!\n");
		return -1;
	}
	FILE* fin=NULL;
	fin = fopen(argv[1],"r"); 
	if(!fin)
	{ 
		printf("cannot open reading file.\n");
		return -1;
	}
	extern FILE* yyin;
	yyin=fin;
	yyparse();
	print(TreeRoot,0);
	fclose(fin);
	system("pause");
	return 0;
}
