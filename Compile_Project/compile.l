%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "parser.h"
#define MAX_TOKEN_LEN 20
/* Global variable specification */
int nr_line = 1;
char TokenString[MAX_TOKEN_LEN];
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
"\n"			{nr_line++;}

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

%%

int yywrap()
{
	return 1;
}

int GetToken(){
  int TokenType = yylex();
  strcpy(TokenString, yytext);
  return TokenType;
}