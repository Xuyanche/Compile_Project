lex compile.l
yacc compile.y -v -d -o parser.c
gcc parser.c -o parser
