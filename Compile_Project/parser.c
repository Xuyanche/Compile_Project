
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\compile.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "node.h"
#define YYDEBUG 1
STNode* p;
void yyerror(char *s);
FILE *fout;
extern int column;


/* Line 189 of yacc.c  */
#line 87 "parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUM = 259,
     INT = 260,
     VOID = 261,
     IF = 262,
     ELSE = 263,
     WHILE = 264,
     RETURN = 265,
     LE = 266,
     LEQ = 267,
     GE = 268,
     GEQ = 269,
     EQ = 270,
     NEQ = 271
   };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define INT 260
#define VOID 261
#define IF 262
#define ELSE 263
#define WHILE 264
#define RETURN 265
#define LE 266
#define LEQ 267
#define GE 268
#define GEQ 269
#define EQ 270
#define NEQ 271




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 14 ".\\compile.y"

	STNode *token_p;



/* Line 214 of yacc.c  */
#line 161 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 173 "parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   100

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  102

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      11,    12,     5,     3,     7,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    15,
       2,     8,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    13,     2,    14,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     9,     2,    10,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      27,    29,    36,    38,    40,    44,    46,    49,    54,    59,
      62,    63,    66,    67,    69,    71,    73,    75,    77,    80,
      82,    88,    96,   102,   106,   109,   113,   115,   117,   122,
     126,   128,   130,   132,   134,   136,   138,   140,   144,   146,
     148,   150,   154,   156,   158,   160,   164,   166,   168,   170,
     175,   177,   178,   182
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    32,    -1,    32,    33,    -1,    33,    -1,
      34,    -1,    36,    -1,    35,    16,    15,    -1,    35,    16,
      13,    17,    14,    15,    -1,    19,    -1,    18,    -1,    35,
      16,    11,    37,    12,    40,    -1,    38,    -1,    19,    -1,
      38,     7,    39,    -1,    39,    -1,    35,    16,    -1,    35,
      16,    13,    14,    -1,     9,    41,    42,    10,    -1,    41,
      34,    -1,    -1,    42,    43,    -1,    -1,    44,    -1,    40,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    15,    -1,
      15,    -1,    20,    11,    48,    12,    43,    -1,    20,    11,
      48,    12,    43,    21,    43,    -1,    22,    11,    48,    12,
      43,    -1,    23,    48,    15,    -1,    23,    15,    -1,    49,
       8,    48,    -1,    50,    -1,    16,    -1,    16,    13,    48,
      14,    -1,    52,    51,    52,    -1,    52,    -1,    26,    -1,
      27,    -1,    24,    -1,    25,    -1,    28,    -1,    29,    -1,
      52,    53,    54,    -1,    54,    -1,     3,    -1,     4,    -1,
      54,    55,    56,    -1,    56,    -1,     5,    -1,     6,    -1,
      11,    48,    12,    -1,    49,    -1,    57,    -1,    17,    -1,
      16,    11,    58,    12,    -1,    59,    -1,    -1,    59,     7,
      48,    -1,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    37,    44,    54,    60,    70,    78,    93,
      94,   103,   118,   124,   134,   142,   152,   159,   172,   187,
     196,   203,   212,   219,   220,   221,   222,   223,   228,   235,
     245,   255,   271,   307,   314,   328,   336,   346,   352,   365,
     373,   383,   384,   385,   386,   387,   388,   393,   401,   411,
     412,   417,   425,   435,   436,   441,   449,   450,   451,   456,
     470,   471,   476,   484
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "'-'", "'*'", "'/'", "','", "'='",
  "'{'", "'}'", "'('", "')'", "'['", "']'", "';'", "ID", "NUM", "INT",
  "VOID", "IF", "ELSE", "WHILE", "RETURN", "LE", "LEQ", "GE", "GEQ", "EQ",
  "NEQ", "$accept", "program", "declaration_list", "declaration",
  "var_decl", "type", "func_decl", "paras", "para_list", "para",
  "comp_stmt", "local_decls", "stmt_list", "stmt", "expr_stmt",
  "selc_stmt", "iter_stmt", "retn_stmt", "expr", "var", "simple_expr",
  "relop", "add_expr", "addop", "term", "mulop", "factor", "call", "args",
  "arg_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,    44,    61,   123,
     125,    40,    41,    91,    93,    59,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    34,    34,    35,
      35,    36,    37,    37,    38,    38,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    43,    43,    43,    44,    44,
      45,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    51,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    56,    56,    57,
      58,    58,    59,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     6,     1,     1,     3,     1,     2,     4,     4,     2,
       0,     2,     0,     1,     1,     1,     1,     1,     2,     1,
       5,     7,     5,     3,     2,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,     9,     0,     2,     4,     5,     0,     6,     1,
       3,     0,     0,     0,     7,     9,     0,     0,    12,    15,
       0,    16,     0,     0,     0,     0,    20,    11,    14,     8,
      17,    22,    19,     0,     0,     0,    18,     0,    29,    37,
      58,     0,     0,     0,    24,    21,    23,    25,    26,    27,
       0,    56,    36,    40,    48,    52,    57,     0,    61,     0,
       0,     0,    34,     0,    28,     0,    49,    50,    43,    44,
      41,    42,    45,    46,     0,     0,    53,    54,     0,    55,
      63,     0,    60,     0,     0,     0,    33,    35,    56,    39,
      47,    51,    59,     0,    38,     0,     0,    62,    30,    32,
       0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    17,    18,    19,
      44,    31,    34,    45,    46,    47,    48,    49,    50,    51,
      52,    74,    53,    75,    54,    78,    55,    56,    81,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int8 yypact[] =
{
     -14,   -94,   -94,    11,   -14,   -94,   -94,     1,   -94,   -94,
     -94,    39,    50,     9,   -94,    35,    23,    43,    56,   -94,
      57,    59,    64,   -14,    60,    62,   -94,   -94,   -94,   -94,
     -94,   -14,   -94,    58,    26,    12,   -94,     2,   -94,    27,
     -94,    66,    67,    -1,   -94,   -94,   -94,   -94,   -94,   -94,
      65,    71,   -94,     5,    55,   -94,   -94,    69,     2,     2,
       2,     2,   -94,    68,   -94,     2,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     2,     2,   -94,   -94,     2,   -94,
     -94,    70,    77,    72,    73,    75,   -94,   -94,   -94,    41,
      55,   -94,   -94,     2,   -94,    42,    42,   -94,    74,   -94,
      42,   -94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -94,   -94,   -94,    84,    61,   -11,   -94,   -94,   -94,    76,
      78,   -94,   -94,   -93,   -94,   -94,   -94,   -94,   -37,    -8,
     -94,   -94,    15,   -94,    16,   -94,    18,   -94,   -94,   -94
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -14
static const yytype_int8 yytable[] =
{
      57,    16,    98,    99,     1,     2,    63,   101,    66,    67,
      37,     9,    16,    37,    62,    39,    40,    11,    39,    40,
      33,    80,    83,    84,    85,    13,    20,    14,    87,    68,
      69,    70,    71,    72,    73,    26,    36,    37,    58,    21,
      59,    38,    39,    40,    66,    67,    41,   -13,    42,    43,
      12,    26,    13,    37,    14,    22,    97,    38,    39,    40,
      76,    77,    41,    23,    42,    43,    88,    88,     1,    15,
      88,    24,    25,    26,    35,    29,    30,    60,    61,    65,
      64,    79,    92,    86,    93,    95,    94,    96,    10,    89,
       0,    90,    32,     0,     0,   100,    91,     0,     0,    28,
      27
};

static const yytype_int8 yycheck[] =
{
      37,    12,    95,    96,    18,    19,    43,   100,     3,     4,
      11,     0,    23,    11,    15,    16,    17,    16,    16,    17,
      31,    58,    59,    60,    61,    13,    17,    15,    65,    24,
      25,    26,    27,    28,    29,     9,    10,    11,    11,    16,
      13,    15,    16,    17,     3,     4,    20,    12,    22,    23,
      11,     9,    13,    11,    15,    12,    93,    15,    16,    17,
       5,     6,    20,     7,    22,    23,    74,    75,    18,    19,
      78,    14,    13,     9,    16,    15,    14,    11,    11,     8,
      15,    12,    12,    15,     7,    12,    14,    12,     4,    74,
      -1,    75,    31,    -1,    -1,    21,    78,    -1,    -1,    23,
      22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    19,    31,    32,    33,    34,    35,    36,     0,
      33,    16,    11,    13,    15,    19,    35,    37,    38,    39,
      17,    16,    12,     7,    14,    13,     9,    40,    39,    15,
      14,    41,    34,    35,    42,    16,    10,    11,    15,    16,
      17,    20,    22,    23,    40,    43,    44,    45,    46,    47,
      48,    49,    50,    52,    54,    56,    57,    48,    11,    13,
      11,    11,    15,    48,    15,     8,     3,     4,    24,    25,
      26,    27,    28,    29,    51,    53,     5,     6,    55,    12,
      48,    58,    59,    48,    48,    48,    15,    48,    49,    52,
      54,    56,    12,     7,    14,    12,    12,    48,    43,    43,
      21,    43
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 32 ".\\compile.y"
    {p = newNode("program", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 38 ".\\compile.y"
    { 
		p = newNode("declaration_list", (yyvsp[(1) - (2)].token_p)->No_Line);
		insert(p, (yyvsp[(2) - (2)].token_p)); 
		insert(p, (yyvsp[(1) - (2)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 45 ".\\compile.y"
    {	
		p = newNode("declaration_list", (yyvsp[(1) - (1)].token_p)->No_Line); 
		insert(p, (yyvsp[(1) - (1)].token_p)); 
		(yyval.token_p) = p;
	}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 55 ".\\compile.y"
    {	
		p = newNode("declaration", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 ".\\compile.y"
    {	
		p = newNode("declaration", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 71 ".\\compile.y"
    {	
		p = newNode("var_decl", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 79 ".\\compile.y"
    {
		p = newNode("var_decl", (yyvsp[(1) - (6)].token_p)->No_Line);
		insert(p, (yyvsp[(6) - (6)].token_p));
		insert(p, (yyvsp[(5) - (6)].token_p));
		insert(p, (yyvsp[(4) - (6)].token_p));
		insert(p, (yyvsp[(3) - (6)].token_p));
		insert(p, (yyvsp[(2) - (6)].token_p));
		insert(p, (yyvsp[(1) - (6)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 93 ".\\compile.y"
    {p = newNode("type", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 94 ".\\compile.y"
    {p = newNode("type", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 104 ".\\compile.y"
    {	
		p = newNode("func_decl", (yyvsp[(1) - (6)].token_p)->No_Line);
		insert(p, (yyvsp[(6) - (6)].token_p));
		insert(p, (yyvsp[(5) - (6)].token_p));
		insert(p, (yyvsp[(4) - (6)].token_p));
		insert(p, (yyvsp[(3) - (6)].token_p));
		insert(p, (yyvsp[(2) - (6)].token_p));
		insert(p, (yyvsp[(1) - (6)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 119 ".\\compile.y"
    {	
		p = newNode("paras", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 125 ".\\compile.y"
    {	
		p = newNode("paras", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 135 ".\\compile.y"
    {	
		p = newNode("para_list", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 143 ".\\compile.y"
    {	
		p = newNode("para_list", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 ".\\compile.y"
    {	
		p = newNode("para", (yyvsp[(1) - (2)].token_p)->No_Line);
		insert(p, (yyvsp[(2) - (2)].token_p));
		insert(p, (yyvsp[(1) - (2)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 160 ".\\compile.y"
    {	
		p = newNode("para", (yyvsp[(1) - (4)].token_p)->No_Line);
		insert(p, (yyvsp[(4) - (4)].token_p));
		insert(p, (yyvsp[(3) - (4)].token_p));
		insert(p, (yyvsp[(2) - (4)].token_p));
		insert(p, (yyvsp[(1) - (4)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 173 ".\\compile.y"
    {	
		p = newNode("comp_stmt", (yyvsp[(1) - (4)].token_p)->No_Line);
		insert(p, (yyvsp[(4) - (4)].token_p));
		if ((yyvsp[(3) - (4)].token_p))
			insert(p, (yyvsp[(3) - (4)].token_p));
		if ((yyvsp[(2) - (4)].token_p))
			insert(p, (yyvsp[(2) - (4)].token_p));
		insert(p, (yyvsp[(1) - (4)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 188 ".\\compile.y"
    {
		p = newNode("local_decls", (yyvsp[(2) - (2)].token_p)->No_Line); 
		insert(p, (yyvsp[(2) - (2)].token_p));
		if ((yyvsp[(1) - (2)].token_p))
			insert(p, (yyvsp[(1) - (2)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 196 ".\\compile.y"
    {
		(yyval.token_p) = NULL;
	}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 204 ".\\compile.y"
    {
		p = newNode("stmt_list", (yyvsp[(2) - (2)].token_p)->No_Line);
		insert(p, (yyvsp[(2) - (2)].token_p));
		if ((yyvsp[(1) - (2)].token_p))
			insert(p, (yyvsp[(1) - (2)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 212 ".\\compile.y"
    {
		(yyval.token_p) = NULL;
	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 219 ".\\compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 220 ".\\compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 221 ".\\compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 222 ".\\compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 223 ".\\compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 229 ".\\compile.y"
    {
		p = newNode("expr_stmt", (yyvsp[(1) - (2)].token_p)->No_Line); 
		insert(p, (yyvsp[(2) - (2)].token_p));
		insert(p, (yyvsp[(1) - (2)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 236 ".\\compile.y"
    {
		p = newNode("expr_stmt", (yyvsp[(1) - (1)].token_p)->No_Line); 
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 246 ".\\compile.y"
    {	
		p = newNode("selc_stmt", (yyvsp[(1) - (5)].token_p)->No_Line);
		insert(p, (yyvsp[(5) - (5)].token_p)); 
		insert(p, (yyvsp[(4) - (5)].token_p)); 
		insert(p, (yyvsp[(3) - (5)].token_p)); 
		insert(p, (yyvsp[(2) - (5)].token_p)); 
		insert(p, (yyvsp[(1) - (5)].token_p)); 
		(yyval.token_p) = p;
	}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 256 ".\\compile.y"
    {	
		p = newNode("selc_stmt", (yyvsp[(1) - (7)].token_p)->No_Line);
		insert(p, (yyvsp[(7) - (7)].token_p));
		insert(p, (yyvsp[(6) - (7)].token_p));
		insert(p, (yyvsp[(5) - (7)].token_p));
		insert(p, (yyvsp[(4) - (7)].token_p));
		insert(p, (yyvsp[(3) - (7)].token_p));
		insert(p, (yyvsp[(2) - (7)].token_p));
		insert(p, (yyvsp[(1) - (7)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 272 ".\\compile.y"
    {
		p = newNode("iter_stmt", (yyvsp[(1) - (5)].token_p)->No_Line);
		insert(p, (yyvsp[(5) - (5)].token_p));
		insert(p, (yyvsp[(4) - (5)].token_p));
		insert(p, (yyvsp[(3) - (5)].token_p));
		insert(p, (yyvsp[(2) - (5)].token_p));
		insert(p, (yyvsp[(1) - (5)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 308 ".\\compile.y"
    {	p = newNode("retn_stmt", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p)); 
		insert(p, (yyvsp[(1) - (3)].token_p)); 
		(yyval.token_p) = p;
	}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 315 ".\\compile.y"
    {
		p = newNode("retn_stmt", (yyvsp[(1) - (2)].token_p)->No_Line);
		insert(p, (yyvsp[(2) - (2)].token_p));
		insert(p, (yyvsp[(1) - (2)].token_p));  
		(yyval.token_p) = p;
	}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 329 ".\\compile.y"
    {
		p = newNode("expr", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p)); 
		insert(p, (yyvsp[(1) - (3)].token_p)); 
		(yyval.token_p) = p;
	}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 337 ".\\compile.y"
    {
		p = newNode("expr", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 347 ".\\compile.y"
    {	
		p = newNode("vars", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 353 ".\\compile.y"
    {	
		p = newNode("var", (yyvsp[(1) - (4)].token_p)->No_Line);
		insert(p, (yyvsp[(4) - (4)].token_p));
		insert(p, (yyvsp[(3) - (4)].token_p));
		insert(p, (yyvsp[(2) - (4)].token_p));
		insert(p, (yyvsp[(1) - (4)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 366 ".\\compile.y"
    {
		p = newNode("simple_expr", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 374 ".\\compile.y"
    {
		p = newNode("simple_expr", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 383 ".\\compile.y"
    { p = newNode("relop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 384 ".\\compile.y"
    { p = newNode("relop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 385 ".\\compile.y"
    { p = newNode("relop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 386 ".\\compile.y"
    { p = newNode("relop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 387 ".\\compile.y"
    { p = newNode("relop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 388 ".\\compile.y"
    { p = newNode("relop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 394 ".\\compile.y"
    {
		p = newNode("add_expr", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 402 ".\\compile.y"
    {
		p = newNode("add_expr", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 411 ".\\compile.y"
    { p = newNode("addop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 412 ".\\compile.y"
    { p = newNode("addop", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 418 ".\\compile.y"
    {
		p = newNode("term", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 426 ".\\compile.y"
    {
		p = newNode("term", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 435 ".\\compile.y"
    { p = newNode("mulop", (yyvsp[(1) - (1)].token_p)->No_Line);; insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 436 ".\\compile.y"
    { p = newNode("mulop", (yyvsp[(1) - (1)].token_p)->No_Line);; insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 442 ".\\compile.y"
    {
		p = newNode("factor", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 449 ".\\compile.y"
    { p = newNode("factor", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 450 ".\\compile.y"
    { p = newNode("factor", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 451 ".\\compile.y"
    { p = newNode("factor", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 457 ".\\compile.y"
    {
		p = newNode("call", (yyvsp[(1) - (4)].token_p)->No_Line);
		insert(p, (yyvsp[(4) - (4)].token_p));
		if ((yyvsp[(3) - (4)].token_p))
			insert(p, (yyvsp[(3) - (4)].token_p));
		insert(p, (yyvsp[(2) - (4)].token_p));
		insert(p, (yyvsp[(1) - (4)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 470 ".\\compile.y"
    { p = newNode("args", (yyvsp[(1) - (1)].token_p)->No_Line); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 471 ".\\compile.y"
    { (yyval.token_p) = NULL; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 477 ".\\compile.y"
    {
		p = newNode("arg_list", (yyvsp[(1) - (3)].token_p)->No_Line);
		insert(p, (yyvsp[(3) - (3)].token_p));
		insert(p, (yyvsp[(2) - (3)].token_p));
		insert(p, (yyvsp[(1) - (3)].token_p));
		(yyval.token_p) = p;
	}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 485 ".\\compile.y"
    {
		p = newNode("arg_list", (yyvsp[(1) - (1)].token_p)->No_Line);
		insert(p, (yyvsp[(1) - (1)].token_p));
		(yyval.token_p) = p;
	}
    break;



/* Line 1455 of yacc.c  */
#line 2107 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 490 ".\\compile.y"



void yyerror(char* s)
{    
	printf("Error:%s\n", s);
}

int main(int argc,char *argv[])
{    
	extern int yydebug;
	yydebug = 1;
	if (argc == 1)
	{
		printf("No input file!\n");
		return -1;
	}
	FILE* fin=NULL;
	fin = fopen(argv[1],"r"); 
	if(!fin)
	{ 
		printf("cannot open reading file.\n");
		return -1;
	}
	extern FILE* yyin;
	yyin=fin;
	yyparse();
	print(p,0);
	fclose(fin);
	return 0;
}

