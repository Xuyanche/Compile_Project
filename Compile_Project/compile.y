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
%type <token_p> var func paras para args defs def dec
%type <token_p>  assignop unaryop init 
%type <token_p> exp primexp unaryexp leftexp relationexp equalexp addexp multipexp 
%type <token_p> stmtblock stmts
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


dec	
	: var	{p = newNode("dec", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| var assignop init	{p = newNode("dec", $1->No_Line, $1->col); 
						insert(p, $1);
						insert(p, $2);
						insert(p, $3);
						$$ = p;}
	;


assignop
	: '='	{p = newNode("assignop", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

init
	: exp	{p = newNode("init", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	
	
	
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
	: '{' defs stmts '}'	{p = newNode("stmtblock", $1->No_Line, $1->col);
							insert(p, $1);
							insert(p, $2);
							insert(p, $3);
							insert(p, $4);
							$$ = p;}
	;
	
stmts
	: exp ';'	{p = newNode("stmts", $1->No_Line, $1->col); 
				insert(p, $1); 
				insert(p, $2); 
				$$ = p;}
	| stmtblock	{p = newNode("stmts", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| selstmt	{p = newNode("stmts", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| loopstmt	{p = newNode("stmts", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| jstmt		{p = newNode("stmts", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;	

	
defs
	: def defs	{p = newNode("defs", $1->No_Line, $1->col); 
				insert(p, $1);
				insert(p, $2);
				$$ = p;}
	|	{$$ = NULL;}
	;

def
	: spec extvars ';' {p = newNode("def", $1->No_Line, $1->col);
					insert(p, $1);
					insert(p, $2);
					insert(p, $3);
					$$ = p;}
	;

exp
	: relationexp	{p = newNode("exp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| equalexp	{p = newNode("exp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| addexp	{p = newNode("exp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| multipexp	{p = newNode("exp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}	
	;

primexp
	: IDENTIFIER	{p = newNode("primexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| CONSTANT	{p = newNode("primexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| STRING_LITERAL	{p = newNode("primexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| '(' exp ')'	{p = newNode("primexp", $1->No_Line, $1->col);
					insert(p, $1);
					insert(p, $2);
					insert(p, $3);
					$$ = p;}
	;

unaryop
	: '+'	{p = newNode("unaryop", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| '-'	{p = newNode("unaryop", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| '*'	{p = newNode("unaryop", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| '!'	{p = newNode("unaryop", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

unaryexp
	: unaryop unaryexp	{p = newNode("unaryexp", $1->No_Line, $1->col);
						insert(p, $1); 
						insert(p, $2); 
						$$ = p;}
	| leftexp	{p = newNode("unaryexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}	
	;


leftexp
	: primexp	{p = newNode("leftexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| leftexp '[' ']'	{p = newNode("leftexp", $1->No_Line, $1->col); 
						insert(p, $1);
						insert(p, $2);
						insert(p, $3);
						$$ = p;}
	| leftexp '(' ')'	{p = newNode("leftexp", $1->No_Line, $1->col); 
						insert(p, $1); 
						insert(p, $2); 
						insert(p, $3); 
						$$ = p;}
	| leftexp '(' args ')'	{p = newNode("leftexp", $1->No_Line, $1->col);
							insert(p, $1); 
							insert(p, $2); 
							insert(p, $3); 
							insert(p, $4); 
							$$ = p;}					
	;

args
	: exp ',' args	{p = newNode("args", $1->No_Line, $1->col); 
					insert(p, $1); 
					insert(p, $2); 
					insert(p, $3); 
					$$ = p;}
	| exp	{p = newNode("args", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;
	
relationexp
	: unaryexp	{p = newNode("relationexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	|  relationexp '<' addexp	{p = newNode("relationexp", $1->No_Line, $1->col); 
								insert(p, $1); 
								insert(p, $2); 
								insert(p, $3); 
								$$ = p;}
	| relationexp '>' addexp 	{p = newNode("relationexp", $1->No_Line, $1->col); 
								insert(p, $1); 
								insert(p, $2); 
								insert(p, $3); 
								$$ = p;}
	| relationexp LE addexp	{p = newNode("relationexp", $1->No_Line, $1->col);
								insert(p, $1); 
								insert(p, $2); 
								insert(p, $3); 
								$$ = p;}
	| relationexp GE addexp	{p = newNode("relationexp", $1->No_Line, $1->col); 
								insert(p, $1); 
								insert(p, $2); 
								insert(p, $3); 
								$$ = p;}
	;

	
equalexp
	: equalexp EQ addexp	{p = newNode("equalexp", $1->No_Line, $1->col);
								insert(p, $1); 
								insert(p, $2); 
								insert(p, $3); 
								$$ = p;}
	| equalexp NE addexp	{p = newNode("equalexp", $1->No_Line, $1->col); 
								insert(p, $1);
								insert(p, $2);
								insert(p, $3);
								$$ = p;}
	| unaryexp	{p = newNode("addexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	;

addexp
	: unaryexp	{p = newNode("addexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| addexp '+' multipexp	{p = newNode("addexp", $1->No_Line, $1->col);
							insert(p, $1);
							insert(p, $2);
							insert(p, $3);
							$$ = p;}
	| addexp '-' multipexp	{p = newNode("addexp", $1->No_Line, $1->col);
							insert(p, $1); 
							insert(p, $2); 
							insert(p, $3); 
							$$ = p;}
	;

multipexp
	: unaryexp	{p = newNode("multipexp", $1->No_Line, $1->col); insert(p, $1); $$ = p;}
	| multipexp '*' unaryexp	{p = newNode("multipexp", $1->No_Line, $1->col); 
								insert(p, $1); 
								insert(p, $2); 
								insert(p, $3); 
								$$ = p;}
	| multipexp '/' unaryexp	{p = newNode("multipexp", $1->No_Line, $1->col); 
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
