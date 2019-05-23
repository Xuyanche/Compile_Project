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
#line 1 "compile.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "node.h"


Node* p;
void yyerror(char *s);
FILE *fout;


extern int column;



/* Line 371 of yacc.c  */
#line 86 "compile.tab.c"

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
   by #include "compile.tab.h".  */
#ifndef YY_YY_COMPILE_TAB_H_INCLUDED
# define YY_YY_COMPILE_TAB_H_INCLUDED
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
     IDENTIFIER = 258,
     CONSTANT = 259,
     TYPE_NAME = 260,
     STRING_LITERAL = 261,
     CHAR = 262,
     INT = 263,
     FLOAT = 264,
     VOID = 265,
     STRUCT = 266,
     LE = 267,
     GE = 268,
     AND = 269,
     OR = 270,
     EQ = 271,
     NE = 272,
     IF = 273,
     ELSE = 274,
     DO = 275,
     WHILE = 276,
     BREAK = 277,
     FOR = 278,
     RETURN = 279,
     SWITCH = 280,
     CASE = 281,
     DEFAULT = 282
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 19 "compile.y"

         Node *token_p;


/* Line 387 of yacc.c  */
#line 161 "compile.tab.c"
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

#endif /* !YY_YY_COMPILE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 189 "compile.tab.c"

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
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     7,     2,     2,     2,     2,     2,     2,
      15,    16,     5,     3,     8,     4,     9,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    23,    19,
      12,    10,    11,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,     2,    18,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,    21,    14,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    18,    20,    24,
      26,    28,    30,    32,    34,    36,    40,    42,    44,    46,
      51,    55,    57,    60,    65,    68,    69,    71,    73,    75,
      77,    79,    85,    93,    99,   109,   117,   120,   124,   126,
     129,   133,   136,   137,   141,   143,   145,   147,   149,   151,
     153,   155,   159,   161,   163,   165,   167,   170,   172,   174,
     178,   182,   187,   191,   193,   195,   199,   203,   207,   211,
     215,   219,   221,   223,   227,   231,   233,   237
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    52,    51,    -1,    52,    -1,
      54,    53,    19,    -1,    54,    60,    63,    -1,    56,    -1,
      56,     8,    53,    -1,    55,    -1,    31,    -1,    29,    -1,
      28,    -1,    30,    -1,    59,    -1,    59,    57,    58,    -1,
      10,    -1,    73,    -1,    24,    -1,    24,    15,    61,    16,
      -1,    62,     8,    61,    -1,    62,    -1,    54,    59,    -1,
      13,    71,    64,    14,    -1,    65,    64,    -1,    -1,    68,
      -1,    63,    -1,    66,    -1,    67,    -1,    70,    -1,    39,
      15,    73,    16,    65,    -1,    39,    15,    73,    16,    65,
      40,    65,    -1,    42,    15,    73,    16,    65,    -1,    44,
      15,    73,    19,    73,    19,    73,    16,    65,    -1,    41,
      65,    42,    15,    73,    16,    19,    -1,    69,    19,    -1,
      59,    57,    69,    -1,    73,    -1,    43,    19,    -1,    45,
      73,    19,    -1,    72,    71,    -1,    -1,    54,    53,    19,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    24,
      -1,    25,    -1,    27,    -1,    15,    73,    16,    -1,     3,
      -1,     4,    -1,     5,    -1,     7,    -1,    75,    76,    -1,
      77,    -1,    74,    -1,    77,    17,    18,    -1,    77,    15,
      16,    -1,    77,    15,    78,    16,    -1,    73,     8,    78,
      -1,    73,    -1,    76,    -1,    79,    12,    81,    -1,    79,
      11,    81,    -1,    79,    33,    81,    -1,    79,    34,    81,
      -1,    80,    37,    81,    -1,    80,    38,    81,    -1,    76,
      -1,    76,    -1,    81,     3,    82,    -1,    81,     4,    82,
      -1,    76,    -1,    82,     5,    76,    -1,    82,     6,    76,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    41,    44,    48,    53,    61,    62,    70,
      74,    75,    76,    77,    82,    83,    92,    96,   100,   104,
     113,   118,   122,   130,   139,   143,   147,   148,   149,   150,
     151,   157,   164,   178,   185,   196,   208,   216,   221,   226,
     227,   237,   241,   245,   253,   254,   255,   256,   260,   261,
     262,   263,   271,   272,   273,   274,   278,   282,   287,   288,
     293,   298,   307,   312,   316,   317,   322,   327,   332,   341,
     346,   351,   355,   356,   361,   369,   370,   375
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "'-'", "'*'", "'/'", "'!'", "','",
  "'.'", "'='", "'>'", "'<'", "'{'", "'}'", "'('", "')'", "'['", "']'",
  "';'", "'?'", "'|'", "'^'", "':'", "IDENTIFIER", "CONSTANT", "TYPE_NAME",
  "STRING_LITERAL", "CHAR", "INT", "FLOAT", "VOID", "STRUCT", "LE", "GE",
  "AND", "OR", "EQ", "NE", "IF", "ELSE", "DO", "WHILE", "BREAK", "FOR",
  "RETURN", "SWITCH", "CASE", "DEFAULT", "$accept", "program",
  "declaration_list", "declaration", "extvars", "spec", "type", "dec",
  "assignop", "init", "var", "func", "paras", "para", "stmtblock", "stmts",
  "stmt", "selstmt", "loopstmt", "assignstmt", "assign", "jstmt", "defs",
  "def", "exp", "primexp", "unaryop", "unaryexp", "leftexp", "args",
  "relationexp", "equalexp", "addexp", "multipexp", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,    33,    44,    46,
      61,    62,    60,   123,   125,    40,    41,    91,    93,    59,
      63,   124,    94,    58,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    55,    55,    56,    56,    57,    58,    59,    60,
      61,    61,    62,    63,    64,    64,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    68,    69,    69,    70,
      70,    71,    71,    72,    73,    73,    73,    73,    74,    74,
      74,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     4,
       3,     1,     2,     4,     2,     0,     1,     1,     1,     1,
       1,     5,     7,     5,     9,     7,     2,     3,     1,     2,
       3,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       3,     4,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    11,    13,    10,     0,     2,     4,     0,     9,
       1,     3,    18,     0,     7,    14,     0,     0,     5,     0,
      16,     0,    42,     6,     0,     0,    21,    18,     8,    52,
      53,    54,    55,     0,    48,    49,    50,    15,    17,    58,
       0,    64,    57,    44,    45,    46,    47,     0,    25,    42,
      22,    19,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    25,    28,
      29,    26,     0,    30,    38,    41,    20,    51,    60,    63,
       0,    59,    72,    66,    65,    67,    68,    69,    70,    75,
      73,    74,    76,    77,    43,     0,     0,     0,    39,     0,
       0,     0,    23,    24,    36,     0,    61,     0,     0,     0,
       0,    40,    37,    62,     0,     0,     0,     0,    31,     0,
      33,     0,     0,     0,     0,    32,    35,     0,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    13,     8,     9,    14,    21,    37,
      75,    16,    25,    26,    76,    77,    78,    79,    80,    81,
      82,    83,    48,    49,    84,    39,    40,    41,    42,    90,
      43,    44,    45,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int8 yypact[] =
{
      30,   -70,   -70,   -70,   -70,     9,   -70,    30,   -13,   -70,
     -70,   -70,    -1,     1,    23,    28,    20,    30,   -70,    16,
     -70,    78,    30,   -70,    16,    32,    44,   -70,   -70,   -70,
     -70,   -70,   -70,    78,   -70,   -70,   -70,   -70,   -70,   -70,
      78,    13,    -9,   109,   -15,    25,    41,    16,     0,    30,
     -70,   -70,    30,    40,   -70,    92,    47,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    43,    56,    53,
       0,    55,    68,    74,    78,    28,   -70,    76,     0,   -70,
     -70,   -70,    72,   -70,   -70,   -70,   -70,   -70,   -70,    84,
      82,   -70,   -70,    25,    25,    25,    25,    25,    25,   -70,
      41,    41,   -70,   -70,   -70,    78,    58,    78,   -70,    78,
      90,   107,   -70,   -70,   -70,    78,   -70,    85,   100,   102,
     110,   -70,   -70,   -70,     0,    78,     0,    78,    93,   114,
     -70,   116,     0,   117,    78,   -70,   -70,   121,     0,   -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   131,   -70,   -17,    15,   -70,   -70,    64,   -70,
       2,   -70,    88,   -70,   125,    67,   -69,   -70,   -70,   -70,
      33,   -70,    97,   -70,   -21,   -70,   -70,    14,   -70,    34,
     -70,   -70,    66,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      38,   106,    28,    29,    30,    31,    55,    32,    56,    10,
      15,    12,    53,    22,    17,    33,   -72,   -72,   -75,   -75,
      18,    15,    61,    62,    68,    35,    50,    36,    63,    64,
      67,    19,    24,    22,    89,   100,   101,    47,    20,    69,
      27,    70,    71,    72,    73,    74,    65,    66,    51,    15,
     -71,   -71,    52,   110,    54,   128,    87,   130,     1,     2,
       3,     4,   104,   135,    47,    91,   -18,    24,   105,   139,
     107,    92,    92,    92,    92,    92,    92,    99,    99,   102,
     103,    29,    30,    31,   117,    32,   119,   108,   120,   109,
     112,   114,   115,    33,    89,    29,    30,    31,   116,    32,
     118,   124,    34,    35,   129,    36,   131,    33,    88,   121,
      29,    30,    31,   137,    32,   125,    34,    35,   126,    36,
      57,    58,    33,    93,    94,    95,    96,    97,    98,   127,
     133,    68,    35,   132,    36,   134,   136,   138,    11,   111,
      86,    23,    59,    60,   122,   113,    85,     0,     0,   123
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      21,    70,    19,     3,     4,     5,    15,     7,    17,     0,
       8,    24,    33,    13,    15,    15,     3,     4,     5,     6,
      19,    19,    37,    38,    24,    25,    24,    27,     3,     4,
      47,     8,    17,    13,    55,    63,    64,    22,    10,    39,
      24,    41,    42,    43,    44,    45,     5,     6,    16,    47,
      37,    38,     8,    74,    40,   124,    16,   126,    28,    29,
      30,    31,    19,   132,    49,    18,    10,    52,    15,   138,
      15,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     3,     4,     5,   105,     7,   107,    19,   109,    15,
      14,    19,     8,    15,   115,     3,     4,     5,    16,     7,
      42,    16,    24,    25,   125,    27,   127,    15,    16,    19,
       3,     4,     5,   134,     7,    15,    24,    25,    16,    27,
      11,    12,    15,    57,    58,    59,    60,    61,    62,    19,
      16,    24,    25,    40,    27,    19,    19,    16,     7,    75,
      52,    16,    33,    34,   111,    78,    49,    -1,    -1,   115
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    50,    51,    52,    54,    55,
       0,    51,    24,    53,    56,    59,    60,    15,    19,     8,
      10,    57,    13,    63,    54,    61,    62,    24,    53,     3,
       4,     5,     7,    15,    24,    25,    27,    58,    73,    74,
      75,    76,    77,    79,    80,    81,    82,    54,    71,    72,
      59,    16,     8,    73,    76,    15,    17,    11,    12,    33,
      34,    37,    38,     3,     4,     5,     6,    53,    24,    39,
      41,    42,    43,    44,    45,    59,    63,    64,    65,    66,
      67,    68,    69,    70,    73,    71,    61,    16,    16,    73,
      78,    18,    76,    81,    81,    81,    81,    81,    81,    76,
      82,    82,    76,    76,    19,    15,    65,    15,    19,    15,
      73,    57,    14,    64,    19,     8,    16,    73,    42,    73,
      73,    19,    69,    78,    16,    15,    16,    19,    65,    73,
      65,    73,    40,    16,    19,    65,    19,    73,    16,    65
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
#line 37 "compile.y"
    {p = newNode("program", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 41 "compile.y"
    {p = newNode("declaration_list", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col);
						insert(p, (yyvsp[(1) - (2)].token_p)); insert(p, (yyvsp[(2) - (2)].token_p));
						(yyval.token_p) = p;}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 44 "compile.y"
    {p = newNode("declaration_list", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 48 "compile.y"
    {p = newNode("declaration", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
						insert(p, (yyvsp[(1) - (3)].token_p));
						insert(p, (yyvsp[(2) - (3)].token_p));
						insert(p, (yyvsp[(3) - (3)].token_p));
						(yyval.token_p) = p;}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 53 "compile.y"
    {p = newNode("declaration", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
							insert(p, (yyvsp[(1) - (3)].token_p));
							insert(p, (yyvsp[(2) - (3)].token_p));
							insert(p, (yyvsp[(3) - (3)].token_p));
							(yyval.token_p) = p;}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 61 "compile.y"
    {p = newNode("extvars", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 62 "compile.y"
    {p = newNode("extvars", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
						insert(p, (yyvsp[(1) - (3)].token_p));
						insert(p, (yyvsp[(2) - (3)].token_p));
						insert(p, (yyvsp[(3) - (3)].token_p));
						(yyval.token_p) = p;}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 70 "compile.y"
    {p = newNode("spec", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 74 "compile.y"
    {p = newNode("type", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 75 "compile.y"
    {p = newNode("type", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 76 "compile.y"
    {p = newNode("type", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 77 "compile.y"
    {p = newNode("type", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 82 "compile.y"
    {p = newNode("dec", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 83 "compile.y"
    {p = newNode("dec", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
						insert(p, (yyvsp[(1) - (3)].token_p));
						insert(p, (yyvsp[(2) - (3)].token_p));
						insert(p, (yyvsp[(3) - (3)].token_p));
						(yyval.token_p) = p;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 92 "compile.y"
    {p = newNode("assignop", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 96 "compile.y"
    {p = newNode("init", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 100 "compile.y"
    {p = newNode("var", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 104 "compile.y"
    {p = newNode("func", (yyvsp[(1) - (4)].token_p)->No_Line, (yyvsp[(1) - (4)].token_p)->col); 
								insert(p, (yyvsp[(1) - (4)].token_p));
								insert(p, (yyvsp[(2) - (4)].token_p));
								insert(p, (yyvsp[(3) - (4)].token_p));
								insert(p, (yyvsp[(4) - (4)].token_p));
								(yyval.token_p) = p;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 113 "compile.y"
    {p = newNode("paras", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
						insert(p, (yyvsp[(1) - (3)].token_p)); 
						insert(p, (yyvsp[(2) - (3)].token_p)); 
						insert(p, (yyvsp[(3) - (3)].token_p)); 
						(yyval.token_p) = p;}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 118 "compile.y"
    {p = newNode("paras", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 122 "compile.y"
    {p = newNode("para", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col);
				insert(p, (yyvsp[(1) - (2)].token_p));
				insert(p, (yyvsp[(2) - (2)].token_p));
				(yyval.token_p) = p;}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 130 "compile.y"
    {p = newNode("stmtblock", (yyvsp[(1) - (4)].token_p)->No_Line, (yyvsp[(1) - (4)].token_p)->col);
							insert(p, (yyvsp[(1) - (4)].token_p));
							insert(p, (yyvsp[(2) - (4)].token_p));
							insert(p, (yyvsp[(3) - (4)].token_p));
							insert(p, (yyvsp[(4) - (4)].token_p));
							(yyval.token_p) = p;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 139 "compile.y"
    {p = newNode("stmts", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col); 
					insert(p, (yyvsp[(1) - (2)].token_p)); 
					insert(p, (yyvsp[(2) - (2)].token_p)); 
					(yyval.token_p) = p;}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 143 "compile.y"
    {(yyval.token_p) = NULL;}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 147 "compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 148 "compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 149 "compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 150 "compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 151 "compile.y"
    {p = newNode("stmt", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 157 "compile.y"
    {p = newNode("selstmt", (yyvsp[(1) - (5)].token_p)->No_Line, (yyvsp[(1) - (5)].token_p)->col);
							insert(p, (yyvsp[(1) - (5)].token_p)); 
							insert(p, (yyvsp[(2) - (5)].token_p)); 
							insert(p, (yyvsp[(3) - (5)].token_p)); 
							insert(p, (yyvsp[(4) - (5)].token_p)); 
							insert(p, (yyvsp[(5) - (5)].token_p)); 
							(yyval.token_p) = p;}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 164 "compile.y"
    {p = newNode("selstmt", (yyvsp[(1) - (7)].token_p)->No_Line, (yyvsp[(1) - (7)].token_p)->col);
										insert(p, (yyvsp[(1) - (7)].token_p));
										insert(p, (yyvsp[(2) - (7)].token_p));
										insert(p, (yyvsp[(3) - (7)].token_p));
										insert(p, (yyvsp[(4) - (7)].token_p));
										insert(p, (yyvsp[(5) - (7)].token_p));
										insert(p, (yyvsp[(6) - (7)].token_p));
										insert(p, (yyvsp[(7) - (7)].token_p));
										(yyval.token_p) = p;}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 178 "compile.y"
    {p = newNode("loopstmt", (yyvsp[(1) - (5)].token_p)->No_Line, (yyvsp[(1) - (5)].token_p)->col);
									insert(p, (yyvsp[(1) - (5)].token_p));
									insert(p, (yyvsp[(2) - (5)].token_p));
									insert(p, (yyvsp[(3) - (5)].token_p));
									insert(p, (yyvsp[(4) - (5)].token_p));
									insert(p, (yyvsp[(5) - (5)].token_p));
									(yyval.token_p) = p;}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 185 "compile.y"
    {p = newNode("loopstmt", (yyvsp[(1) - (9)].token_p)->No_Line, (yyvsp[(1) - (9)].token_p)->col);
													insert(p, (yyvsp[(1) - (9)].token_p)); 
													insert(p, (yyvsp[(2) - (9)].token_p)); 
													insert(p, (yyvsp[(3) - (9)].token_p)); 
													insert(p, (yyvsp[(4) - (9)].token_p)); 
													insert(p, (yyvsp[(5) - (9)].token_p)); 
													insert(p, (yyvsp[(6) - (9)].token_p)); 
													insert(p, (yyvsp[(7) - (9)].token_p)); 
													insert(p, (yyvsp[(8) - (9)].token_p)); 
													insert(p, (yyvsp[(9) - (9)].token_p)); 
													(yyval.token_p) = p;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 196 "compile.y"
    {p = newNode("loopstmt", (yyvsp[(1) - (7)].token_p)->No_Line, (yyvsp[(1) - (7)].token_p)->col);
											insert(p, (yyvsp[(1) - (7)].token_p)); 
											insert(p, (yyvsp[(2) - (7)].token_p)); 
											insert(p, (yyvsp[(3) - (7)].token_p)); 
											insert(p, (yyvsp[(4) - (7)].token_p)); 
											insert(p, (yyvsp[(5) - (7)].token_p)); 
											insert(p, (yyvsp[(6) - (7)].token_p)); 
											insert(p, (yyvsp[(7) - (7)].token_p)); 
											(yyval.token_p) = p;}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 208 "compile.y"
    {p = newNode("assignstmt", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col);
							insert(p, (yyvsp[(1) - (2)].token_p));
							insert(p, (yyvsp[(2) - (2)].token_p));
							(yyval.token_p) = p;}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 216 "compile.y"
    {p = newNode("assign", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
							insert(p, (yyvsp[(1) - (3)].token_p));
							insert(p, (yyvsp[(2) - (3)].token_p));
							insert(p, (yyvsp[(3) - (3)].token_p));
							(yyval.token_p) = p;}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 221 "compile.y"
    {p = newNode("assign", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 226 "compile.y"
    {p = newNode("jstmt", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col); insert(p, (yyvsp[(1) - (2)].token_p)); insert(p, (yyvsp[(2) - (2)].token_p)); (yyval.token_p) = p;}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 227 "compile.y"
    {p = newNode("jstmt", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
						insert(p, (yyvsp[(1) - (3)].token_p));
						insert(p, (yyvsp[(2) - (3)].token_p)); 
						insert(p, (yyvsp[(3) - (3)].token_p)); 
						(yyval.token_p) = p;}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 237 "compile.y"
    {p = newNode("defs", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col); 
				insert(p, (yyvsp[(1) - (2)].token_p));
				insert(p, (yyvsp[(2) - (2)].token_p));
				(yyval.token_p) = p;}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 241 "compile.y"
    {(yyval.token_p) = NULL;}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 245 "compile.y"
    {p = newNode("def", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
					insert(p, (yyvsp[(1) - (3)].token_p));
					insert(p, (yyvsp[(2) - (3)].token_p));
					insert(p, (yyvsp[(3) - (3)].token_p));
					(yyval.token_p) = p;}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 253 "compile.y"
    {p = newNode("exp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 254 "compile.y"
    {p = newNode("exp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 255 "compile.y"
    {p = newNode("exp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 256 "compile.y"
    {p = newNode("exp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 260 "compile.y"
    {p = newNode("primexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 261 "compile.y"
    {p = newNode("primexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 262 "compile.y"
    {p = newNode("primexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 263 "compile.y"
    {p = newNode("primexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
					insert(p, (yyvsp[(1) - (3)].token_p));
					insert(p, (yyvsp[(2) - (3)].token_p));
					insert(p, (yyvsp[(3) - (3)].token_p));
					(yyval.token_p) = p;}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 271 "compile.y"
    {p = newNode("unaryop", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 272 "compile.y"
    {p = newNode("unaryop", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 273 "compile.y"
    {p = newNode("unaryop", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 274 "compile.y"
    {p = newNode("unaryop", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 278 "compile.y"
    {p = newNode("unaryexp", (yyvsp[(1) - (2)].token_p)->No_Line, (yyvsp[(1) - (2)].token_p)->col);
						insert(p, (yyvsp[(1) - (2)].token_p)); 
						insert(p, (yyvsp[(2) - (2)].token_p)); 
						(yyval.token_p) = p;}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 282 "compile.y"
    {p = newNode("unaryexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 287 "compile.y"
    {p = newNode("leftexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 288 "compile.y"
    {p = newNode("leftexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
						insert(p, (yyvsp[(1) - (3)].token_p));
						insert(p, (yyvsp[(2) - (3)].token_p));
						insert(p, (yyvsp[(3) - (3)].token_p));
						(yyval.token_p) = p;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 293 "compile.y"
    {p = newNode("leftexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
						insert(p, (yyvsp[(1) - (3)].token_p)); 
						insert(p, (yyvsp[(2) - (3)].token_p)); 
						insert(p, (yyvsp[(3) - (3)].token_p)); 
						(yyval.token_p) = p;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 298 "compile.y"
    {p = newNode("leftexp", (yyvsp[(1) - (4)].token_p)->No_Line, (yyvsp[(1) - (4)].token_p)->col);
							insert(p, (yyvsp[(1) - (4)].token_p)); 
							insert(p, (yyvsp[(2) - (4)].token_p)); 
							insert(p, (yyvsp[(3) - (4)].token_p)); 
							insert(p, (yyvsp[(4) - (4)].token_p)); 
							(yyval.token_p) = p;}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 307 "compile.y"
    {p = newNode("args", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
					insert(p, (yyvsp[(1) - (3)].token_p)); 
					insert(p, (yyvsp[(2) - (3)].token_p)); 
					insert(p, (yyvsp[(3) - (3)].token_p)); 
					(yyval.token_p) = p;}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 312 "compile.y"
    {p = newNode("args", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 316 "compile.y"
    {p = newNode("relationexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 317 "compile.y"
    {p = newNode("relationexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
								insert(p, (yyvsp[(1) - (3)].token_p)); 
								insert(p, (yyvsp[(2) - (3)].token_p)); 
								insert(p, (yyvsp[(3) - (3)].token_p)); 
								(yyval.token_p) = p;}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 322 "compile.y"
    {p = newNode("relationexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
								insert(p, (yyvsp[(1) - (3)].token_p)); 
								insert(p, (yyvsp[(2) - (3)].token_p)); 
								insert(p, (yyvsp[(3) - (3)].token_p)); 
								(yyval.token_p) = p;}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 327 "compile.y"
    {p = newNode("relationexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
								insert(p, (yyvsp[(1) - (3)].token_p)); 
								insert(p, (yyvsp[(2) - (3)].token_p)); 
								insert(p, (yyvsp[(3) - (3)].token_p)); 
								(yyval.token_p) = p;}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 332 "compile.y"
    {p = newNode("relationexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
								insert(p, (yyvsp[(1) - (3)].token_p)); 
								insert(p, (yyvsp[(2) - (3)].token_p)); 
								insert(p, (yyvsp[(3) - (3)].token_p)); 
								(yyval.token_p) = p;}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 341 "compile.y"
    {p = newNode("equalexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
								insert(p, (yyvsp[(1) - (3)].token_p)); 
								insert(p, (yyvsp[(2) - (3)].token_p)); 
								insert(p, (yyvsp[(3) - (3)].token_p)); 
								(yyval.token_p) = p;}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 346 "compile.y"
    {p = newNode("equalexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
								insert(p, (yyvsp[(1) - (3)].token_p));
								insert(p, (yyvsp[(2) - (3)].token_p));
								insert(p, (yyvsp[(3) - (3)].token_p));
								(yyval.token_p) = p;}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 351 "compile.y"
    {p = newNode("addexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 355 "compile.y"
    {p = newNode("addexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 356 "compile.y"
    {p = newNode("addexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
							insert(p, (yyvsp[(1) - (3)].token_p));
							insert(p, (yyvsp[(2) - (3)].token_p));
							insert(p, (yyvsp[(3) - (3)].token_p));
							(yyval.token_p) = p;}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 361 "compile.y"
    {p = newNode("addexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col);
							insert(p, (yyvsp[(1) - (3)].token_p)); 
							insert(p, (yyvsp[(2) - (3)].token_p)); 
							insert(p, (yyvsp[(3) - (3)].token_p)); 
							(yyval.token_p) = p;}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 369 "compile.y"
    {p = newNode("multipexp", (yyvsp[(1) - (1)].token_p)->No_Line, (yyvsp[(1) - (1)].token_p)->col); insert(p, (yyvsp[(1) - (1)].token_p)); (yyval.token_p) = p;}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 370 "compile.y"
    {p = newNode("multipexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
								insert(p, (yyvsp[(1) - (3)].token_p)); 
								insert(p, (yyvsp[(2) - (3)].token_p)); 
								insert(p, (yyvsp[(3) - (3)].token_p)); 
								(yyval.token_p) = p;}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 375 "compile.y"
    {p = newNode("multipexp", (yyvsp[(1) - (3)].token_p)->No_Line, (yyvsp[(1) - (3)].token_p)->col); 
								insert(p, (yyvsp[(1) - (3)].token_p));
								insert(p, (yyvsp[(2) - (3)].token_p));
								insert(p, (yyvsp[(3) - (3)].token_p));
								(yyval.token_p) = p;}
    break;


/* Line 1792 of yacc.c  */
#line 2119 "compile.tab.c"
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
#line 402 "compile.y"





void yyerror(char* s)
{    
	printf("Error:%s\n", s);
	 getchar();
	 getchar();
}

int main(int argc,char *argv[])
{    
	char filename1[30];
	
	scanf("%s", &filename1);
     FILE* fin=NULL;
     extern FILE* yyin;
     fin=fopen(filename1,"r"); 
     if(fin==NULL)
     { 
         printf("cannot open reading file.\n");
         return -1;
     }
     yyin=fin;
     yyparse();
     print(p,0);
     fclose(fin);
	 getchar();
	 getchar();
     return 0;
}
