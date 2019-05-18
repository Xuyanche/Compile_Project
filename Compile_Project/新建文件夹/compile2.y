%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "Node.h"
#include "brothertree.c"

Node* p;
void yyerror(char *s);
FILE *fout;
%}
%union{
         struct Node *token_p;
}
%type <token_p> program extdefs extdef extvars spec stspec opttag var func paras para stmtblock stmts stmt estmt defs def decs dec init exp arrs args
%token<token_p> INT ID SEMI COMMA LC RC STRUCT RETURN IF ELSE BREAK CONT FOR READ WRITE
%left<token_p>	SUB
%right<token_p>	MINUS TYPE ASSIGNOP BINARYOP11
%left<token_p>  BINARYOP10
%left<token_p>  BINARYOP9
%left<token_p>  BINARYOP8
%left<token_p>  BINARYOP7
%left<token_p>  BINARYOP6
%left<token_p>  BINARYOP5
%left<token_p>  BINARYOP4
%left<token_p>  BINARYOP3
%left<token_p>  BINARYOP2
%left<token_p>  BINARYOP1
%right<token_p>	UNARYOP 
%left<token_p>  DOT  LP RP LB RB
%%
program : 
           extdefs    { p=newNode("program",$1->No_Line);
                       insert(p,$1);
                       $$ =p;}
        ;
extdefs : 
           extdef extdefs  { p=newNode("extdefs",$1->No_Line);
                            insert(p,$1);
                            insert(p,$2);
                            $$=p;}
        |                   { p=newNode("NULL",0);
                                $$=p;}
        ;
