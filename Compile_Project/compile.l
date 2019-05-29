 /* C Minus Lexical Specification File
  * Code referenced from TINY Compiler Implementation from book
  */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "def.h"
#include "node.h"
#include "parser.h"
#define MAX_TOKEN_LENGTH
/* Global variable specification */
int nr_line = 1;
char TokenString[MAX_TOKEN_LENGTH];
%}
/* Basic symbol spcification */
digit [0-9]
letter [A-za-z]
whitespace [ \t\r]+

%%
 /* Keywords Specification */

 /* Type Specification */
"int"		{return(INT);}

 /* Control flow keywords */
"if"		{return(IF);}
"else"		{return(ELSE);}

 /* Loop keywords */
"while"		{return(WHILE);}

 /* Function call keywords */
"return"	{return(RETURN);}
"void"		{return(VOID);}

 /* Symbol Token Specification */

  /* Parentheses */
"("		{return LPR;}
")"		{return RPR;}
"["		{return LBR;}
"]"		{return RBR;}
"{"		{return LCR;}
"}"		{return RCR;}

 /* Identifier and numbers */
{letter}({letter}|{digit})*		{return(ID);}
{digit}+						{return(NUM); }

 /* Whitespace filtering and line counting */
{whitespace}	{/*Skip whitespace*/}
"\n"			    {nr_line++;}

 /* Numerical Arithmetic Operators */
"+"		{return ADD;}
"-"		{return SUB;}
"*"		{return MUL;}
"/"		{return DIV;}

 /* Relative Operators */
"<"		{return LE;}
"<="	{return LEQ;}
">"		{return GE;}
">="	{return GEQ;}
"=="	{return EQ;}
"!="	{return NEQ;}

 /* Assign Operator */
"="		{return ASN;}

 /* Statement Delimiter */
";"		{return SEMI;}

 /* Comma */
","		{return COM;}

 /* Comment */
"/*"  {
  char next1, next2;
  while (true){
    next1 = input();
    if (next1 == '\n') nr_line++;
    else if (next1 == EOF) break;
    else if (next1 == '*'){
      next2 = input();
      if (next2 == '/') break;
      else unput(next2);
    }
  }
}

. { return ERROR;}

%%

int yywrap()
{
	return 1;
}

int GetToken(){
  CurrentToken = yylex();
  strcpy()
}