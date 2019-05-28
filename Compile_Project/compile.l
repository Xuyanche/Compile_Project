%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "parser.h"
/* Global variable specification */
int nr_line = 1;
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
"<"		{ yylval.token_p = newNode(yytext, nr_line);  return LE;}
"<="	{ yylval.token_p = newNode(yytext, nr_line);  return LEQ;}
">"		{ yylval.token_p = newNode(yytext, nr_line);  return GE;}
">="	{ yylval.token_p = newNode(yytext, nr_line);  return GEQ;}
"=="	{ yylval.token_p = newNode(yytext, nr_line);  return EQ;}
"!="	{ yylval.token_p = newNode(yytext, nr_line);  return NEQ;}

 /* Assign Operator */
"="		{ yylval.token_p = newNode(yytext, nr_line);  return ASN;}

 /* Statement Delimiter */
";"		{ yylval.token_p = newNode(yytext, nr_line);  return SEMI;}

 /* Comma */
","		{ yylval.token_p = newNode(yytext, nr_line);  return COM;}

%%

int yywrap()
{
	return 1;
}

int GetToken(){
	