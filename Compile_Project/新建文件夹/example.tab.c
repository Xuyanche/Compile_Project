/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "example.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "node.h"

Node* p;
void yyerror(char *s);
FILE *fout;

/* Line 371 of yacc.c  */
#line 80 "example.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "example.tab.h".  */
#ifndef YY_YY_EXAMPLE_TAB_H_INCLUDED
# define YY_YY_EXAMPLE_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     ID = 259,
     SEMI = 260,
     COMMA = 261,
     LC = 262,
     RC = 263,
     STRUCT = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     BREAK = 268,
     CONT = 269,
     FOR = 270,
     READ = 271,
     WRITE = 272,
     SUB = 273,
     BINARYOP11 = 274,
     ASSIGNOP = 275,
     TYPE = 276,
     MINUS = 277,
     BINARYOP10 = 278,
     BINARYOP9 = 279,
     BINARYOP8 = 280,
     BINARYOP7 = 281,
     BINARYOP6 = 282,
     BINARYOP5 = 283,
     BINARYOP4 = 284,
     BINARYOP3 = 285,
     BINARYOP2 = 286,
     BINARYOP1 = 287,
     UNARYOP = 288,
     RB = 289,
     LB = 290,
     RP = 291,
     LP = 292,
     DOT = 293
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 12 "example.y"

         struct Node *token_p;


