/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compile.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
#include "node.h"


Node* p;
void yyerror(char *s);
FILE *fout;


extern int column;



#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define TYPE_NAME 260
#define STRING_LITERAL 261
#define CHAR 262
#define INT 263
#define FLOAT 264
#define VOID 265
#define STRUCT 266
#define LE 267
#define GE 268
#define AND 269
#define OR 270
#define EQ 271
#define NE 272
#define IF 273
#define ELSE 274
#define DO 275
#define WHILE 276
#define BREAK 277
#define FOR 278
#define RETURN 279
#define SWITCH 280
#define CASE 281
#define DEFAULT 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "compile.y" /* yacc.c:355  */

         Node *token_p;

#line 179 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 196 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    41,    44,    48,    53,    61,    62,    70,
      74,    75,    76,    77,    82,    83,    92,    96,   100,   104,
     113,   118,   122,   130,   139,   143,   147,   148,   149,   150,
     151,   157,   164,   178,   185,   196,   208,   216,   221,   226,
     227,   237,   241,   245,   253,   254,   255,   256,   257,   261,
     262,   263,   264,   269,   273,   274,   275,   276,   280,   284,
     289,   290,   295,   300,   309,   314,   318,   319,   324,   329,
     334,   343,   348,   353,   357,   358,   363,   371,   372,   377,
     387
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
  "relationexp", "equalexp", "addexp", "multipexp", "call", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,    33,    44,    46,
      61,    62,    60,   123,   125,    40,    41,    91,    93,    59,
      63,   124,    94,    58,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -78

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,   -72,   -72,   -72,   -72,    26,   -72,   122,    -8,   -72,
     -72,   -72,    20,    34,    48,    52,    63,   122,   -72,    64,
     -72,    96,   122,   -72,    64,    74,    87,   -72,   -72,   -72,
     -72,   -72,   -72,    96,    83,   -72,   -72,   -72,   -72,   -72,
      96,    69,    16,   107,   -27,    17,    42,   -72,    64,     0,
     122,   -72,   -72,   122,    86,    96,   -72,    89,    91,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    93,
      -1,   100,    25,   112,   103,   120,    96,    52,   -72,   123,
       0,   -72,   -72,   -72,   119,   -72,   -72,   -72,   -72,   -72,
     131,   126,   -72,   127,   -72,   -72,    17,    17,    17,    17,
      17,    17,   -72,    42,    42,   -72,   -72,   -72,    96,   102,
      96,   -72,    96,   128,   121,   -72,   -72,   -72,    96,   -72,
     -72,   133,   139,   140,   136,   -72,   -72,   -72,    25,    96,
      25,    96,   117,   142,   -72,   141,    25,   143,    96,   -72,
     -72,   145,    25,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    11,    13,    10,     0,     2,     4,     0,     9,
       1,     3,    18,     0,     7,    14,     0,     0,     5,     0,
      16,    48,    42,     6,     0,     0,    21,    18,     8,    54,
      55,    56,    57,    48,    49,    50,    51,    15,    17,    60,
       0,    66,    59,    44,    45,    46,    47,    53,     0,    25,
      42,    22,    19,     0,     0,    48,    58,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    48,     0,     0,     0,    48,     0,    27,     0,
      25,    28,    29,    26,     0,    30,    38,    41,    20,    52,
      65,     0,    62,     0,    61,    74,    68,    67,    69,    70,
      71,    72,    77,    75,    76,    78,    79,    43,    48,     0,
      48,    39,    48,     0,    48,    23,    24,    36,    48,    80,
      63,     0,     0,     0,     0,    40,    37,    64,    48,    48,
      48,    48,    31,     0,    33,     0,    48,     0,    48,    32,
      35,     0,    48,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   152,   -72,   -11,     1,   -72,   -72,    88,   -72,
      -2,   -72,   110,   -72,   148,    90,   -71,   -72,   -72,   -72,
      53,   -72,   116,   -72,   -21,   -72,   -72,    18,   -72,   -55,
     -72,   -72,    70,    -5,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    13,     8,     9,    14,    21,    37,
      77,    16,    25,    26,    78,    79,    80,    81,    82,    83,
      84,    85,    49,    50,    86,    39,    40,    41,    42,    91,
      43,    44,    45,    46,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,   109,    93,    29,    30,    31,    15,    32,    28,   -18,
      63,    64,    54,    22,    55,    33,    12,    15,    24,   -48,
      65,    66,    51,    48,    70,    35,    10,    36,    29,    30,
      31,    57,    32,    58,    90,    17,    90,    69,    22,    71,
      33,    72,    73,    74,    75,    76,    15,    67,    68,    70,
      35,    48,    36,    18,    24,   113,    19,   132,    56,   134,
     103,   104,    20,   127,    71,   139,    72,    73,    74,    75,
      76,   143,   -74,   -74,   -77,   -77,    22,    95,    95,    95,
      95,    95,    95,   102,   102,   105,   106,   121,    27,   123,
      52,   124,    29,    30,    31,    53,    32,    90,    55,    29,
      30,    31,    89,    32,    33,    92,   -73,   -73,   133,    94,
     135,    33,   107,    34,    35,   108,    36,   141,    59,    60,
      34,    35,   111,    36,    29,    30,    31,   110,    32,    96,
      97,    98,    99,   100,   101,   112,    33,   115,   117,   118,
      61,    62,   119,   120,   122,    70,    35,   125,    36,   128,
       1,     2,     3,     4,   129,   131,   130,   136,   137,    11,
     138,   142,   140,    88,    23,   114,    87,   126,     0,     0,
     116
};

