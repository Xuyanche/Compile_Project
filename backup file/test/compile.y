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
%type <token_p> program extdefs extdef extvars spec type
%type <token_p> var func paras para stmtblock 
%type <token_p>  defs def decs dec
%token <token_p>  '+' '-' '*' '/' '!' ',' '.' '=' '>' '<' '{' '}' '(' ')' '[' ']' ';' '?' '|' '^' ':'
%token <token_p> IDENTIFIER CONSTANT TYPE_NAME STRING_LITERAL
%token <token_p> CHAR INT FLOAT VOID STRUCT
%token <token_p> LE GE AND OR EQ NE
%token <token_p> IF ELSE DO WHILE BREAK FOR RETURN SWITCH CASE DEFAULT

%start program
%%

program
	:extdefs {p = newNode("program", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;
	
extdefs
	: extdef extdefs 	{p = newNode("extdefs", $1->No_Line, $1->col);
						insert(p, $1); insert(p, $2);
						$$ = p;}
	|
	;

extdef
	: spec extvars ';'	{p = newNode("extdef", $1->No_Line, $1->col);
						insert(p, $1);
						insert(p, $2);
						insert(p, $3);
						$$ = p;}
	| spec func stmtblock	{p = newNode("extdef", $1->No_Line, $1->col); 
							insert(p, $1);
							insert(p, $2);
							insert(p, $3);
							$$ = p;}
	;
	
extvars
	: dec				{p = newNode("extvars", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| dec ',' extvars	{p = newNode("extvars", $1->No_Line, $1->col);
						insert(p, $1);
						insert(p, $2);
						insert(p, $3);
						$$ = p;}
	;

spec
	: type			{p = newNode("spec", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

type
	: VOID			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| INT			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| CHAR			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| FLOAT			{p = newNode("type", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

decs
	: dec ',' decs	{p = newNode("decs", $1->No_Line, $1->col);
					insert(p, $1); 
					insert(p, $2); 
					insert(p, $3); 
					$$ = p;}
	| dec	{p = newNode("decs", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

dec	
	: var	{p = newNode("dec", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;
	
var
	: IDENTIFIER	{p = newNode("var", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

func
	: IDENTIFIER '(' paras ')'	{p = newNode("func", $1->No_Line, $1->col); 
								insert(p, $1);
								insert(p, $2);
								insert(p, $3);
								insert(p, $4);
								$$ = p;}
	;

paras
	: para ',' paras	{p = newNode("paras", $1->No_Line, $1->col);
						insert(p, $1); 
						insert(p, $2); 
						insert(p, $3); 
						$$ = p;}
	| para		{p = newNode("paras", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

para
	: spec var 	{p = newNode("para", $1->No_Line, $1->col);
				insert(p, $1);
				insert(p, $2);
				$$ = p;}
	;
	
stmtblock
	: '{' defs '}'	{p = newNode("stmtblock", $1->No_Line, $1->col);
							insert(p, $1);
							insert(p, $2);
							insert(p, $3);
							$$ = p;}
	;
	
defs
	: def defs	{p = newNode("defs", $1->No_Line, $1->col); 
				insert(p, $1);
				insert(p, $2);
				$$ = p;}
	|	{$$ = NULL;}
	;

def
	: spec decs ';' {p = newNode("def", $1->No_Line, $1->col);
					insert(p, $1);
					insert(p, $2);
					insert(p, $3);
					$$ = p;}
	;

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
