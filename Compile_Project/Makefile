CC = gcc

parser: parser.c
	$(CC) parser.c -o parser

lex.yy.c: compile.l
	lex compile.l

parser.c: compile.l compile.y node.h
	lex compile.l;yacc compile.y -d -v -o parser.c

clean:
	rm lex.yy.c; rm parser.c; rm parser.h; rm parser;
