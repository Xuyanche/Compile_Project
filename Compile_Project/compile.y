%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "node.h"


Node* p;
void yyerror(char *s);
FILE *fout;


extern int column;


%}

%union{
         Node *token_p;
}
%type <token_p> program declaration_list declaration var_decl func_decl
%type <token_p> type var func stmtblock paras para_list para
%type <token_p> local_decls stmt_list
%type <token_p> exp primexp unaryexp leftexp relationexp equalexp addexp multipexp 
%type <token_p> stmtblock stmts stmt jstmt assignstmt assign loopstmt selstmt call
%token <token_p> '+' '-' '*' '/' ',' '=' '{' '}' '(' ')' '[' ']' ';'
%token <token_p> ID NUM INT VOID IF ELSE WHILE RETURN
%token <token_p> LE LEQ GE GEQ EQ NEQ

%start program
%%

 /* 1 */
program
	:declaration_list {p = newNode("program", $1->No_Line); insert(p, $1); $$ = p;}
	;

 /* 2 */
declaration_list
	: declaration_list declaration
	{ 
		p = newNode("declaration_list", $1->No_Line);
		insert(p, $2); 
		insert(p, $1);
		$$ = p;
	}
	| declaration	
	{	
		p = newNode("declaration_list", $1->No_Line); 
		insert(p, $1); 
		$$ = p;
	}
	;

 /* 3 */
