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
letter [A-za-z_]
whitespace [ \t\r]+

/*
	H			[a-fA-F0-9]
	E			[Ee][+-]?{D}+
	FS			(f|F|l|L)
	IS			(u|U|l|L)*
*/

%%
 /* Keywords Specification */

 /* Type Specification */
"int"	{ yylval.token_p = newNode(yytext, nr_line);  return(INT);}
 /*
 "char"	{ yylval.token_p = newNode(yytext, nr_line);  return(CHAR);}
 "float"	{ yylval.token_p = newNode(yytext, nr_line);  return(FLOAT);}
 */

 /* Control flow keywords */
"if"	{ yylval.token_p = newNode(yytext, nr_line);  return(IF);}
"else"	{ yylval.token_p = newNode(yytext, nr_line);  return(ELSE);}

 /* Loop keywords */
"while"	{ yylval.token_p = newNode(yytext, nr_line);  return(WHILE);}
 /*
 "do"	{ yylval.token_p = newNode(yytext, nr_line);  return(DO);}
 "break"	{ yylval.token_p = newNode(yytext, nr_line);  return(BREAK);}
 "for"	{ yylval.token_p = newNode(yytext, nr_line);  return(FOR);}
 */

 /* Function call keywords */
"return"	{ yylval.token_p = newNode(yytext, nr_line);  return(RETURN);}
"void"	{ yylval.token_p = newNode(yytext, nr_line);  return(VOID);}

 /*"struct"	{yylval.token_p = newNode(yytext, nr_line);  return(STRUCT);}*/

 /* Symbol Token Specification */

  /* Parentheses */
"("		{ yylval.token_p = newNode(yytext, nr_line);  return '(';}
")"		{ yylval.token_p = newNode(yytext, nr_line);  return ')';}
"["		{ yylval.token_p = newNode(yytext, nr_line);  return '[';}
"]"		{ yylval.token_p = newNode(yytext, nr_line);  return ']';}
"{"		{ yylval.token_p = newNode(yytext, nr_line);  return '{';}
"}"		{ yylval.token_p = newNode(yytext, nr_line);  return '}';}

 /* Identifier and numbers */
{letter}({letter}|{digit})*		{ yylval.token_p = newNode(yytext, nr_line);   return(ID); }
{digit}+	{ yylval.token_p = newNode(yytext, nr_line);   return(NUM); }

 /* Whitespace filtering and line counting */
{whitespace} {/*Skip whitespace*/}
"\n"	{nr_line++;}

 /* Numerical Arithmetic Operators */
"+"		{ yylval.token_p = newNode(yytext, nr_line); return '+';}
"-"		{ yylval.token_p = newNode(yytext, nr_line); return '-';}
"*"		{ yylval.token_p = newNode(yytext, nr_line); return '*';}
"/"		{ yylval.token_p = newNode(yytext, nr_line); return '/';}

 /* Relative Operators */
"<"		{ yylval.token_p = newNode(yytext, nr_line);  return LE;}
"<="	{ yylval.token_p = newNode(yytext, nr_line);  return LEQ;}
">"		{ yylval.token_p = newNode(yytext, nr_line);  return GE;}
">="	{ yylval.token_p = newNode(yytext, nr_line);  return GEQ;}
"=="	{ yylval.token_p = newNode(yytext, nr_line);  return EQ;}
"!="	{ yylval.token_p = newNode(yytext, nr_line);  return NEQ;}

 /* Assign Operator */
"="		{ yylval.token_p = newNode(yytext, nr_line);  return '=';}

 /* Statement Delimiter */
";"		{ yylval.token_p = newNode(yytext, nr_line);  return ';';}

 /* Comma */
","		{ yylval.token_p = newNode(yytext, nr_line);  return ',';}

 /* To be added:
	"&&"	{ yylval.token_p = newNode(yytext, nr_line);  return AND;}
	"||"	{ yylval.token_p = newNode(yytext, nr_line);  return OR;}
	"!"		{ yylval.token_p = newNode(yytext, nr_line);  return '!';}	
	"."		{ yylval.token_p = newNode(yytext, nr_line);  return '.';}
	"?"		{ yylval.token_p = newNode(yytext, nr_line);  return '?';}
	":"		{ yylval.token_p = newNode(yytext, nr_line);  return ':';}
	"|"		{ yylval.token_p = newNode(yytext, nr_line);  return '|';}
	"^"	{ yylval.token_p = newNode(yytext, nr_line);  return '^';}
	0[xX]{H}+{IS}?		{ yylval.token_p = newNode(yytext, nr_line);  return(CONSTANT); }
	0{DIGIT}+{IS}?		{ yylval.token_p = newNode(yytext, nr_line);  return(CONSTANT); }
	{DIGIT}+{IS}?		{ yylval.token_p = newNode(yytext, nr_line);  return(CONSTANT); }
	{DIGIT}*"."{DIGIT}+	{ yylval.token_p = newNode(yytext, nr_line);  return(CONSTANT); } 
	{DIGIT}+"."{DIGIT}*	{ yylval.token_p = newNode(yytext, nr_line);  return(CONSTANT); }
 */

%%

int yywrap()
{
	return 1;
}