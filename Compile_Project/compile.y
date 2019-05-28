%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "node.h"
#include "utils.h"

#define YYDEBUG 1
#define YYSTYPE STNode*

static STNode* TreeRoot;
static char* tempname;
static int tempval;
static int templine;

void yyerror(char *s);
static int yylex();

FILE *fout;

%}
%union{
	TokenType Token;
	TokenType dtype;
	int value;
	STNode* node;
	char* name;
}
%type <node> program declaration_list declaration var_decl func_decl paras comp_stmt para_list local_decls stmt_list para
%type <node> stmt expr_stmt selc_stmt iter_stmt retn_stmt
%type <dtype> type
%type var
%type expr simple_expr relop add_expr addop term mulop factor
%type call args arg_list
%token <Token> ADD SUB MUL DIV COM ASN LCR RCR LBR RBR LPR RPR SEMI ID NUM INT VOID IF ELSE WHILE RETURN LE LEQ GE GEQ EQ NEQ

%start program
%%

 /* 1 */
program
	: declaration_list {TreeRoot = $1;}
	;

 /* 2 */
declaration_list
	: declaration_list declaration
	{
		STNode* t = $1;
		if (t != NULL) {
			t->brother = $1;
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
	: type ID {tempname = CopyString(TokenString);} SEMI
	{
		$$ = newDeclNode(VarDeclT);
		$$->attr.dtype = $1;
		$$->attr.name = tempname;
	}
	| type ID {tempname = CopyString(TokenString);} 
	  LBR NUM {tempval = atoi(TokenString);} RBR 
	  SEMI
        {
            $$ = newDeclNode(ArrDeclT);
            $$->attr.dtype = $1;
		    $$->attr.name = tempname;
            $$->attr.val = tempval;
        }
	;

 /* 5 */
type
	: VOID	{$$ = $1;}
	| INT	{$$ = $1;}
	;

 /* 6 */
func_decl
	: type ID {tempname = CopyString(TokenString);} LPR paras RPR comp_stmt	
	{	
		p = newDeclNode(FuncDeclT);
        $$->attr.dtype = $1;
        $$->attr.name = tempname;
        insert($$, $5);
        insert($$, $7);
	}
	;

 /* 7 */
paras
	: para_list {$$ = $1;}
	| VOID {$$ = NULL;}
	;

 /* 8 */
para_list
	: para_list COM para
	{	
		STNode* t = $1;
		if (t != NULL) {
			t->brother = $3;
			$$ = t;
		}
		else
			$$ = $3;
	}
	| para  {$$ = $1;}
	;
 
 /* 9 */
para
	: type ID {tempname = CopyString(TokenString);}
	{	
		p = newExprNode(IdT);
        p->attr.dtype = $1;
        p->attr.name = tempname;
	}
	| type ID {tempname = CopyString(TokenString);} LBR RBR
	{	
		p = newExprNode(AddrT);
        p->attr.dtype = $1;
        p->attr.name = tempname;
	}
	;

 /* 10 */
comp_stmt
	: LCR local_decls stmt_list RCR
	{	
        $$ = newStmtNode(CompStmtT);
		if ($2)
			insert(p, $2);
		if ($3)
			insert(p, $3);
	}
	;
 
 /* 11 */
local_decls
	: local_decls var_decl	
	{
		STNode* t = $1;
		if (t != NULL) {
			t->brother = $1;
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
			t->brother = $1;
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
	: expr ';' {$$ = $1;}
	| ';' {$$ = NULL;}
	;

 /* 15 */
selc_stmt
	: IF '(' expr ')' stmt	
	{	
		$$ = newStmtNode(IfT);
        insert($$, $3);
        insert($$, $5);
	}
	| IF '(' expr ')' stmt ELSE stmt	
	{	
		$$ = newStmtNode(IfElseT);
        insert($$, $3);
        insert($$, $5);
        insert($$, $7);
	}
	;
	
 /* 16 */
iter_stmt
	: WHILE '(' expr ')' stmt	
	{
		$$ = newStmtNode(IterStmtT);
        insert($$, $3);
        insert($$, $5);
	}
	;

 /* 17 */
retn_stmt
	: RETURN expr ';'	
	{	
        $$ = newStmtNode(RetnStmtT);
        insert($$, $2);
	}
	| RETURN ';'
	{
		$$ = newStmtNode(RetnStmtT);
	}
	;

 /* 18 */
expr
	: var '=' expr
	{
		p = newNode("expr", $1->No_Line);
		insert(p, $3);
		insert(p, $2); 
		insert(p, $1); 
		$$ = p;
	}
	| simple_expr
	{
		p = newNode("expr", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 19 */
var
	: ID				
	{	
		p = newNode("vars", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	| ID '[' expr ']'	
	{	
		p = newNode("var", $1->No_Line);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 20 */
simple_expr
	: add_expr relop add_expr
	{
		p = newNode("simple_expr", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| add_expr
	{
		p = newNode("simple_expr", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 21 */
relop
	: GE	{ p = newNode("relop", $1->No_Line); insert(p, $1); $$ = p;}
	| GEQ	{ p = newNode("relop", $1->No_Line); insert(p, $1); $$ = p;}
	| LE	{ p = newNode("relop", $1->No_Line); insert(p, $1); $$ = p;}
	| LEQ	{ p = newNode("relop", $1->No_Line); insert(p, $1); $$ = p;}
	| EQ	{ p = newNode("relop", $1->No_Line); insert(p, $1); $$ = p;}
	| NEQ	{ p = newNode("relop", $1->No_Line); insert(p, $1); $$ = p;}
	;

 /* 22 */
add_expr
	:add_expr addop term
	{
		p = newNode("add_expr", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| term
	{
		p = newNode("add_expr", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 23 */
addop
	: '+'	{ p = newNode("addop", $1->No_Line); insert(p, $1); $$ = p;}
	| '-'	{ p = newNode("addop", $1->No_Line); insert(p, $1); $$ = p;}
	;

 /* 24 */
term
	:term mulop factor
	{
		p = newNode("term", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| factor
	{
		p = newNode("term", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 25 */
mulop
	: '*'	{ p = newNode("mulop", $1->No_Line);; insert(p, $1); $$ = p;}
	| '/'	{ p = newNode("mulop", $1->No_Line);; insert(p, $1); $$ = p;}
	;

 /* 26 */
factor
	: '(' expr ')'
	{
		p = newNode("factor", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| var	{ p = newNode("factor", $1->No_Line); insert(p, $1); $$ = p;}
	| call	{ p = newNode("factor", $1->No_Line); insert(p, $1); $$ = p;}
	| NUM	{ p = newNode("factor", $1->No_Line); insert(p, $1); $$ = p;}
	;

 /* 27 */
call
	: ID '(' args ')'
	{
		p = newNode("call", $1->No_Line);
		insert(p, $4);
		if ($3)
			insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 28 */
args
	: arg_list	{ p = newNode("args", $1->No_Line); insert(p, $1); $$ = p;}
	| 	{ $$ = NULL; }
	;

 /* 29 */
arg_list
	: arg_list ',' expr
	{
		p = newNode("arg_list", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| expr
	{
		p = newNode("arg_list", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
%%


void yyerror(char* s)
{    
	printf("Error:%s\n", s);
}

static int yylex(){
	return GetToken();
}

int main(int argc,char *argv[])
{    
	extern int yydebug;
	yydebug = 1;
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
	print(p,0);
	fclose(fin);
	return 0;
}