static const yytype_int16 yycheck[] =
{
      21,    72,    57,     3,     4,     5,     8,     7,    19,    10,
      37,    38,    33,    13,    15,    15,    24,    19,    17,    19,
       3,     4,    24,    22,    24,    25,     0,    27,     3,     4,
       5,    15,     7,    17,    55,    15,    57,    48,    13,    39,
      15,    41,    42,    43,    44,    45,    48,     5,     6,    24,
      25,    50,    27,    19,    53,    76,     8,   128,    40,   130,
      65,    66,    10,   118,    39,   136,    41,    42,    43,    44,
      45,   142,     3,     4,     5,     6,    13,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   108,    24,   110,
      16,   112,     3,     4,     5,     8,     7,   118,    15,     3,
       4,     5,    16,     7,    15,    16,    37,    38,   129,    18,
     131,    15,    19,    24,    25,    15,    27,   138,    11,    12,
      24,    25,    19,    27,     3,     4,     5,    15,     7,    59,
      60,    61,    62,    63,    64,    15,    15,    14,    19,     8,
      33,    34,    16,    16,    42,    24,    25,    19,    27,    16,
      28,    29,    30,    31,    15,    19,    16,    40,    16,     7,
      19,    16,    19,    53,    16,    77,    50,   114,    -1,    -1,
      80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    50,    51,    52,    54,    55,
       0,    51,    24,    53,    56,    59,    60,    15,    19,     8,
      10,    57,    13,    63,    54,    61,    62,    24,    53,     3,
       4,     5,     7,    15,    24,    25,    27,    58,    73,    74,
      75,    76,    77,    79,    80,    81,    82,    83,    54,    71,
      72,    59,    16,     8,    73,    15,    76,    15,    17,    11,
      12,    33,    34,    37,    38,     3,     4,     5,     6,    53,
      24,    39,    41,    42,    43,    44,    45,    59,    63,    64,
      65,    66,    67,    68,    69,    70,    73,    71,    61,    16,
      73,    78,    16,    78,    18,    76,    81,    81,    81,    81,
      81,    81,    76,    82,    82,    76,    76,    19,    15,    65,
      15,    19,    15,    73,    57,    14,    64,    19,     8,    16,
      16,    73,    42,    73,    73,    19,    69,    78,    16,    15,
      16,    19,    65,    73,    65,    73,    40,    16,    19,    65,
      19,    73,    16,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    55,    55,    56,    56,    57,    58,    59,    60,
      61,    61,    62,    63,    64,    64,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    68,    69,    69,    70,
      70,    71,    71,    72,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     4,
       3,     1,     2,     4,     2,     0,     1,     1,     1,     1,
       1,     5,     7,     5,     9,     7,     2,     3,     1,     2,
       3,     2,     0,     3,     1,     1,     1,     1,     0,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     3,     4,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 37 "compile.y" /* yacc.c:1646  */
    {p = newNode("program", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 41 "compile.y" /* yacc.c:1646  */
    {p = newNode("declaration_list", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col);
						insert(p, (yyvsp[-1].token_p)); insert(p, (yyvsp[0].token_p));
						(yyval.token_p) = p;}
#line 1391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "compile.y" /* yacc.c:1646  */
    {p = newNode("declaration_list", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "compile.y" /* yacc.c:1646  */
    {p = newNode("declaration", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
						insert(p, (yyvsp[-2].token_p));
						insert(p, (yyvsp[-1].token_p));
						insert(p, (yyvsp[0].token_p));
						(yyval.token_p) = p;}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "compile.y" /* yacc.c:1646  */
    {p = newNode("declaration", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
							insert(p, (yyvsp[-2].token_p));
							insert(p, (yyvsp[-1].token_p));
							insert(p, (yyvsp[0].token_p));
							(yyval.token_p) = p;}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 61 "compile.y" /* yacc.c:1646  */
    {p = newNode("extvars", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 62 "compile.y" /* yacc.c:1646  */
    {p = newNode("extvars", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
						insert(p, (yyvsp[-2].token_p));
						insert(p, (yyvsp[-1].token_p));
						insert(p, (yyvsp[0].token_p));
						(yyval.token_p) = p;}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "compile.y" /* yacc.c:1646  */
    {p = newNode("spec", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "compile.y" /* yacc.c:1646  */
    {p = newNode("type", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "compile.y" /* yacc.c:1646  */
    {p = newNode("type", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 76 "compile.y" /* yacc.c:1646  */
    {p = newNode("type", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "compile.y" /* yacc.c:1646  */
    {p = newNode("type", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "compile.y" /* yacc.c:1646  */
    {p = newNode("dec", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "compile.y" /* yacc.c:1646  */
    {p = newNode("dec", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
						insert(p, (yyvsp[-2].token_p));
						insert(p, (yyvsp[-1].token_p));
						insert(p, (yyvsp[0].token_p));
						(yyval.token_p) = p;}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "compile.y" /* yacc.c:1646  */
    {p = newNode("assignop", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "compile.y" /* yacc.c:1646  */
    {p = newNode("init", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "compile.y" /* yacc.c:1646  */
    {p = newNode("var", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 104 "compile.y" /* yacc.c:1646  */
    {p = newNode("func", (yyvsp[-3].token_p)->No_Line, (yyvsp[-3].token_p)->col); 
								insert(p, (yyvsp[-3].token_p));
								insert(p, (yyvsp[-2].token_p));
								insert(p, (yyvsp[-1].token_p));
								insert(p, (yyvsp[0].token_p));
								(yyval.token_p) = p;}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "compile.y" /* yacc.c:1646  */
    {p = newNode("paras", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
						insert(p, (yyvsp[-2].token_p)); 
						insert(p, (yyvsp[-1].token_p)); 
						insert(p, (yyvsp[0].token_p)); 
						(yyval.token_p) = p;}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 118 "compile.y" /* yacc.c:1646  */
    {p = newNode("paras", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 122 "compile.y" /* yacc.c:1646  */
    {p = newNode("para", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col);
				insert(p, (yyvsp[-1].token_p));
				insert(p, (yyvsp[0].token_p));
				(yyval.token_p) = p;}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 130 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmtblock", (yyvsp[-3].token_p)->No_Line, (yyvsp[-3].token_p)->col);
							insert(p, (yyvsp[-3].token_p));
							insert(p, (yyvsp[-2].token_p));
							insert(p, (yyvsp[-1].token_p));
							insert(p, (yyvsp[0].token_p));
							(yyval.token_p) = p;}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 139 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmts", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col); 
					insert(p, (yyvsp[-1].token_p)); 
					insert(p, (yyvsp[0].token_p)); 
					(yyval.token_p) = p;}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "compile.y" /* yacc.c:1646  */
    {(yyval.token_p) = NULL;}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 147 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmt", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 148 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmt", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmt", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 150 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmt", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "compile.y" /* yacc.c:1646  */
    {p = newNode("stmt", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 157 "compile.y" /* yacc.c:1646  */
    {p = newNode("selstmt", (yyvsp[-4].token_p)->No_Line, (yyvsp[-4].token_p)->col);
							insert(p, (yyvsp[-4].token_p)); 
							insert(p, (yyvsp[-3].token_p)); 
							insert(p, (yyvsp[-2].token_p)); 
							insert(p, (yyvsp[-1].token_p)); 
							insert(p, (yyvsp[0].token_p)); 
							(yyval.token_p) = p;}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 164 "compile.y" /* yacc.c:1646  */
    {p = newNode("selstmt", (yyvsp[-6].token_p)->No_Line, (yyvsp[-6].token_p)->col);
										insert(p, (yyvsp[-6].token_p));
										insert(p, (yyvsp[-5].token_p));
										insert(p, (yyvsp[-4].token_p));
										insert(p, (yyvsp[-3].token_p));
										insert(p, (yyvsp[-2].token_p));
										insert(p, (yyvsp[-1].token_p));
										insert(p, (yyvsp[0].token_p));
										(yyval.token_p) = p;}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 178 "compile.y" /* yacc.c:1646  */
    {p = newNode("loopstmt", (yyvsp[-4].token_p)->No_Line, (yyvsp[-4].token_p)->col);
									insert(p, (yyvsp[-4].token_p));
									insert(p, (yyvsp[-3].token_p));
									insert(p, (yyvsp[-2].token_p));
									insert(p, (yyvsp[-1].token_p));
									insert(p, (yyvsp[0].token_p));
									(yyval.token_p) = p;}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 185 "compile.y" /* yacc.c:1646  */
    {p = newNode("loopstmt", (yyvsp[-8].token_p)->No_Line, (yyvsp[-8].token_p)->col);
													insert(p, (yyvsp[-8].token_p)); 
													insert(p, (yyvsp[-7].token_p)); 
													insert(p, (yyvsp[-6].token_p)); 
													insert(p, (yyvsp[-5].token_p)); 
													insert(p, (yyvsp[-4].token_p)); 
													insert(p, (yyvsp[-3].token_p)); 
													insert(p, (yyvsp[-2].token_p)); 
													insert(p, (yyvsp[-1].token_p)); 
													insert(p, (yyvsp[0].token_p)); 
													(yyval.token_p) = p;}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 196 "compile.y" /* yacc.c:1646  */
    {p = newNode("loopstmt", (yyvsp[-6].token_p)->No_Line, (yyvsp[-6].token_p)->col);
											insert(p, (yyvsp[-6].token_p)); 
											insert(p, (yyvsp[-5].token_p)); 
											insert(p, (yyvsp[-4].token_p)); 
											insert(p, (yyvsp[-3].token_p)); 
											insert(p, (yyvsp[-2].token_p)); 
											insert(p, (yyvsp[-1].token_p)); 
											insert(p, (yyvsp[0].token_p)); 
											(yyval.token_p) = p;}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 208 "compile.y" /* yacc.c:1646  */
    {p = newNode("assignstmt", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col);
							insert(p, (yyvsp[-1].token_p));
							insert(p, (yyvsp[0].token_p));
							(yyval.token_p) = p;}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 216 "compile.y" /* yacc.c:1646  */
    {p = newNode("assign", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
							insert(p, (yyvsp[-2].token_p));
							insert(p, (yyvsp[-1].token_p));
							insert(p, (yyvsp[0].token_p));
							(yyval.token_p) = p;}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 221 "compile.y" /* yacc.c:1646  */
    {p = newNode("assign", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 226 "compile.y" /* yacc.c:1646  */
    {p = newNode("jstmt", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col); insert(p, (yyvsp[-1].token_p)); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 227 "compile.y" /* yacc.c:1646  */
    {p = newNode("jstmt", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
						insert(p, (yyvsp[-2].token_p));
						insert(p, (yyvsp[-1].token_p)); 
						insert(p, (yyvsp[0].token_p)); 
						(yyval.token_p) = p;}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 237 "compile.y" /* yacc.c:1646  */
    {p = newNode("defs", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col); 
				insert(p, (yyvsp[-1].token_p));
				insert(p, (yyvsp[0].token_p));
				(yyval.token_p) = p;}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 241 "compile.y" /* yacc.c:1646  */
    {(yyval.token_p) = NULL;}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 245 "compile.y" /* yacc.c:1646  */
    {p = newNode("def", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
					insert(p, (yyvsp[-2].token_p));
					insert(p, (yyvsp[-1].token_p));
					insert(p, (yyvsp[0].token_p));
					(yyval.token_p) = p;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 253 "compile.y" /* yacc.c:1646  */
    {p = newNode("exp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 254 "compile.y" /* yacc.c:1646  */
    {p = newNode("exp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 255 "compile.y" /* yacc.c:1646  */
    {p = newNode("exp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 256 "compile.y" /* yacc.c:1646  */
    {p = newNode("exp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 257 "compile.y" /* yacc.c:1646  */
    {p = NULL;}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 261 "compile.y" /* yacc.c:1646  */
    {p = newNode("primexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 262 "compile.y" /* yacc.c:1646  */
    {p = newNode("primexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 263 "compile.y" /* yacc.c:1646  */
    {p = newNode("primexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 264 "compile.y" /* yacc.c:1646  */
    {p = newNode("primexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
					insert(p, (yyvsp[-2].token_p));
					insert(p, (yyvsp[-1].token_p));
					insert(p, (yyvsp[0].token_p));
					(yyval.token_p) = p;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 269 "compile.y" /* yacc.c:1646  */
    {p = newNode("primexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 273 "compile.y" /* yacc.c:1646  */
    {p = newNode("unaryop", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 274 "compile.y" /* yacc.c:1646  */
    {p = newNode("unaryop", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 275 "compile.y" /* yacc.c:1646  */
    {p = newNode("unaryop", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 276 "compile.y" /* yacc.c:1646  */
    {p = newNode("unaryop", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 280 "compile.y" /* yacc.c:1646  */
    {p = newNode("unaryexp", (yyvsp[-1].token_p)->No_Line, (yyvsp[-1].token_p)->col);
						insert(p, (yyvsp[-1].token_p)); 
						insert(p, (yyvsp[0].token_p)); 
						(yyval.token_p) = p;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 284 "compile.y" /* yacc.c:1646  */
    {p = newNode("unaryexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 289 "compile.y" /* yacc.c:1646  */
    {p = newNode("leftexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 290 "compile.y" /* yacc.c:1646  */
    {p = newNode("leftexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
						insert(p, (yyvsp[-2].token_p));
						insert(p, (yyvsp[-1].token_p));
						insert(p, (yyvsp[0].token_p));
						(yyval.token_p) = p;}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 295 "compile.y" /* yacc.c:1646  */
    {p = newNode("leftexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
						insert(p, (yyvsp[-2].token_p)); 
						insert(p, (yyvsp[-1].token_p)); 
						insert(p, (yyvsp[0].token_p)); 
						(yyval.token_p) = p;}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 300 "compile.y" /* yacc.c:1646  */
    {p = newNode("leftexp", (yyvsp[-3].token_p)->No_Line, (yyvsp[-3].token_p)->col);
							insert(p, (yyvsp[-3].token_p)); 
							insert(p, (yyvsp[-2].token_p)); 
							insert(p, (yyvsp[-1].token_p)); 
							insert(p, (yyvsp[0].token_p)); 
							(yyval.token_p) = p;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 309 "compile.y" /* yacc.c:1646  */
    {p = newNode("args", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
					insert(p, (yyvsp[-2].token_p)); 
					insert(p, (yyvsp[-1].token_p)); 
					insert(p, (yyvsp[0].token_p)); 
					(yyval.token_p) = p;}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 314 "compile.y" /* yacc.c:1646  */
    {p = newNode("args", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 318 "compile.y" /* yacc.c:1646  */
    {p = newNode("relationexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 319 "compile.y" /* yacc.c:1646  */
    {p = newNode("relationexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
								insert(p, (yyvsp[-2].token_p)); 
								insert(p, (yyvsp[-1].token_p)); 
								insert(p, (yyvsp[0].token_p)); 
								(yyval.token_p) = p;}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 324 "compile.y" /* yacc.c:1646  */
    {p = newNode("relationexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
								insert(p, (yyvsp[-2].token_p)); 
								insert(p, (yyvsp[-1].token_p)); 
								insert(p, (yyvsp[0].token_p)); 
								(yyval.token_p) = p;}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 329 "compile.y" /* yacc.c:1646  */
    {p = newNode("relationexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
								insert(p, (yyvsp[-2].token_p)); 
								insert(p, (yyvsp[-1].token_p)); 
								insert(p, (yyvsp[0].token_p)); 
								(yyval.token_p) = p;}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 334 "compile.y" /* yacc.c:1646  */
    {p = newNode("relationexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
								insert(p, (yyvsp[-2].token_p)); 
								insert(p, (yyvsp[-1].token_p)); 
								insert(p, (yyvsp[0].token_p)); 
								(yyval.token_p) = p;}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 343 "compile.y" /* yacc.c:1646  */
    {p = newNode("equalexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
								insert(p, (yyvsp[-2].token_p)); 
								insert(p, (yyvsp[-1].token_p)); 
								insert(p, (yyvsp[0].token_p)); 
								(yyval.token_p) = p;}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 348 "compile.y" /* yacc.c:1646  */
    {p = newNode("equalexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
								insert(p, (yyvsp[-2].token_p));
								insert(p, (yyvsp[-1].token_p));
								insert(p, (yyvsp[0].token_p));
								(yyval.token_p) = p;}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 353 "compile.y" /* yacc.c:1646  */
    {p = newNode("addexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 357 "compile.y" /* yacc.c:1646  */
    {p = newNode("addexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 358 "compile.y" /* yacc.c:1646  */
    {p = newNode("addexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
							insert(p, (yyvsp[-2].token_p)); 
							insert(p, (yyvsp[-1].token_p));
							insert(p, (yyvsp[0].token_p));
							(yyval.token_p) = p;}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 363 "compile.y" /* yacc.c:1646  */
    {p = newNode("addexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col);
							insert(p, (yyvsp[-2].token_p)); 
							insert(p, (yyvsp[-1].token_p)); 
							insert(p, (yyvsp[0].token_p)); 
							(yyval.token_p) = p;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 371 "compile.y" /* yacc.c:1646  */
    {p = newNode("multipexp", (yyvsp[0].token_p)->No_Line, (yyvsp[0].token_p)->col); insert(p, (yyvsp[0].token_p)); (yyval.token_p) = p;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 372 "compile.y" /* yacc.c:1646  */
    {p = newNode("multipexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
								insert(p, (yyvsp[-2].token_p)); 
								insert(p, (yyvsp[-1].token_p)); 
								insert(p, (yyvsp[0].token_p)); 
								(yyval.token_p) = p;}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 377 "compile.y" /* yacc.c:1646  */
    {p = newNode("multipexp", (yyvsp[-2].token_p)->No_Line, (yyvsp[-2].token_p)->col); 
								insert(p, (yyvsp[-2].token_p));
								insert(p, (yyvsp[-1].token_p));
								insert(p, (yyvsp[0].token_p));
								(yyval.token_p) = p;}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 387 "compile.y" /* yacc.c:1646  */
    {p = newNode("call", (yyvsp[-3].token_p)->No_Line, (yyvsp[-3].token_p)->col); 
								insert(p, (yyvsp[-3].token_p));
								insert(p, (yyvsp[-2].token_p));
								insert(p, (yyvsp[-1].token_p));
								insert(p, (yyvsp[0].token_p));
								(yyval.token_p) = p;}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2018 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 395 "compile.y" /* yacc.c:1906  */


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