/* Line 387 of yacc.c  */
#line 166 "example.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_EXAMPLE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 194 "example.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   436

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    17,    19,    23,
      24,    26,    28,    34,    37,    39,    40,    42,    47,    52,
      56,    58,    59,    62,    67,    70,    71,    74,    76,    80,
      87,    97,   100,   103,   109,   115,   118,   119,   122,   123,
     127,   131,   133,   135,   139,   141,   145,   149,   153,   157,
     161,   165,   169,   173,   177,   181,   185,   189,   193,   197,
     200,   203,   207,   212,   215,   219,   221,   222,   227,   228,
     232
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    41,    -1,    42,    41,    -1,    -1,    44,
      43,     5,    -1,    44,    48,    51,    -1,    58,    -1,    58,
       6,    43,    -1,    -1,    21,    -1,    45,    -1,     9,    46,
       7,    55,     8,    -1,     9,     4,    -1,     4,    -1,    -1,
       4,    -1,    47,    35,     3,    34,    -1,     4,    37,    49,
      36,    -1,    50,     6,    49,    -1,    50,    -1,    -1,    44,
      47,    -1,     7,    55,    52,     8,    -1,    53,    52,    -1,
      -1,    60,     5,    -1,    51,    -1,    10,    60,     5,    -1,
      11,    37,    60,    36,    53,    54,    -1,    15,    37,    60,
       5,    60,     5,    60,    36,    53,    -1,    14,     5,    -1,
      13,     5,    -1,    17,    37,    60,    36,     5,    -1,    16,
      37,    60,    36,     5,    -1,    12,    53,    -1,    -1,    56,
      55,    -1,    -1,    44,    57,     5,    -1,    58,     6,    57,
      -1,    58,    -1,    47,    -1,    47,    20,    59,    -1,    60,
      -1,     7,    62,     8,    -1,    60,    32,    60,    -1,    60,
      31,    60,    -1,    60,    30,    60,    -1,    60,    29,    60,
      -1,    60,    28,    60,    -1,    60,    27,    60,    -1,    60,
      26,    60,    -1,    60,    25,    60,    -1,    60,    24,    60,
      -1,    60,    23,    60,    -1,    60,    19,    60,    -1,    60,
      20,    60,    -1,    60,    18,    60,    -1,    33,    60,    -1,
      18,    60,    -1,    37,    60,    36,    -1,     4,    37,    62,
      36,    -1,     4,    61,    -1,    60,    38,     4,    -1,     3,
      -1,    -1,    35,    60,    34,    61,    -1,    -1,    60,     6,
      62,    -1,    60,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    38,    42,    46,    51,    58,    61,    66,
      70,    73,    78,    85,    91,    94,    97,   100,   108,   116,
     121,   124,   128,   134,   142,   146,   150,   154,   157,   162,
     170,   181,   185,   189,   196,   205,   209,   213,   217,   221,
     228,   233,   238,   241,   247,   250,   257,   262,   267,   272,
     277,   282,   287,   292,   297,   302,   307,   312,   317,   322,
     326,   330,   335,   341,   345,   350,   353,   357,   363,   366,
     371
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "SEMI", "COMMA", "LC", "RC",
  "STRUCT", "RETURN", "IF", "ELSE", "BREAK", "CONT", "FOR", "READ",
  "WRITE", "SUB", "BINARYOP11", "ASSIGNOP", "TYPE", "MINUS", "BINARYOP10",
  "BINARYOP9", "BINARYOP8", "BINARYOP7", "BINARYOP6", "BINARYOP5",
  "BINARYOP4", "BINARYOP3", "BINARYOP2", "BINARYOP1", "UNARYOP", "RB",
  "LB", "RP", "LP", "DOT", "$accept", "program", "extdefs", "extdef",
  "extvars", "spec", "stspec", "opttag", "var", "func", "paras", "para",
  "stmtblock", "stmts", "stmt", "estmt", "defs", "def", "decs", "dec",
  "init", "exp", "arrs", "args", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    43,
      44,    44,    45,    45,    46,    46,    47,    47,    48,    49,
      49,    49,    50,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     3,     0,
       1,     1,     5,     2,     1,     0,     1,     4,     4,     3,
       1,     0,     2,     4,     2,     0,     2,     1,     3,     6,
       9,     2,     2,     5,     5,     2,     0,     2,     0,     3,
       3,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     4,     2,     3,     1,     0,     4,     0,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    15,    10,     0,     2,     4,     9,    11,    13,     0,
       1,     3,    16,     0,    42,     0,     7,    38,    21,     5,
      66,     0,    38,     6,     9,     0,     0,    38,     0,     0,
      20,    65,    68,    66,    66,    66,    66,    43,    44,     0,
      66,    16,     8,     0,    41,    12,    37,    22,    18,    21,
      66,    66,    63,    70,     0,    60,    59,     0,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,     0,    17,    66,     0,     0,     0,     0,     0,     0,
      27,     0,    66,     0,    39,     0,    19,     0,     0,    66,
      45,    61,    58,    56,    57,    55,    54,    53,    52,    51,
      50,    49,    48,    47,    46,    64,     0,    66,    32,    31,
      66,    66,    66,    23,    24,    26,    40,    68,    62,    69,
      28,     0,     0,     0,     0,    67,    66,    66,     0,     0,
      36,     0,    34,    33,    66,    29,    66,    35,     0,    66,
      30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    13,    25,     7,     9,    14,    15,
      29,    30,    80,    81,    82,   135,    26,    27,    43,    16,
      37,    83,    52,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
       0,    21,  -116,    32,  -116,     0,    29,  -116,    47,    55,
    -116,  -116,    -1,    67,   -17,    58,    78,     0,     0,  -116,
      19,    85,     0,  -116,    90,    90,    87,     0,    90,    68,
      97,  -116,   -27,    82,    82,    82,    82,  -116,   328,    80,
      60,  -116,  -116,   112,   116,  -116,  -116,    83,  -116,     0,
      82,    82,  -116,   190,   113,   344,    86,   206,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,   119,  -116,    82,    88,   121,   122,    92,    93,    94,
    -116,   129,    60,   115,  -116,    90,  -116,   227,   128,    82,
    -116,  -116,   344,   344,   344,   359,   373,   386,   398,    51,
      28,   -26,    -4,    -3,    86,  -116,   131,    82,  -116,  -116,
      82,    82,    82,  -116,  -116,  -116,  -116,   145,  -116,  -116,
    -116,   244,   147,   265,   286,  -116,    95,    82,   143,   179,
     185,   163,  -116,  -116,    95,  -116,    82,  -116,   307,    95,
    -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,   193,  -116,   175,     2,  -116,  -116,   172,  -116,
     153,  -116,   188,   123,  -115,  -116,    74,  -116,   126,   -24,
    -116,   -20,    89,   -34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int16 yytable[] =
{
      38,    44,     6,    20,    68,    69,    70,     6,    50,     1,
      51,   130,    71,    53,    55,    56,    57,    88,    21,   137,
      28,     2,    31,    32,   140,     8,    33,    69,    70,    70,
      87,    53,    10,    12,    71,    71,    18,    34,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    28,    35,   106,   -14,   119,    36,    67,    68,    69,
      70,    44,    17,    31,    32,    22,    71,    22,   -25,    53,
      73,    74,    19,    75,    76,    77,    78,    79,    34,    66,
      67,    68,    69,    70,    24,    31,    32,   121,    39,    71,
     122,   123,   124,    35,    41,    45,    40,    36,    31,    32,
      34,    46,    22,    49,    48,    73,    74,   131,    75,    76,
      77,    78,    79,    34,    72,    35,   138,    84,    21,    36,
     115,    90,    85,   105,    71,   107,   108,   109,    35,   110,
     111,   112,    36,    58,    59,    60,   120,   113,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   132,    58,
      59,    60,   127,    71,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   118,    58,    59,    60,   136,    71,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      50,    58,    59,    60,   133,    71,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    89,   134,    11,    42,
      47,    71,    86,    23,     0,   114,   125,     0,    58,    59,
      60,   116,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,    58,    59,    60,     0,    71,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,    91,     0,    71,    58,    59,    60,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,   117,    58,    59,    60,    71,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
     126,     0,    71,    58,    59,    60,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,   128,     0,    71,    58,    59,    60,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,   129,     0,    71,    58,    59,    60,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,   139,     0,    71,    58,    59,    60,     0,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,    59,    60,     0,    71,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,    71,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,    71,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    71,    65,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      20,    25,     0,    20,    30,    31,    32,     5,    35,     9,
      37,   126,    38,    33,    34,    35,    36,    51,    35,   134,
      18,    21,     3,     4,   139,     4,     7,    31,    32,    32,
      50,    51,     0,     4,    38,    38,    37,    18,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    49,    33,    73,     7,    89,    37,    29,    30,    31,
      32,    85,     7,     3,     4,     7,    38,     7,     8,    89,
      10,    11,     5,    13,    14,    15,    16,    17,    18,    28,
      29,    30,    31,    32,     6,     3,     4,   107,     3,    38,
     110,   111,   112,    33,     4,     8,    22,    37,     3,     4,
      18,    27,     7,     6,    36,    10,    11,   127,    13,    14,
      15,    16,    17,    18,    34,    33,   136,     5,    35,    37,
       5,     8,     6,     4,    38,    37,     5,     5,    33,    37,
      37,    37,    37,    18,    19,    20,     5,     8,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     5,    18,
      19,    20,     5,    38,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    36,    18,    19,    20,     5,    38,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      35,    18,    19,    20,     5,    38,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     6,    12,     5,    24,
      28,    38,    49,    15,    -1,    82,   117,    -1,    18,    19,
      20,    85,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    18,    19,    20,    -1,    38,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    18,    19,    20,    38,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    -1,    38,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    36,    -1,    38,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    19,    20,    -1,    38,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    21,    40,    41,    42,    44,    45,     4,    46,
       0,    41,     4,    43,    47,    48,    58,     7,    37,     5,
      20,    35,     7,    51,     6,    44,    55,    56,    44,    49,
      50,     3,     4,     7,    18,    33,    37,    59,    60,     3,
      55,     4,    43,    57,    58,     8,    55,    47,    36,     6,
      35,    37,    61,    60,    62,    60,    60,    60,    18,    19,
      20,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    38,    34,    10,    11,    13,    14,    15,    16,    17,
      51,    52,    53,    60,     5,     6,    49,    60,    62,     6,
       8,    36,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,     4,    60,    37,     5,     5,
      37,    37,    37,     8,    52,     5,    57,    34,    36,    62,
       5,    60,    60,    60,    60,    61,    36,     5,    36,    36,
      53,    60,     5,     5,    12,    54,     5,    53,    60,    36,
      53
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 33 "example.y"
    { p=newNode("program",(yyvsp[(1) - (1)].token_p)->No_Line);
                       insert(p,(yyvsp[(1) - (1)].token_p));
                       (yyval.token_p) =p;}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 38 "example.y"
    { p=newNode("extdefs",(yyvsp[(1) - (2)].token_p)->No_Line);
                            insert(p,(yyvsp[(1) - (2)].token_p));
                            insert(p,(yyvsp[(2) - (2)].token_p));
                            (yyval.token_p)=p;}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 42 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 46 "example.y"
    { p=newNode("extdef",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 51 "example.y"
    { p=newNode("extdef",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 58 "example.y"
    { p=newNode("extvars",(yyvsp[(1) - (1)].token_p)->No_Line);
                                 insert(p,(yyvsp[(1) - (1)].token_p));
                                 (yyval.token_p)=p;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 61 "example.y"
    { p=newNode("extvars",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 66 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 70 "example.y"
    { p=newNode("spec",(yyvsp[(1) - (1)].token_p)->No_Line);
                                 insert(p,(yyvsp[(1) - (1)].token_p));
                                 (yyval.token_p)=p;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 73 "example.y"
    { p=newNode("spec",(yyvsp[(1) - (1)].token_p)->No_Line);
                                 insert(p,(yyvsp[(1) - (1)].token_p));
                                 (yyval.token_p)=p;}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 78 "example.y"
    { p=newNode("stspec",(yyvsp[(1) - (5)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (5)].token_p));
                                insert(p,(yyvsp[(2) - (5)].token_p));
                                insert(p,(yyvsp[(3) - (5)].token_p));
                                insert(p,(yyvsp[(4) - (5)].token_p));
                                insert(p,(yyvsp[(5) - (5)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 85 "example.y"
    { p=newNode("stspec",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 91 "example.y"
    { p=newNode("opttag",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 94 "example.y"
    { (yyval.token_p)=NULL;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 97 "example.y"
    { p=newNode("var",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 100 "example.y"
    { p=newNode("var",(yyvsp[(1) - (4)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (4)].token_p));
                                insert(p,(yyvsp[(2) - (4)].token_p));
                                insert(p,(yyvsp[(3) - (4)].token_p));
                                insert(p,(yyvsp[(4) - (4)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 108 "example.y"
    { p=newNode("func",(yyvsp[(1) - (4)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (4)].token_p));
                                insert(p,(yyvsp[(2) - (4)].token_p));
                                insert(p,(yyvsp[(3) - (4)].token_p));
                                insert(p,(yyvsp[(4) - (4)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 116 "example.y"
    { p=newNode("paras",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 121 "example.y"
    { p=newNode("paras",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 124 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 128 "example.y"
    { p=newNode("para",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 134 "example.y"
    { p=newNode("stmtblock",(yyvsp[(1) - (4)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (4)].token_p));
                                insert(p,(yyvsp[(2) - (4)].token_p));
                                insert(p,(yyvsp[(3) - (4)].token_p));
                                insert(p,(yyvsp[(4) - (4)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 142 "example.y"
    { p=newNode("stmts",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 146 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 150 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 154 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 157 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 162 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (6)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (6)].token_p));
                                insert(p,(yyvsp[(2) - (6)].token_p));
                                insert(p,(yyvsp[(3) - (6)].token_p));
                                insert(p,(yyvsp[(4) - (6)].token_p));
                                insert(p,(yyvsp[(5) - (6)].token_p));
                                insert(p,(yyvsp[(6) - (6)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 170 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (9)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (9)].token_p));
                                insert(p,(yyvsp[(2) - (9)].token_p));
                                insert(p,(yyvsp[(3) - (9)].token_p));
                                insert(p,(yyvsp[(4) - (9)].token_p));
                                insert(p,(yyvsp[(5) - (9)].token_p));
                                insert(p,(yyvsp[(6) - (9)].token_p));
                                insert(p,(yyvsp[(7) - (9)].token_p));
                                insert(p,(yyvsp[(8) - (9)].token_p));
                                insert(p,(yyvsp[(9) - (9)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 181 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 185 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 189 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (5)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (5)].token_p));
                                insert(p,(yyvsp[(2) - (5)].token_p));
                                insert(p,(yyvsp[(3) - (5)].token_p));
                                insert(p,(yyvsp[(4) - (5)].token_p));
                                insert(p,(yyvsp[(5) - (5)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 196 "example.y"
    { p=newNode("stmt",(yyvsp[(1) - (5)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (5)].token_p));
                                insert(p,(yyvsp[(2) - (5)].token_p));
                                insert(p,(yyvsp[(3) - (5)].token_p));
                                insert(p,(yyvsp[(4) - (5)].token_p));
                                insert(p,(yyvsp[(5) - (5)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 205 "example.y"
    { p=newNode("estmt",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 209 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 213 "example.y"
    { p=newNode("defs",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 217 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 221 "example.y"
    { p=newNode("def",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 228 "example.y"
    { p=newNode("decs",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 233 "example.y"
    { p=newNode("decs",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 238 "example.y"
    { p=newNode("dec",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 241 "example.y"
    { p=newNode("dec",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 247 "example.y"
    { p=newNode("init",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 250 "example.y"
    { p=newNode("init",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 257 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 262 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 267 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 272 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 277 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 282 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 287 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 292 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 297 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 302 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 307 "example.y"
    {p = newNode("exp", (yyvsp[(1) - (3)].token_p)->No_Line);
     				                    insert(p, (yyvsp[(1) - (3)].token_p));
				                        insert(p, (yyvsp[(2) - (3)].token_p));
				                        insert(p, (yyvsp[(3) - (3)].token_p));
				                        (yyval.token_p) = p;}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 312 "example.y"
    {p = newNode("exp", (yyvsp[(1) - (3)].token_p)->No_Line);
     				               insert(p, (yyvsp[(1) - (3)].token_p));
				                   insert(p, (yyvsp[(2) - (3)].token_p));
				                   insert(p, (yyvsp[(3) - (3)].token_p));
                                (yyval.token_p) = p;}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 317 "example.y"
    {p = newNode("exp", (yyvsp[(1) - (3)].token_p)->No_Line);
     				                  insert(p, (yyvsp[(1) - (3)].token_p));
				                      insert(p, (yyvsp[(2) - (3)].token_p));
				                      insert(p, (yyvsp[(3) - (3)].token_p));
				                      (yyval.token_p) = p;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 322 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 326 "example.y"
    {p = newNode("exp", (yyvsp[(1) - (2)].token_p)->No_Line);
     				                    insert(p, (yyvsp[(1) - (2)].token_p));
				                        insert(p, (yyvsp[(2) - (2)].token_p));
				                        (yyval.token_p) = p;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 330 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 335 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (4)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (4)].token_p));
                                insert(p,(yyvsp[(2) - (4)].token_p));
                                insert(p,(yyvsp[(3) - (4)].token_p));
                                insert(p,(yyvsp[(4) - (4)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 341 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (2)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (2)].token_p));
                                insert(p,(yyvsp[(2) - (2)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 345 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 350 "example.y"
    { p=newNode("exp",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 353 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 357 "example.y"
    { p=newNode("arrs",(yyvsp[(1) - (4)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (4)].token_p));
                                insert(p,(yyvsp[(2) - (4)].token_p));
                                insert(p,(yyvsp[(3) - (4)].token_p));
                                insert(p,(yyvsp[(4) - (4)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 363 "example.y"
    { p=newNode("NULL",0);
                                (yyval.token_p)=p;}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 366 "example.y"
    { p=newNode("args",(yyvsp[(1) - (3)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (3)].token_p));
                                insert(p,(yyvsp[(2) - (3)].token_p));
                                insert(p,(yyvsp[(3) - (3)].token_p));
                                (yyval.token_p)=p;}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 371 "example.y"
    { p=newNode("args",(yyvsp[(1) - (1)].token_p)->No_Line);
                                insert(p,(yyvsp[(1) - (1)].token_p));
                                (yyval.token_p)=p;}
    break;


/* Line 1792 of yacc.c  */
#line 2210 "example.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 375 "example.y"




void yyerror(char* s)
{    
     FILE* errdir=NULL;
     errdir=fopen("stderr","w");
     if(fout!=NULL)
     fprintf(fout,"Error.");
     fprintf(errdir,"line %d error.\n",No_Line);
     fclose(fout);
     fclose(errdir);
     exit(1);
}
int main()
{    
	char name[20];
	scanf("%s", &name);
     FILE* fin=NULL;
     extern FILE* yyin;
     fin=fopen(name,"r"); 

     if(fin==NULL)
     { 
         printf("cannot open reading file.\n");
         return -1;
     }
     yyin=fin;
     yyparse();
     print(p,0);
     fclose(fin);
     return 0;
}

