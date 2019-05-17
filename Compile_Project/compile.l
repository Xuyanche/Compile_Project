
%{
#include <stdio.h>
#include <y.tab.h>

void count();
%}

DIGIT [0-9]
LETTER [A-za-z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*



%%
"char"	{ count(); return(CHAR);}
"int"	{ count(); return(INT);}
"float"	{ count(); return(FLOAT);}
"if"	{ count(); return(IF);}
"else"	{ count(); return(ELSE);}
"do"	{ count(); return(DO);}
"while"	{ count(); return(WHILE);}
"break"	{ count(); return(BREAK);}
"for"	{ count(); return(FOR);}
"return"	{ count(); return(RETURN);}
"void"	{ count(); return(VOID);}


{LETTER}({LETTER}|{DIGIT})*		{ count();  return check_type(); } 

0[xX]{H}+{IS}?		{ count(); return(CONSTANT); }
0{DIGIT}+{IS}?		{ count(); return(CONSTANT); }
{DIGIT}+{IS}?		{ count(); return(CONSTANT); }
LETTER?'(\\.|[^\\'])+'	{ count(); return(CONSTANT); }

{DIGIT}*"."{DIGIT}+	{ count(); return(CONSTANT); } //number
{DIGIT}+"."{DIGIT}*	{ count(); return(CONSTANT); }
LETTER?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }



"&&"	{ count(); return AND;}
"||"	{ count(); return OR;}
"<="	{ count(); return LE;}
">="	{ count(); return GE;}
"=="	{ count(); return EQ;}
"!="	{ count(); return NE;}
"+"		{ count(); return '+';}
"-"		{ count(); return '-';}
"*"		{ count(); return '*';}
"/"		{ count(); return '/';}
"!"		{ count(); return '!';}	
","		{ count(); return ',';}
"."		{ count(); return '.';}
"="		{ count(); return '=';}
"<"		{ count(); return '<';}
">"		{ count(); return '>';}
"{"		{ count(); return '{';}
"}"		{ count(); return '}';}
"("		{ count(); return '(';}
")"		{ count(); return ')';}
"["		{ count(); return '[';}
"]"		{ count(); return ']';}
";"		{ count(); return ';';}
"*"		{ count(); return '*';}



%%

yywrap()
{
	return 1;
}



int checktype()
{
	// this function is meant to return if the word is a identifier or a typename (define by user)
	// now just return identifier
	return (IDENTIFIER);
}


int column = 0;

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