extdef  :  
           spec extvars SEMI  { p=newNode("extdef",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
        |  spec func stmtblock { p=newNode("extdef",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
        ;
extvars :
           dec                 { p=newNode("extvars",$1->No_Line);
                                 insert(p,$1);
                                 $$=p;}
        |  dec COMMA extvars   { p=newNode("extvars",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
        |                       { p=newNode("NULL",0);
                                $$=p;}
        ;
spec    :
           TYPE                 { p=newNode("spec",$1->No_Line);
                                 insert(p,$1);
                                 $$=p;} 
        |  stspec               { p=newNode("spec",$1->No_Line);
                                 insert(p,$1);
                                 $$=p;}      
        ;
stspec  :
           STRUCT opttag LC defs RC { p=newNode("stspec",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                insert(p,$5);
                                $$=p;}
        | STRUCT ID             { p=newNode("stspec",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
        ;
opttag  :
           ID                   { p=newNode("opttag",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
        |                       { $$=NULL;}
        ;
var     :  
           ID                   { p=newNode("var",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
        |  var LB INT RB       { p=newNode("var",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                $$=p;}
        ;
func    :
           ID LP paras RP       { p=newNode("func",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                $$=p;}
        ;
paras   :
           para COMMA paras     { p=newNode("paras",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
        |  para                 { p=newNode("paras",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
        |                        { p=newNode("NULL",0);
                                $$=p;}
        ;
para    :  
           spec var            { p=newNode("para",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;} 
        ;
stmtblock : 
           LC defs stmts RC     { p=newNode("stmtblock",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                $$=p;}
          ;
stmts     :
            stmt stmts          { p=newNode("stmts",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
          |                     { p=newNode("NULL",0);
                                $$=p;}
          ;
stmt      :
            exp SEMI            { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
          |  stmtblock           { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
          |  RETURN exp SEMI     { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
          | IF LP exp RP stmt estmt  { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                insert(p,$5);
                                insert(p,$6);
                                $$=p;}
          | FOR LP exp SEMI exp SEMI exp RP stmt { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                insert(p,$5);
                                insert(p,$6);
                                insert(p,$7);
                                insert(p,$8);
                                insert(p,$9);
                                $$=p;}
          | CONT SEMI           { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
          | BREAK SEMI          { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
          | WRITE LP exp RP SEMI    { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                insert(p,$5);
                                $$=p;}
          | READ LP exp RP SEMI    { p=newNode("stmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                insert(p,$5);
                                $$=p;}
          ;
estmt      :
            ELSE stmt            { p=newNode("estmt",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
          |                      { p=newNode("NULL",0);
                                $$=p;}
          ;
defs      :
            def defs            { p=newNode("defs",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                $$=p;}
          |                      { p=newNode("NULL",0);
                                $$=p;}
          ;
def       :
            spec decs SEMI      { p=newNode("def",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
          ;
decs      : 
            dec COMMA decs     { p=newNode("decs",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
          | dec                { p=newNode("decs",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
          ;
dec       :
            var                { p=newNode("dec",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
          | var ASSIGNOP init  { p=newNode("dec",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
init      
	: exp           { p=newNode("init",$1->No_Line);
					insert(p,$1);
					$$=p;}
	| LC args RC    { p=newNode("init",$1->No_Line);
					insert(p,$1);
					insert(p,$2);
					insert(p,$3);
					$$=p;}
	;
exp       
	: exp BINARYOP1 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP2 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP3 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP4 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP5 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP6 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP7 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP8 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP9 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	|   exp BINARYOP10 exp     { p=newNode("exp",$1->No_Line);
							insert(p,$1);
							insert(p,$2);
							insert(p,$3);
							$$=p;}
	| exp BINARYOP11 exp	{p = newNode("exp", $1->No_Line);
								insert(p, $1);
								insert(p, $2);
								insert(p, $3);
								$$ = p;}
	| exp ASSIGNOP exp	{p = newNode("exp", $1->No_Line);
						   insert(p, $1);
						   insert(p, $2);
						   insert(p, $3);
						$$ = p;}
	| exp SUB exp	       {p = newNode("exp", $1->No_Line);
							  insert(p, $1);
							  insert(p, $2);
							  insert(p, $3);
							  $$ = p;}
	|  UNARYOP exp        { p=newNode("exp",$1->No_Line);
						insert(p,$1);
						insert(p,$2);
						$$=p;}
	| SUB exp %prec MINUS	{p = newNode("exp", $1->No_Line);
								insert(p, $1);
								insert(p, $2);
								$$ = p;}
	|  LP exp RP          { p=newNode("exp",$1->No_Line);
						insert(p,$1);
						insert(p,$2);
						insert(p,$3);
						$$=p;}
	|  ID LP args RP      { p=newNode("exp",$1->No_Line);
						insert(p,$1);
						insert(p,$2);
						insert(p,$3);
						insert(p,$4);
						$$=p;}
	|   ID arrs           { p=newNode("exp",$1->No_Line);
						insert(p,$1);
						insert(p,$2);
						$$=p;}
	|   exp DOT ID      { p=newNode("exp",$1->No_Line);
						insert(p,$1);
						insert(p,$2);
						insert(p,$3);
						$$=p;}
	|  INT               { p=newNode("exp",$1->No_Line);
						insert(p,$1);
						$$=p;}
	|                    { p=newNode("NULL",0);
						$$=p;}
	;
arrs      :
             LB exp RB arrs    { p=newNode("arrs",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                insert(p,$4);
                                $$=p;}
          |                     { p=newNode("NULL",0);
                                $$=p;}
          ; 
args      :  exp COMMA args    { p=newNode("args",$1->No_Line);
                                insert(p,$1);
                                insert(p,$2);
                                insert(p,$3);
                                $$=p;}
          | exp                { p=newNode("args",$1->No_Line);
                                insert(p,$1);
                                $$=p;}
          ;
%%























statement_list
	: statement
	| statement_list statement
	;
	
statement
	: labeled_statement
	| compund_statement
	| expression_statement
	| selection_statement
	| loop_statement
	| jump_statement
	;
	
expression
	: assignment_expression
	| expression ',' assignment_expression
	;

expression_statement
	: ';'
	| expression ';'
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compund_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declare_list '}'
	| '{' declare_list statement_list '}'
	;
	




assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;


declaration
	: declaration_specifier ';'
	| declaration_specifier declare_list ';'
	;


primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

constant_expression
	: conditional_expression
	;





pointer
	: '*'
	| '*' pointer
	;






identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

	
argument_list
	: assignment_expression
	| argument_list ',' assignment_expression
	;


declaration_specifier
	: type_specifier
	;
	
declare_list
	: declare_item
	| declare_list ',' declare_item
	;

declare_item
	: declarator
	| declarator '=' assignment_expression
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' parameter_type_list ')'
	;

parameter_type_list
	: parameter_list
	;





assignment_operator
	: '='
	;
	


cast_expression
	: unary_expression
	;



equality_expression
	: equality_expression EQ relation_expression
	| equality_expression NE relation_expression
	;
	
inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

exclusive_or_expression
	: exclusive_or_expression '^' inclusive_or_expression
	| inclusive_or_expression
	;




assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

