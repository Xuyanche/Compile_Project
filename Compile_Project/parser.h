
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ADD = 258,
     SUB = 259,
     MUL = 260,
     DIV = 261,
     COM = 262,
     ASN = 263,
     LCR = 264,
     RCR = 265,
     LBR = 266,
     RBR = 267,
     LPR = 268,
     RPR = 269,
     SEMI = 270,
     INT = 271,
     VOID = 272,
     IF = 273,
     ELSE = 274,
     WHILE = 275,
     RETURN = 276,
     LE = 277,
     LEQ = 278,
     GE = 279,
     GEQ = 280,
     EQ = 281,
     NEQ = 282,
     ADDR = 283,
     ID = 284,
     NUM = 285
   };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define COM 262
#define ASN 263
#define LCR 264
#define RCR 265
#define LBR 266
#define RBR 267
#define LPR 268
#define RPR 269
#define SEMI 270
#define INT 271
#define VOID 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define RETURN 276
#define LE 277
#define LEQ 278
#define GE 279
#define GEQ 280
#define EQ 281
#define NEQ 282
#define ADDR 283
#define ID 284
#define NUM 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 ".\\compile.y"

	int Token;
	int dtype;
	int value;
	STNode* node;
	char* name;



/* Line 1676 of yacc.c  */
#line 122 "parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


