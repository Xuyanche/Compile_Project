
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "compile.tab.h"


int No_Line=1;
int column = 0;
void count();
%}

DIGIT [0-9]
LETTER [A-za-z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*



%%
"char"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(CHAR);}
"int"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(INT);}
"float"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(FLOAT);}
"if"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(IF);}
"else"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(ELSE);}
"do"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(DO);}
"while"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(WHILE);}
"break"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(BREAK);}
"for"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(FOR);}
"return"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(RETURN);}
"void"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(VOID);}
"struct"	{yylval.token_p = newNode(yytext, No_Line, column); count(); return(STRUCT);}


{LETTER}({LETTER}|{DIGIT})*		{ yylval.token_p = newNode(yytext, No_Line, column); count();  return IDENTIFIER; } 

0[xX]{H}+{IS}?		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(CONSTANT); }
0{DIGIT}+{IS}?		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(CONSTANT); }
{DIGIT}+{IS}?		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(CONSTANT); }
LETTER?'(\\.|[^\\'])+'	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return (CONSTANT); }

{DIGIT}*"."{DIGIT}+	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(CONSTANT); } 
{DIGIT}+"."{DIGIT}*	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return(CONSTANT); }
LETTER?\"(\\.|[^\\"])*\"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return (STRING_LITERAL); }


"\n"	{No_Line++;}

"&&"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return AND;}
"||"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return OR;}
"<="	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return LE;}
">="	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return GE;}
"=="	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return EQ;}
"!="	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return NE;}
"+"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '+';}
"-"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '-';}
"*"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '*';}
"/"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '/';}
"!"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '!';}	
","		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return ',';}
"."		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '.';}
"="		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '=';}
"<"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '<';}
">"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '>';}
"{"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '{';}
"}"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '}';}
"("		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '(';}
")"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return ')';}
"["	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '[';}
"]"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return ']';}
";"	{ yylval.token_p = newNode(yytext, No_Line, column); count(); return ';';}
"?"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '?';}
":"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return ':';}
"|"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '|';}
"^"		{ yylval.token_p = newNode(yytext, No_Line, column); count(); return '^';}



%%


yywrap()
{
	return 1;
}


void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
	ECHO;
}


