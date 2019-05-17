%token IDENTIFIER CONSTANT TYPE_NAME STRING_LITERAL
%token CHAR INT FLOAT VOID
%token LE GE AND OR EQ NE
%token IF ELSE DO WHILE BREAK FOR RETURN SWITCH CASE DEFAULT

%start translation_unit
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
	
selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;
	
loop_statement
	: WHILE '(' expression ')' statement
	| FOR '(' expression_statement expression_statement expression_statement ')' statement
	| DO statement WHILE '(' expression ')' ';'
	;
	
jump_statement
	: BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;


function_definition
	: declarator compund_statement
	| declarator declaration compund_statement
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




type_specifier
	: VOID
	| INT
	| FLOAT
	| CHAR
	| TYPE_NAME
	;

pointer
	: '*'
	| '*' pointer
	;

parameter_list
	: parameter
	| parameter_list ',' parameter
	;

parameter
	: declaration_specifier
	| declaration_specifier declarator
	;


identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

left_expression
	: primary_expression
	| left_expression '[' ']'
	| left_expression '(' ')'
	| left_expression '(' argument_list ')'
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
	
unary_expression
	: unary_operator cast_expression
	| left_expression
	;

unary_operator
	: '+'
	| '-'
	| '*'
	| '!'
	| '*'
	;

cast_expression
	: unary_expression
	;

multip_expression
	: cast_expression
	| multip_expression '*' cast_expression
	| multip_expression '/' cast_expression
	;
	
add_expression
	: cast_expression
	| add_expression '+' multip_expression
	| add_expression '-' multip_expression
	;

relation_expression
	: relation_expression '<' add_expression;
	| relation_expression '<' add_expression;
	| relation_expression LE add_expression;
	| relation_expression GE add_expression;
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


logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;





%%
#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}