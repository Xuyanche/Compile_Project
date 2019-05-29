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
id ({letter}{letter|digit}*)
num {digit}+
whitespace [ \t\r]+

%%
 /* Keywords Specification */

 /* Type Specification */
"int"		{yylval.Token=INT;return(INT);}

 /* Control flow keywords */
"if"		{yylval.Token=IF;return(IF);}
"else"		{yylval.Token=ELSE;return(ELSE);}

 /* Loop keywords */
"while"		{yylval.Token=WHILE;return(WHILE);}

 /* Function call keywords */
"return"	{yylval.Token=RETURN;return(RETURN);}
"void"		{yylval.Token=VOID;return(VOID);}

 /* Symbol Token Specification */

  /* Parentheses */
"("		{yylval.Token=LPR;return LPR;}
")"		{yylval.Token=RPR;return RPR;}
"["		{yylval.Token=LBR;return LBR;}
"]"		{yylval.Token=RBR;return RBR;}
"{"		{yylval.Token=LCR;return LCR;}
"}"		{yylval.Token=RCR;return RCR;}

 /* Identifier and numbers */
[a-zA-Z]+	{yylval.name=strdup(yytext);return(ID);}
[0-9]+		{yylval.value=atoi(yytext);return(NUM); }

 /* Whitespace filtering and line counting */
{whitespace}	{/*Skip whitespace*/}
"\n"			{nr_line++;}

 /* Numerical Arithmetic Operators */
"+"		{yylval.Token=ADD;return ADD;}
"-"		{yylval.Token=SUB;return SUB;}
"*"		{yylval.Token=MUL;return MUL;}
"/"		{yylval.Token=DIV;return DIV;}

 /* Relative Operators */
"<"		{yylval.Token=LE;return LE;}
"<="	{yylval.Token=LEQ;return LEQ;}
">"		{yylval.Token=GE;return GE;}
">="	{yylval.Token=GEQ;return GEQ;}
"=="	{yylval.Token=EQ;return EQ;}
"!="	{yylval.Token=NEQ;return NEQ;}

 /* Assign Operator */
"="		{yylval.Token=ASN;return ASN;}

 /* Statement Delimiter */
";"		{yylval.Token=SEMI;return SEMI;}

 /* Comma */
","		{yylval.Token=COM;return COM;}

%%

int yywrap()
{
	return 1;
}