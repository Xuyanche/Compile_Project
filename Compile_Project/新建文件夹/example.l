%{
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "example.tab.h"
void  yyerror(char *s);
int No_Line=1;
%}
%%
\n                        {No_Line++;}
int                    { yylval.token_p= newNode(yytext,No_Line);
                          return TYPE;}
struct                  { yylval.token_p= newNode(yytext,No_Line);
                          return STRUCT; }
return                  { yylval.token_p= newNode(yytext,No_Line);
                          return RETURN; }
if                      { yylval.token_p= newNode(yytext,No_Line);
                          return IF ; }
else                    { yylval.token_p= newNode(yytext,No_Line);
                          return ELSE ;}
break                   { yylval.token_p= newNode(yytext,No_Line);
                          return BREAK;}
cont                    { yylval.token_p= newNode(yytext,No_Line);
                          return CONT; }
for                     { yylval.token_p= newNode(yytext,No_Line);
                          return FOR;  }
read                    { yylval.token_p= newNode(yytext,No_Line);
                          return READ;  }
write                    { yylval.token_p= newNode(yytext,No_Line);
                          return WRITE;  }
0(x|X)([0-9A-F]{1,8})  {
                       yylval.token_p= newNode(yytext,No_Line);
                       return INT;
                      }
[0-9]{1,10}            {
                       yylval.token_p= newNode(yytext,No_Line);
                       return INT;
                      }
[a-zA-Z_]([a-zA-Z_0-9]*)   {
                       yylval.token_p= newNode(yytext,No_Line);
                       return ID;
                      }
[;]                    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return SEMI;
                      }
[,]                    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return COMMA;
                      }
[.]                    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return DOT;
                      }
(!)|(\+\+)|(\-\-)|(~)   {
                       yylval.token_p= newNode(yytext,No_Line);
                       return UNARYOP;                  
                      }
[-]              	{yylval.token_p = newNode(yytext, No_Line);
	                return (SUB);}
(\*)|(\/)|(%)         {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP1;
                       }
(\+)                  {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP2;
                       }
(<<)|(>>)             {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP3;
                       }
(>)|(>=)|(<)|(<=)     {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP4;
                       }
(==)|(!=)             {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP5;
                       }
[&]                   {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP6;
                       }
"^"                   {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP7;
                       }
(\|)                    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP8;
                       }
(&&)                     {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP9;
                       }
(\|\|)                  {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP10;
                       }
(\+=)|(-=)|(\*=)|(\/=)|(&=)|(^=)|(\|=)|(<<=)|(>>=)    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP11;
                       }
[=]                     { yylval.token_p= newNode(yytext,No_Line);
                        return ASSIGNOP;}
[(]                     { yylval.token_p= newNode(yytext,No_Line);
                          return LP;  }
[)]                     { yylval.token_p= newNode(yytext,No_Line);
                          return RP;  }
[[]                     { yylval.token_p= newNode(yytext,No_Line);
                          return LB;  }
[]]                     { yylval.token_p= newNode(yytext,No_Line);
                          return RB;  }
[{]                     { yylval.token_p= newNode(yytext,No_Line);
                          return LC;  }
[}]                     { yylval.token_p= newNode(yytext,No_Line);
                          return RC;  }
[ \t]+                  ;
.                       yyerror("Error:invalid input.\n");

%% 
int yywrap() {
        return 1;
}