declaration
	: var_decl
	{	
		p = newNode("declaration", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	| func_decl
	{	
		p = newNode("declaration", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 4 */
var_decl
	: type ID ';'	
	{	
		p = newNode("var_decl", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| type ID '[' NUM ']' ';'
	{
		p = newNode("var_decl", $1->No_Line);
		insert(p, $6);
		insert(p, $5);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 5 */
type
	: VOID			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| INT			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	/* 
	| CHAR			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| FLOAT			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	*/
	;

 /* 6 */
func_decl
	: type func comp_stmt	
	{	
		p = newNode("func_decl", $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;
func
	: ID '(' paras ')'
	{	
		p = newNode("func", $1->No_Line); 
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 7 */
paras
	: para_list
	{	
		p = newNode("paras", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	| VOID
	{	
		p = newNode("paras", $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 8 */
para_list
	: para-list ',' para
	{	
		p = newNode('para-list', $1->No_Line);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| para
	{	
		p = newNode('para_list', $1->No_Line);
		insert(p, $1);
		$$ = p;
	}
	;
 
 /* 9 */
para
	: type ID 	
	{	
		p = newNode("para", $1->No_Line);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| type ID '[' ']'
	{	
		p = newNode("para", $1->No_Line);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 10 */
comp_stmt
	: '{' local_decls stmt_list '}'	
	{	
		p = newNode("comp_stmt", $1->No_Line);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;
 
 /* 11 */
local_decls
	: local_decls var_decl	
	{
		p = newNode("local_decls", $1->No_Line); 
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| %empty
	{
		/* Do nothing */
	}
	;
	
 /* 12 */
stmt_list
	: stmt_list stmt
	{
		p = newNode("stmt_list", $1->No_Line); 
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| %empty
	{
		/* Do nothing */
	}
	;
	
 /* 13 */
stmt
	: expr_stmt		{p = newNode("stmt", $1->No_Line); insert(p, $1); $$ = p;}
	| comp_stmt		{p = newNode("stmt", $1->No_Line); insert(p, $1); $$ = p;}
	| selc_stmt		{p = newNode("stmt", $1->No_Line); insert(p, $1); $$ = p;}
	| iter_stmt		{p = newNode("stmt", $1->No_Line); insert(p, $1); $$ = p;}
	| retn_stmt		{p = newNode("stmt", $1->No_Line); insert(p, $1); $$ = p;}
	;	

 /* 14 */
expr_stmt
	: expr ';'
	{
		p = newNode("expr_stmt", $1->No_Line); 
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	| ';'
	{
		p = newNode("expr_stmt", $1->No_Line); 
		insert(p, $1);
		$$ = p;
	}
	;

 /* 15 */
selc_stmt
	: IF '(' exp ')' stmt	
	{	
		p = newNode("selc_stmt", $1->No_Line);
		insert(p, $5); 
		insert(p, $4); 
		insert(p, $3); 
		insert(p, $2); 
		insert(p, $1); 
		$$ = p;
	}
	| IF '(' exp ')' stmt ELSE stmt	
	{	
		p = newNode("selc_stmt", $1->No_Line);
		insert(p, $7);
		insert(p, $6);
		insert(p, $5);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;
	
 /* 16 */
iter_stmt
	: WHILE '(' exp ')' stmt	
	{
		p = newNode("iter_stmt", $1->No_Line);
		insert(p, $5);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	/*
	| FOR '(' exp ';' exp ';' exp ')' stmt	{p = newNode("loopstmt", $1->No_Line, $1->col);
													insert(p, $1); 
													insert(p, $2); 
													insert(p, $3); 
													insert(p, $4); 
													insert(p, $5); 
													insert(p, $6); 
													insert(p, $7); 
													insert(p, $8); 
													insert(p, $9); 
													$$ = p;}
	| DO stmt WHILE '(' exp ')' ';'	{p = newNode("loopstmt", $1->No_Line, $1->col);
											insert(p, $1); 
											insert(p, $2); 
											insert(p, $3); 
											insert(p, $4); 
											insert(p, $5); 
											insert(p, $6); 
											insert(p, $7); 
											$$ = p;}
	*/
	;

 /* 17 */
retn_stmt
	: RETURN exp ';'	
	{	p = newNode("retn_stmt", $1->No_Line);
		insert(p, $3);
		insert(p, $2); 
		insert(p, $1); 
		$$ = p;
	}
	| RETURN ';'
	{
		p = newNode("retn_stmt", $1->No_Line);
		insert(p, $2);
		insert(p, $1);  
		$$ = p;
	}
	/*
	| BREAK ';'		{p = newNode("jstmt", $1->No_Line, $1->col); insert(p, $1); insert(p, $2); $$ = p;}
	*/
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
	: GE	{ p = newNode("relop"); insert(p, $1); $$ = p;}
	: GEQ	{ p = newNode("relop"); insert(p, $1); $$ = p;}
	: LE	{ p = newNode("relop"); insert(p, $1); $$ = p;}
	: LEQ	{ p = newNode("relop"); insert(p, $1); $$ = p;}
	: EQ	{ p = newNode("relop"); insert(p, $1); $$ = p;}
	: NEQ	{ p = newNode("relop"); insert(p, $1); $$ = p;}
	;

 /* 22 */
add_expr
	: add_expr addop term
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
	: '+'	{ p = newNode("addop"); insert(p, $1); $$ = p;}
	: '-'	{ p = newNode("addop"); insert(p, $1); $$ = p;}
	;

 /* 24 */
term
	: term mulop factor
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
	: '*'	{ p = newNode("mulop"); insert(p, $1); $$ = p;}
	: '/'	{ p = newNode("mulop"); insert(p, $1); $$ = p;}
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
	| var	{ p = newNode("factor"); insert(p, $1); $$ = p;}
	| call	{ p = newNode("factor"); insert(p, $1); $$ = p;}
	| NUM	{ p = newNode("factor"); insert(p, $1); $$ = p;}
	;

 /* 27 */
call
	: ID '(' args ')'
	{
		p = newNode("call", $1->No_Line);
		insert(p, $4);
		insert(p, $3);
		insert(p, $2);
		insert(p, $1);
		$$ = p;
	}
	;

 /* 28 */
args
	: arg_list	{ p = newNode("args"); insert(p, $1); $$ = p;}
	| %empty	{ /* Do nothing */ }
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
	 getchar();
	 getchar();
}

int main(int argc,char *argv[])
{    
	char filename1[30];
	
	scanf("%s", &filename1);
     FILE* fin=NULL;
     extern FILE* yyin;
     fin=fopen(filename1,"r"); 
     if(fin==NULL)
     { 
         printf("cannot open reading file.\n");
         return -1;
     }
     yyin=fin;
     yyparse();
     print(p,0);
     fclose(fin);
	 getchar();
	 getchar();
     return 0;
}
