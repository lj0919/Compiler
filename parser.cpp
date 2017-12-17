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
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include "node.h"
#include <sstream>
#include"var_info.h"
#include<map>
using namespace std;
Node* node;
void yyerror(const char*);
extern int yylex();
void dfs(Node* node,int depth);
int sti(string s);
double stf(string s);
double toDouble(int i);
void printNode(Node* node,int indent);
string tostr(int a);
string tostr(double b);
string deal(Node* arg1,Node* arg2,int oparg);
map<string,var_info*> var_list;
var_info* get(string s);
#define YYSTYPE Node *

#line 93 "parser.cpp" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    END = 0,
    ID = 258,
    CHAR = 259,
    VOID = 260,
    INT = 261,
    CHARS = 262,
    SHORT = 263,
    LONG = 264,
    DOUBLE = 265,
    FLOAT = 266,
    SIGNED = 267,
    UNSIGNED = 268,
    LBRACE = 269,
    WRITE = 270,
    RBRACE = 271,
    LBRACKET = 272,
    RBRACKET = 273,
    LPAREN = 274,
    RPAREN = 275,
    DOU = 276,
    SQM = 277,
    SEM = 278,
    BOOL = 279,
    STRUCT = 280,
    UNION = 281,
    ENUM = 282,
    TYPEDEF = 283,
    SIZEOF = 284,
    AUTO = 285,
    STATIC = 286,
    REGISTER = 287,
    EXTERN = 288,
    CONST = 289,
    VOLATILE = 290,
    RETURN = 291,
    CONTINUE = 292,
    BREAK = 293,
    GOTO = 294,
    IF = 295,
    ELSE = 296,
    SWITCH = 297,
    CASE = 298,
    DEFAULT = 299,
    FOR = 300,
    DO = 301,
    WHILE = 302,
    CHARVAL = 303,
    INTEGER = 304,
    NUMBER = 305,
    CLASS = 306,
    PUBLIC = 307,
    PRIVATE = 308,
    PROTECTED = 309,
    COLON = 310,
    READ = 311,
    ASSIGN = 312,
    BITAND = 313,
    XOR = 314,
    BITOR = 315,
    AND = 316,
    OR = 317,
    NE = 318,
    EQ = 319,
    RE = 320,
    RT = 321,
    LE = 322,
    LT = 323,
    RSHIFT = 324,
    LSHIFT = 325,
    PLUS = 326,
    MINUS = 327,
    MUL = 328,
    DIV = 329,
    MOD = 330,
    BITNOT = 331,
    UMINUS = 332,
    UPLUS = 333,
    NOT = 334,
    TPLUS = 335,
    TMINUS = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   834

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    99,   103,   104,   108,   112,   119,   126,
     130,   136,   137,   138,   141,   142,   143,   144,   145,   149,
     150,   151,   154,   155,   156,   157,   161,   167,   174,   180,
     187,   193,   200,   207,   213,   219,   228,   238,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   262,   267,
     273,   274,   275,   276,   277,   280,   290,   300,   308,   321,
     329,   342,   357,   380,   392,   404,   420,   422,   427,   433,
     484,   512,   521,   531,   541,   550,   560,   566,   573,   585,
     608,   611,   626,   630,   635,   647,   653,   656,   657,   658,
     659,   662,   674,   678,   681,   685,   686,   690,   694,   712,
     727,   750,   772,   795,   817,   834,   851,   869,   890,   910,
     930,   950,   970,   990,  1010,  1025,  1045,  1060,  1075,  1098,
    1117,  1131,  1154,  1160,  1175,  1186,  1197,  1208,  1229,  1253,
    1260,  1267,  1274
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ID", "CHAR", "VOID", "INT",
  "CHARS", "SHORT", "LONG", "DOUBLE", "FLOAT", "SIGNED", "UNSIGNED",
  "LBRACE", "WRITE", "RBRACE", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN",
  "DOU", "SQM", "SEM", "BOOL", "STRUCT", "UNION", "ENUM", "TYPEDEF",
  "SIZEOF", "AUTO", "STATIC", "REGISTER", "EXTERN", "CONST", "VOLATILE",
  "RETURN", "CONTINUE", "BREAK", "GOTO", "IF", "ELSE", "SWITCH", "CASE",
  "DEFAULT", "FOR", "DO", "WHILE", "CHARVAL", "INTEGER", "NUMBER", "CLASS",
  "PUBLIC", "PRIVATE", "PROTECTED", "COLON", "READ", "ASSIGN", "BITAND",
  "XOR", "BITOR", "AND", "OR", "NE", "EQ", "RE", "RT", "LE", "LT",
  "RSHIFT", "LSHIFT", "PLUS", "MINUS", "MUL", "DIV", "MOD", "BITNOT",
  "UMINUS", "UPLUS", "NOT", "TPLUS", "TMINUS", "$accept", "program",
  "more_func", "func", "class_stmts", "class_stmt", "paramlist", "param",
  "type", "stmts", "stmt", "write_stmt", "read_stmt", "write_param",
  "read_param", "if_stmt", "while_stmt", "dowhile_stmt", "for_stmt",
  "expr_stmt", "declare_stmt", "declare", "array_declare", "declare_list",
  "assign_stmt", "ass_exp", "id_exp", "array_expr", "array_bracket",
  "expr_list", "expr", "factor", "jump_stmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

#define YYPACT_NINF -102

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     720,  -102,    -9,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,    12,    44,    71,   772,  -102,    63,   625,
      61,    68,  -102,  -102,  -102,    59,    75,    70,    39,   396,
     234,   625,    84,   625,  -102,    88,    81,    97,     5,   288,
     113,   128,  -102,   128,  -102,  -102,   132,   138,   396,   139,
    -102,  -102,  -102,   141,   128,   128,   128,   128,   180,   180,
      32,   145,   396,   142,   143,  -102,  -102,  -102,  -102,   144,
     146,   107,   153,   115,   695,   -12,   151,    31,   120,   124,
     126,  -102,   166,   234,    38,  -102,   165,   396,  -102,   183,
    -102,  -102,   128,  -102,   176,   342,   514,    51,    -8,   128,
    -102,   175,   606,   740,   445,   445,   149,   445,    51,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   179,   128,   181,    15,
    -102,  -102,  -102,  -102,  -102,  -102,   128,   460,  -102,   128,
    -102,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,  -102,
    -102,  -102,   445,  -102,  -102,  -102,  -102,  -102,   182,   -10,
     187,  -102,   190,   642,  -102,  -102,  -102,  -102,   128,    82,
    -102,   532,   154,  -102,   128,    57,   192,  -102,   740,   194,
     196,   198,   123,  -102,   625,    41,   199,    57,  -102,   128,
    -102,  -102,   740,   153,   550,   740,   587,   587,   587,   587,
     587,   759,   759,    66,    66,    66,    66,   191,   191,    80,
      80,  -102,  -102,  -102,   625,   396,  -102,  -102,   202,  -102,
      51,  -102,   396,   445,   445,   396,  -102,    51,   201,   174,
    -102,   181,   740,  -102,   153,   214,   219,  -102,  -102,   200,
     227,   232,  -102,  -102,   231,   485,  -102,  -102,    29,  -102,
     396,   445,  -102,  -102,   128,   740,  -102,  -102,   235,   624,
     396,    73,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,    27,    26,    29,    28,    30,    32,    31,
      33,    34,    35,     0,     0,     0,     0,     4,     0,    21,
       0,     0,     1,     3,     5,     0,     0,    19,     0,    48,
      13,    21,     0,    21,    22,     0,     0,     0,   123,     0,
       0,    93,    47,   131,   129,   130,     0,     0,     0,     0,
     125,   126,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,    38,    39,    40,    41,     0,
     122,     0,     0,    95,     0,    94,     0,   123,     0,     0,
       0,    18,     0,    11,     0,    17,     0,    48,    20,     0,
      25,    24,    93,    49,     0,     0,     0,     0,   123,     0,
     122,     0,     0,   132,    67,    67,     0,    67,     0,   120,
     119,    99,    98,   123,   127,   128,    84,    93,    70,    74,
       9,    36,    53,    54,    42,    43,     0,     0,    86,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     121,    52,    21,    14,    15,    16,    10,    12,    84,     0,
       0,    23,     0,    92,    45,    44,    97,    84,    93,     0,
      57,     0,    85,    96,    93,     0,     0,    68,    66,     0,
       0,     0,     0,    59,    21,     0,     0,     0,    69,     0,
      75,    76,    79,    88,     0,    80,   114,   117,   116,   113,
     115,   111,   112,   107,   108,   109,   110,   105,   106,   102,
     103,   100,   101,   104,    21,    48,     6,     8,     0,    55,
       0,    91,    48,    67,    67,    48,    56,     0,     0,     0,
      85,    77,    71,    90,    87,     0,     0,    51,    58,    61,
       0,     0,    63,    60,     0,     0,    78,    89,     0,     7,
      48,    67,    64,    50,    93,    72,     6,    62,     0,     0,
      48,    96,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,    64,   173,  -102,   -25,  -102,     0,   -22,
     -34,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,   -61,
     -78,    86,  -102,    36,   -28,  -102,    -7,  -102,  -101,   -89,
     -18,    90,  -102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    81,    82,    83,    26,    27,    60,    85,
      62,    63,    64,   169,   182,    65,    66,    67,    68,   176,
      69,   118,   190,   188,   100,    71,    72,    73,   128,   101,
      74,    75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    70,    70,   162,   215,    95,    86,    61,    88,   -84,
      19,    70,   -84,   216,   106,    20,    18,    94,   191,    28,
      70,    96,   -84,   102,    92,   103,   177,   177,   186,   177,
      84,    28,   127,    28,    70,   116,   109,   110,   111,   112,
     121,   158,    34,   215,   179,   -83,   181,    21,   -84,   -81,
     152,   117,   256,   119,   167,    70,    35,   117,   127,    70,
     167,   229,   -81,   162,    17,   160,    25,    70,   149,   150,
     168,    22,   189,   121,   163,    29,   117,   119,    31,   186,
      24,   171,    30,    84,    90,   221,   178,   178,   -81,   178,
     170,    33,   233,   -73,   -73,    32,   -73,    36,    87,   163,
      91,   183,   219,   220,   175,   175,    89,   175,   192,   194,
     185,   195,    37,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,    98,    97,   247,   163,   142,   143,   144,   145,   146,
     147,   148,    99,   226,   227,   177,   177,    41,   114,   115,
     163,   104,    28,   146,   147,   148,   163,   105,   107,   228,
     108,   120,   240,   241,   126,   122,   123,   124,   119,   125,
     127,   232,   129,   177,   151,   153,    50,    51,    52,   154,
     119,   155,   156,   113,    28,   159,   161,    70,   239,   235,
     258,   242,   164,   236,    70,   172,   180,    70,   184,    54,
      55,   214,   187,   217,    56,   178,   178,    57,    58,    59,
     218,   -82,   222,   238,    28,   224,   257,   223,   225,   230,
     243,   244,    70,   175,   175,   237,   262,   255,    50,    51,
      52,   245,    70,   178,   248,   249,   259,    77,     3,     4,
       5,   250,     6,     7,     8,     9,    10,    11,    39,    40,
     251,   175,   252,    41,   253,   260,   157,    42,    12,    13,
      58,    59,   144,   145,   146,   147,   148,   246,     0,     0,
      43,    44,    45,   231,    46,     0,     0,     0,     0,    47,
      48,    49,    50,    51,    52,    14,    78,    79,    80,     0,
      53,    38,     3,     4,     5,     0,     6,     7,     8,     9,
      10,    11,    39,    40,    93,    54,    55,    41,     0,     0,
      56,    42,    12,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,     0,    46,     0,
       0,     0,     0,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,     0,    53,    38,     3,     4,     5,     0,
       6,     7,     8,     9,    10,    11,    39,    40,   165,    54,
      55,    41,     0,     0,    56,    42,    12,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,     0,    46,     0,     0,     0,     0,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,    53,    38,
       3,     4,     5,     0,     6,     7,     8,     9,    10,    11,
      39,    40,     0,    54,    55,    41,     0,     0,    56,    42,
      12,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,    45,     0,    46,     0,     0,     0,
       0,    47,    48,    49,    50,    51,    52,     0,    98,     3,
       4,     5,    53,     6,     7,     8,     9,    10,    11,    99,
       0,     0,     0,    98,    41,     0,     0,    54,    55,    12,
       0,     0,    56,     0,    99,    57,    58,    59,   193,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,    50,    51,    52,     0,     0,     0,    99,
       0,     0,     0,     0,   254,     0,     0,     0,    50,    51,
      52,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,    56,     0,     0,    57,    58,    59,     0,     0,     0,
     166,    54,    55,    50,    51,    52,    56,   130,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,    56,     0,     0,    57,    58,    59,     0,   234,     0,
       0,     0,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   173,   174,     0,     3,
       4,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,   261,   174,     0,     0,     0,    12,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   174,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   130,     0,
       1,     0,     0,     2,     3,     4,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    14,    23,     0,     0,     2,     3,     4,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,    14,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148
};

static const yytype_int16 yycheck[] =
{
       0,    29,    30,    92,    14,    39,    31,    29,    33,    17,
      19,    39,    20,    23,    48,     3,    16,    39,   119,    19,
      48,    39,    17,    41,    19,    43,   104,   105,   117,   107,
      30,    31,    17,    33,    62,     3,    54,    55,    56,    57,
      62,     3,     3,    14,   105,    57,   107,     3,    17,    57,
      19,    19,    23,    60,     3,    83,    17,    19,    17,    87,
       3,    20,    57,   152,     0,    87,     3,    95,    80,    81,
      19,     0,    57,    95,    92,    14,    19,    84,    19,   168,
      16,    99,    14,    83,     3,   174,   104,   105,    57,   107,
      97,    21,   193,    20,    21,    20,    23,    58,    14,   117,
       3,   108,    20,    21,   104,   105,    18,   107,   126,   127,
     117,   129,    73,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     3,    19,   234,   152,    69,    70,    71,    72,    73,
      74,    75,    14,    20,    21,   223,   224,    19,    58,    59,
     168,    19,   152,    73,    74,    75,   174,    19,    19,   184,
      19,    16,   223,   224,    57,    23,    23,    23,   175,    23,
      17,   189,    57,   251,    23,    55,    48,    49,    50,    55,
     187,    55,    16,     3,   184,    20,     3,   215,   222,   214,
     251,   225,    16,   215,   222,    20,    47,   225,    19,    71,
      72,    19,    21,    16,    76,   223,   224,    79,    80,    81,
      20,    57,    20,   220,   214,    19,   250,    23,    20,    20,
     227,    20,   250,   223,   224,    23,   260,   245,    48,    49,
      50,    57,   260,   251,    20,    16,   254,     3,     4,     5,
       6,    41,     8,     9,    10,    11,    12,    13,    14,    15,
      23,   251,    20,    19,    23,    20,    83,    23,    24,    25,
      80,    81,    71,    72,    73,    74,    75,   231,    -1,    -1,
      36,    37,    38,   187,    40,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    71,    72,    19,    -1,    -1,
      76,    23,    24,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    56,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    71,
      72,    19,    -1,    -1,    76,    23,    24,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    56,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    71,    72,    19,    -1,    -1,    76,    23,
      24,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    -1,     3,     4,
       5,     6,    56,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,     3,    19,    -1,    -1,    71,    72,    24,
      -1,    -1,    76,    -1,    14,    79,    80,    81,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      16,    71,    72,    48,    49,    50,    76,    23,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    79,    80,    81,    -1,    18,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    20,    21,    -1,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    24,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    21,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    23,    -1,
       0,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    51,     0,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     0,     3,     4,     5,     6,     8,     9,    10,    11,
      12,    13,    24,    25,    51,    83,    84,    85,    90,    19,
       3,     3,     0,     0,    85,     3,    88,    89,    90,    14,
      14,    19,    20,    21,     3,    17,    58,    73,     3,    14,
      15,    19,    23,    36,    37,    38,    40,    45,    46,    47,
      48,    49,    50,    56,    71,    72,    76,    79,    80,    81,
      90,    91,    92,    93,    94,    97,    98,    99,   100,   102,
     106,   107,   108,   109,   112,   113,   114,     3,    52,    53,
      54,    85,    86,    87,    90,    91,    88,    14,    88,    18,
       3,     3,    19,    16,    91,    92,   112,    19,     3,    14,
     106,   111,   112,   112,    19,    19,    92,    19,    19,   112,
     112,   112,   112,     3,   113,   113,     3,    19,   103,   108,
      16,    91,    23,    23,    23,    23,    57,    17,   110,    57,
      23,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    80,
      81,    23,    19,    55,    55,    55,    16,    86,     3,    20,
      91,     3,   111,   112,    16,    16,    16,     3,    19,    95,
     108,   112,    20,    20,    21,    90,   101,   102,   112,   101,
      47,   101,    96,   108,    19,   108,   111,    21,   105,    57,
     104,   110,   112,    18,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,    19,    14,    23,    16,    20,    20,
      21,   111,    20,    23,    19,    20,    20,    21,    88,    20,
      20,   103,   112,   110,    18,    88,    91,    23,   108,    92,
     101,   101,    92,   108,    20,    57,   105,   110,    20,    16,
      41,    23,    20,    23,    19,   112,    23,    92,   101,   112,
      20,    20,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    84,    85,    85,    85,    85,
      85,    86,    86,    86,    87,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    94,    95,    95,    96,
      96,    97,    97,    98,    99,   100,   101,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   104,   105,   105,   106,
     106,   107,   107,   107,   108,   108,   109,   110,   110,   110,
     110,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     6,     8,     7,     5,
       5,     1,     2,     0,     2,     2,     2,     1,     1,     1,
       3,     0,     2,     4,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     2,     1,     0,     2,
       6,     5,     2,     2,     2,     4,     4,     1,     3,     1,
       3,     5,     7,     5,     6,     9,     1,     0,     1,     3,
       2,     3,     5,     7,     1,     2,     1,     2,     3,     3,
       3,     1,     3,     1,     1,     3,     2,     3,     2,     4,
       3,     3,     1,     0,     1,     1,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     2
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
        case 6:
#line 109 "parser.y" /* yacc.c:1646  */
    {

  }
#line 1614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "parser.y" /* yacc.c:1646  */
    {
     (yyval)=new Node();
     (yyval)->node_name="Start";
     (yyval)->child.push_back((yyvsp[-1]));
     dfs((yyval),1);
  }
#line 1625 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "parser.y" /* yacc.c:1646  */
    {
     (yyval)=new Node();
     (yyval)->node_name="Start";
     (yyval)->child.push_back((yyvsp[-1]));
     dfs((yyval),1);
  }
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "parser.y" /* yacc.c:1646  */
    {

  }
#line 1644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 131 "parser.y" /* yacc.c:1646  */
    {

  }
#line 1652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 162 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->node_name="TYPE   void";
  }
#line 1662 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 168 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
    (yyval)->type_name="char";
	  (yyval)->type=6;
    (yyval)->node_name="TYPE   char";
  }
#line 1673 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 175 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->node_name="TYPE   short";
  }
#line 1683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 181 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->type_name="int";
    (yyval)->node_name="TYPE   int";
  }
#line 1694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 188 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->node_name="TYPE   long";
  }
#line 1704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 194 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->type_name="float";
    (yyval)->node_name="TYPE   float";
  }
#line 1715 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 201 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->type_name="double";
    (yyval)->node_name="TYPE   double";
  }
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 208 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->node_name="TYPE   signed";
  }
#line 1736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 214 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->node_name="TYPE   unsigned";
  }
#line 1746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 220 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
	  (yyval)->type=6;
    (yyval)->type_name="bool";
    (yyval)->node_name="TYPE   bool";
  }
#line 1757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 229 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="COMP_STMT";
    (yyval)->type=1;
		(yyval)->child.push_back((yyvsp[-1]));
    for(int i=0;i<(yyvsp[0])->child.size();i++){
      (yyval)->child.push_back((yyvsp[0])->child[i]);
    }
  }
#line 1771 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 239 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=5;
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 1781 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1787 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1793 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1799 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1805 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1811 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 251 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1817 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1823 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1829 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 256 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   EMPTY";
  }
#line 1845 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 262 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   EMPTY";
  }
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 268 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   EMPTY";
  }
#line 1865 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 275 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1871 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 276 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1877 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1883 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 281 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   WRITE";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-1]));
  }
#line 1895 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 291 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   READ";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-1]));
  }
#line 1907 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 301 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
		(yyval)->type=2;
		(yyval)->node_name="WRITE   PARAM";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 1919 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 309 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
		(yyval)->type=2;
		(yyval)->node_name="WRITE   PARAM";
    (yyval)->child.clear();
    for(int i=0;i<(yyvsp[-2])->child.size();i++){
      (yyval)->child.push_back((yyvsp[-2])->child[i]);
    }
    (yyval)->child.push_back((yyvsp[0]));
	}
#line 1934 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 322 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
		(yyval)->type=2;
		(yyval)->node_name="READ   PARAM";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 1946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 330 "parser.y" /* yacc.c:1646  */
    {
		(yyval)=new Node();
		(yyval)->type=2;
		(yyval)->node_name="READ   PARAM";
    (yyval)->child.clear();
    for(int i=0;i<(yyvsp[-2])->child.size();i++){
      (yyval)->child.push_back((yyvsp[-2])->child[i]);
    }
    (yyval)->child.push_back((yyvsp[0]));
	}
#line 1961 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 343 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   IF";
    (yyval)->child.clear();
    (yyvsp[-2])->node_name=(yyvsp[-2])->node_name+"   CONDITION";
    (yyval)->child.push_back((yyvsp[-2]));
    node=new Node();
    node->type=1;
    node->node_name="STMT   null   IF  BRANCH";
    node->child.clear();
    node->child.push_back((yyvsp[0]));
    (yyval)->child.push_back(node);
  }
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 358 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   IF";
    (yyval)->child.clear();
    (yyvsp[-4])->node_name=(yyvsp[-4])->node_name+"   CONDITION";
    (yyval)->child.push_back((yyvsp[-4]));
    node=new Node();
    node->type=1;
    node->node_name="STMT   null   IF  BRANCH";
    node->child.clear();
    node->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back(node);
    node=new Node();
    node->type=1;
    node->node_name="STMT   null   ELSE  BRANCH";
    node->child.clear();
    node->child.push_back((yyvsp[0]));
    (yyval)->child.push_back(node);
  }
#line 2005 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 381 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   WHILE";
    (yyvsp[-2])->node_name=(yyvsp[-2])->node_name+"   CONDITION";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2019 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 393 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   DO-WHILE";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-4]));
    (yyvsp[-1])->node_name=(yyvsp[-1])->node_name+"   CONDITION";
    (yyval)->child.push_back((yyvsp[-1]));
  }
#line 2033 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 405 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   FOR";
    (yyval)->child.clear();
    (yyvsp[-6])->node_name=(yyvsp[-6])->node_name+"   START";
    (yyval)->child.push_back((yyvsp[-6]));
    (yyvsp[-4])->node_name=(yyvsp[-4])->node_name+"   CONDITION";
    (yyval)->child.push_back((yyvsp[-4]));
    (yyvsp[-2])->node_name=(yyvsp[-2])->node_name+"   ITERATOR";
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2051 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 420 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2057 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 422 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   EMPTY";
  }
#line 2067 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 428 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
  }
#line 2075 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 434 "parser.y" /* yacc.c:1646  */
    {
    cout<<(yyvsp[-1])->child.size();
    (yyval)=new Node();
		(yyval)->node_name="STMT   DECLARE";
		(yyval)->type=1;
    node=new Node();
    node->type=1;
    node->node_name="ARGS_LIST";
		(yyval)->child.push_back((yyvsp[-2]));
		node->child.push_back((yyvsp[-1]));
    string tp=(yyvsp[-2])->type_name;
    var_info* vi=get((yyvsp[-1])->child[0]->var_name);
    if(vi!=NULL){
    vi->type=tp;
    var_list[(yyvsp[-1])->child[0]->var_name]=vi;
    (yyvsp[-1])->child[0]->type_name=tp;
    if((yyvsp[-1])->child.size()==2){
    vi=get((yyvsp[-1])->child[0]->var_name);
    vi->val=(yyvsp[-1])->child[1]->value;
    var_list[(yyvsp[-1])->child[0]->var_name]=vi;
    }
    else{
      cout<<(yyvsp[-1])->child.size();
       vi=get((yyvsp[-1])->child[0]->var_name);
    vi->val="";
    var_list[(yyvsp[-1])->child[0]->var_name]=vi;
    }
    }
    for(int i=0;i<(yyvsp[0])->child.size();i++){
      node->child.push_back((yyvsp[0])->child[i]);
      vi=get((yyvsp[0])->child[i]->child[0]->var_name);
      if(vi!=NULL){
      vi->type=tp;
      var_list[(yyvsp[0])->child[i]->child[0]->var_name]=vi;
      (yyvsp[0])->child[i]->child[0]->type_name=tp;
      if((yyvsp[0])->child[i]->child.size()==2){
      vi=get((yyvsp[0])->child[i]->child[0]->var_name);
      vi->val=(yyvsp[0])->child[i]->child[1]->value;
      var_list[(yyvsp[0])->child[i]->child[0]->var_name]=vi;
      (yyvsp[0])->child[i]->child[0]->value=(yyvsp[0])->child[i]->child[1]->value;
      }
      else{
         vi=get((yyvsp[0])->child[i]->child[0]->var_name);
      vi->val="";
      var_list[(yyvsp[0])->child[i]->child[0]->var_name]=vi;
      }
      }
    }
    (yyval)->child.push_back(node);
  }
#line 2130 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 485 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="STMT   DECLARE";
		(yyval)->type=1;
    node=new Node();
    node->type=1;
    node->node_name="ARGS_LIST";
		(yyval)->child.push_back((yyvsp[-1]));
		node->child.push_back((yyvsp[0]));
    (yyval)->child.push_back(node);
    var_info* vi=get((yyvsp[0])->child[0]->var_name);
    if(vi!=NULL){
    vi->type=(yyvsp[-1])->type_name;
    var_list[(yyvsp[0])->child[0]->var_name]=vi;
    }
    (yyvsp[0])->child[0]->type_name=(yyvsp[-1])->type_name;
    if((yyvsp[0])->child.size()==2){
    vi=get((yyvsp[0])->child[0]->var_name);
    if(vi!=NULL){
    vi->val=(yyvsp[0])->child[1]->value;
    var_list[(yyvsp[0])->child[0]->var_name]=vi;
    (yyvsp[0])->child[0]->value=(yyvsp[0])->child[1]->value;
    }
    }
  }
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 513 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="EXPR   DECLARE_ASSIGN";
		(yyval)->type=2; 
		(yyval)->child.push_back((yyvsp[-2]));
		(yyval)->child.push_back((yyvsp[0]));
   
  }
#line 2173 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 522 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="EXPR   DECLARE_VAR";
		(yyval)->type=2;
		(yyval)->child.push_back((yyvsp[-3]));
    (yyval)->child.push_back((yyvsp[0]));
    var_info *vi=get((yyvsp[-3])->var_name);
    var_list.insert(make_pair((yyvsp[-3])->var_name,new var_info()));
  }
#line 2187 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 532 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="EXPR   DECLARE_VAR";
		(yyval)->type=2;
		(yyval)->child.push_back((yyvsp[-5]));
    (yyval)->child.push_back((yyvsp[-1]));
    var_info *vi=get((yyvsp[-5])->var_name);
    var_list.insert(make_pair((yyvsp[-5])->var_name,new var_info()));
  }
#line 2201 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 542 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="EXPR   DECLARE_VAR";
		(yyval)->type=2;
		(yyval)->child.push_back((yyvsp[0]));
    var_info *vi=get((yyvsp[0])->var_name);
    var_list.insert(make_pair((yyvsp[0])->var_name,new var_info()));
  }
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 551 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
		(yyval)->node_name="EXPR   DECLARE_ARRAY";
		(yyval)->type=2;
		(yyval)->child.push_back((yyvsp[-1]));
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2226 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 561 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
  }
#line 2234 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 567 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->node_name="DECLARE_LIST";
		(yyval)->type=1;
		(yyval)->child.push_back((yyvsp[0]));
  }
#line 2245 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 574 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->node_name="DECLARE_LIST";
		(yyval)->type=1;
		(yyval)->child.push_back((yyvsp[-1]));
    for(int i=0;i<(yyvsp[0])->child.size();i++){
      (yyval)->child.push_back((yyvsp[0])->child[i]);
    }
  }
#line 2259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 586 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="STMT   ASSIGN";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    if((yyvsp[-2])->type_name=="expr_list"&&(yyvsp[0])->type_name=="expr_list"){
     
    }
    else if((yyvsp[-2])->type_name=="expr_list"&&(yyvsp[0])->type_name=="expr_list"){
    }
    else{
    var_info * vi=get((yyvsp[-2])->var_name);
    if(vi!=NULL){
    (yyvsp[-2])->value=(yyvsp[0])->value;
    vi->val=(yyvsp[0])->value;
    var_list[(yyvsp[-2])->var_name]=vi;
    (yyval)->value=(yyvsp[0])->value;
    }
    }
  }
#line 2286 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 612 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=4;
    (yyval)->var_name=yylval->var_name;
    var_info * vi=get((yyval)->var_name);
    if(vi==NULL){
      yyerror("no declartion");
    }
    (yyval)->type_name=vi->type;
    (yyval)->node_name="VAR";
    (yyval)->value=vi->val;
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2305 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 627 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);
  }
#line 2313 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 630 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
  }
#line 2321 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 636 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=4;
    (yyval)->var_name=yylval->var_name;
    (yyval)->value="";
    var_info *vi=get((yyval)->var_name);
    var_list.insert(make_pair((yyval)->var_name,new var_info()));
    (yyval)->node_name="VAR";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2337 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 648 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);
  }
#line 2345 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 663 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   LIST";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->type_name="expr_list";
    for(int i=0;i<(yyvsp[0])->child.size();i++){
      (yyval)->child.push_back((yyvsp[0])->child[i]);
    }
  }
#line 2361 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 675 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
  }
#line 2369 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 682 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
  }
#line 2377 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 687 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);
  }
#line 2385 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 691 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);
  }
#line 2393 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 695 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   NOT";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
    if((yyvsp[0])->type_name=="int"||(yyvsp[0])->type_name=="char"||(yyvsp[0])->type_name=="double"||(yyvsp[0])->type_name=="float")
    {if((yyvsp[0])->value=="0")
      (yyval)->value="1";
    else
      (yyval)->value="0";
    }
    else{
      yyerror("error at not expr!");
    }
  }
#line 2415 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 713 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   BITNOT";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
    (yyval)->type_name="int";
    if((yyvsp[0])->type_name=="int"||(yyvsp[0])->type_name=="char"){
      (yyval)->value=tostr(~sti((yyvsp[0])->value));
    }
    else{
      yyerror("type error");
    }
  }
#line 2434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 728 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   MUL";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),7);
    //$$->type_name=res;
    if(res=="int"||res=="char"){
      (yyval)->value=tostr(sti((yyvsp[-2])->value)*sti((yyvsp[0])->value));
      (yyval)->type_name="int";
    }
    else if(res=="double"||res=="float"){
      (yyval)->value=tostr(stf((yyvsp[-2])->value)*stf((yyvsp[0])->value));
      (yyval)->type_name="char";
    }
    else{
      yyerror("error at MUL operation!");
    }

  }
#line 2461 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 751 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   DIV";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),8);
     if(res=="int"||res=="char"){
      (yyval)->value=tostr(sti((yyvsp[-2])->value)/sti((yyvsp[0])->value));
      (yyval)->type_name="int";
    }
    else if(res=="double"||res=="float"){
      (yyval)->value=tostr(stf((yyvsp[-2])->value)/stf((yyvsp[0])->value));
      (yyval)->type_name="double";
    }
    else{
      yyerror("error at DIV operation!");
    }

  }
#line 2487 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 773 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   ADD";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),5);
     if(res=="int"||res=="char"){
      (yyval)->value=tostr(sti((yyvsp[-2])->value)+sti((yyvsp[0])->value));
      (yyval)->type_name="int";
    }
    else if(res=="double"||res=="float"){
      (yyval)->value=tostr(stf((yyvsp[-2])->value)+stf((yyvsp[0])->value));
      (yyval)->type_name="double";
    }
    else{
     //yyerror("error");
      yyerror("error at PLUS operation!");
    }

  }
#line 2514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 796 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   MINUS";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),6);
     if(res=="int"||res=="char"){
      (yyval)->value=tostr(sti((yyvsp[-2])->value)-sti((yyvsp[0])->value));
      (yyval)->type_name="int";
    }
    else if(res=="double"||res=="float"){
      (yyval)->value=tostr(stf((yyvsp[-2])->value)-stf((yyvsp[0])->value));
      (yyval)->type_name="double";
    }
    else{
     yyerror("error at MINUS operation!");
    }

  }
#line 2540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 818 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   MOD";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    (yyval)->type_name="int";
    string res=deal((yyvsp[-2]),(yyvsp[0]),9);
    if(res!="error"){
      (yyval)->value=tostr(sti((yyvsp[-2])->value)%sti((yyvsp[0])->value));
    }
    else{
      yyerror("Type  error!");
    }
  }
#line 2561 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 835 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   RSHIFT";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    (yyval)->type_name="int";
    string res=deal((yyvsp[-2]),(yyvsp[0]),1);
    if(res=="error"){
      yyerror("type error!");
    }
    else{
       (yyval)->value=tostr(sti((yyvsp[-2])->value)>>sti((yyvsp[0])->value));
    }
  }
#line 2582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 852 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   LSHIFT";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    (yyval)->type_name="int";
    string res=deal((yyvsp[-2]),(yyvsp[0]),2);
    if(res=="error"){
   yyerror("type error");
    //$$->value=tostr(sti($1->value)<<sti($3->value));
    }
    else{
       (yyval)->value=tostr(sti((yyvsp[-2])->value)<<sti((yyvsp[0])->value));
    }
  }
#line 2604 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 870 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   CMP_RE";
    (yyval)->type_name="int";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),11);
    if(res=="error"){
    yyerror("error!");
    }
    if(stf((yyvsp[-2])->value)>=stf((yyvsp[0])->value)){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }

  }
#line 2629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 891 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   CMP_RT";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),11);
    if(res=="error"){
      yyerror("error");
    }
    if(stf((yyvsp[-2])->value)>stf((yyvsp[0])->value)){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 911 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   CMP_LE";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),11);
    if(res=="error"){
    yyerror("error!");
    }
    if(stf((yyvsp[-2])->value)<=stf((yyvsp[0])->value)){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 931 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   CMP_LT";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),11);
    if(res=="error"){
     yyerror("error");
    }
    if(stf((yyvsp[-2])->value)<stf((yyvsp[0])->value)){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 951 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   CMP_NE";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),12);
    if(res=="error"){
     yyerror("error");
    }
    if(stf((yyvsp[-2])->value)!=stf((yyvsp[0])->value)){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 971 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   CMP_EQ";
    (yyval)->type_name="int";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),13);
    if(res=="error"){
      yyerror("wrong");
    }
    if(stf((yyvsp[-2])->value)==stf((yyvsp[0])->value)){
       (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 991 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   AND";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),14);
    if(res=="error"){
      yyerror("error");
    }
    if(stf((yyvsp[-2])->value)!=0&&stf((yyvsp[0])->value)!=0){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1011 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   BITAND";
    (yyval)->child.clear();
    (yyval)->type_name="int";
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),3);
    if(res=="error"){
    yyerror("type error");
    }
    (yyval)->value=tostr(sti((yyvsp[-2])->value)&sti((yyvsp[0])->value));
  }
#line 2792 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1026 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name="int";
    (yyval)->node_name="EXPR   OR";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),16);
    if(res=="error"){
     yyerror("type error");
    }
    if(stf((yyvsp[-2])->value)!=0||stf((yyvsp[0])->value)!=0){
      (yyval)->value="1";
    }
    else{
      (yyval)->value="0";
    }
  }
#line 2816 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1046 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   BITOR";
    (yyval)->child.clear();
    (yyval)->type_name="int";
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),4);
    if(res=="error"){
    yyerror("error");
    }
    (yyval)->value=tostr(sti((yyvsp[-2])->value)|sti((yyvsp[0])->value));
  }
#line 2835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1061 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   XOR";
    (yyval)->child.clear();
    (yyval)->type_name="int";
    (yyval)->child.push_back((yyvsp[-2]));
    (yyval)->child.push_back((yyvsp[0]));
    string res=deal((yyvsp[-2]),(yyvsp[0]),10);
    if(res=="error"){
      yyerror("type error");
    }
    (yyval)->value=tostr(sti((yyvsp[-2])->value)^sti((yyvsp[0])->value));
  }
#line 2854 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1076 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    if((yyvsp[-1])->node_name=="EXPR  expr TPLUS"||(yyvsp[-1])->node_name=="EXPR  expr TMINUS")
    yyerror("TPLUS TPLUS... is not allowed!");
    (yyval)->node_name="EXPR  expr TPLUS";
    //$$->type_name=$1->type_name;
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[-1]));
    (yyval)->value=(yyvsp[-1])->value;
    if((yyvsp[-1])->type_name=="int"||(yyvsp[-1])->type_name=="char"){
    (yyvsp[-1])->value=tostr(sti((yyvsp[-1])->value)+1);
    (yyval)->type_name="int";
    }
    else if((yyvsp[-1])->type_name=="float"||(yyvsp[-1])->type_name=="double"){
    (yyvsp[-1])->value=tostr(stf((yyvsp[-1])->value)+1);
    (yyval)->type_name="double";
    }
    else{
  yyerror("error at tplus operation");
    }
  }
#line 2881 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1099 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
   // $$->type_name=$2->type_name;
    (yyval)->node_name="EXPR   MINUS expr";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
    if((yyval)->type_name=="int"||(yyval)->type_name=="char"){
    (yyval)->value="-"+tostr(sti((yyvsp[0])->value));
    (yyval)->type_name="int";
    }else if((yyval)->type_name=="float"||(yyval)->type_name=="double"){
    (yyval)->value="-"+tostr(stf((yyvsp[0])->value));
    (yyval)->type_name="double";
    }
  else{
  yyerror("error at minus operation;");
  }
  }
#line 2904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1118 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->type_name=(yyvsp[0])->type_name;
    (yyval)->node_name="EXPR   PLUS expr";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
    if((yyval)->type_name=="int"||(yyval)->type_name=="char"||(yyval)->type_name=="float"||(yyval)->type_name=="double"){
    (yyval)->value=(yyvsp[0])->value;
  }else{
yyerror("error at plus operation");
  }
  }
#line 2922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1132 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR  expr TMINUS";
    if((yyvsp[-1])->node_name=="EXPR  expr TPLUS"||(yyvsp[-1])->node_name=="EXPR  expr TMINUS")
    yyerror("TMINUS TMINUS ...is not allowed!");
    (yyval)->child.clear();
    //$$->type_name=$1->type_name;
    (yyval)->child.push_back((yyvsp[-1]));
    (yyval)->value=(yyvsp[-1])->value;
    if((yyvsp[-1])->type_name=="int"||(yyvsp[-1])->type_name=="char"){
    (yyvsp[-1])->value=tostr(sti((yyvsp[-1])->value)-1);
    (yyval)->type_name="int";
    }
    else if((yyvsp[-1])->type_name=="float"||(yyvsp[-1])->type_name=="double"){
    (yyvsp[-1])->value=tostr(stf((yyvsp[-1])->value)-1);
    (yyval)->type_name="double";
    }
    else{
      yyerror("error");
    }
  }
#line 2949 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1155 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[0]);
  }
#line 2957 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1161 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=4;
    (yyval)->var_name=yylval->var_name;
    var_info * vi=get((yyval)->var_name);
    if(vi==NULL){
      yyerror("error!");
    }
    (yyval)->type_name=vi->type;
    (yyval)->node_name="VAR";
    (yyval)->value=vi->val;
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1176 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=3;
    (yyval)->type_name="double";
    (yyval)->value=tostr(yylval->val_double);
    (yyval)->val_double=yylval->val_double;
    (yyval)->node_name="VAL";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 2991 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1187 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=3;
    (yyval)->type_name="char";
    (yyval)->char_value=yylval->char_value;
    (yyval)->node_name="VAL";
    (yyval)->value=yylval->char_value;
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 3006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1198 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=3;
    (yyval)->type_name="int";
    (yyval)->value=tostr(yylval->val_value);
    (yyval)->val_value=yylval->val_value;
    (yyval)->node_name="VAL";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 3021 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1209 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   TPLUS expr";
   // $$->type_name=$2->type_name;
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
    if((yyvsp[-1])->type_name=="int"||(yyvsp[-1])->type_name=="char"){
    (yyvsp[-1])->value=tostr(sti((yyvsp[-1])->value)+1);
    (yyval)->type_name="int";
    }
    else if((yyvsp[-1])->type_name=="float"||(yyvsp[-1])->type_name=="double"){
    (yyvsp[-1])->value=tostr(stf((yyvsp[-1])->value)+1);
    (yyval)->type_name="double";
    }
    else{
  
    }
    (yyval)->value=(yyvsp[-1])->value;
  }
#line 3046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1230 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=2;
    (yyval)->node_name="EXPR   TMINUS expr";
    (yyval)->child.clear();
  //  $$->type_name=$2->type_name;
    (yyval)->child.push_back((yyvsp[0]));
    if((yyvsp[-1])->type_name=="int"||(yyvsp[-1])->type_name=="char"){
    (yyvsp[-1])->value=tostr(sti((yyvsp[-1])->value)-1);
    (yyval)->type_name="int";
    }
    else if((yyvsp[-1])->type_name=="float"||(yyvsp[-1])->type_name=="double"){
    (yyvsp[-1])->value=tostr(stf((yyvsp[-1])->value)-1);
    (yyval)->type_name="double";
    }
    else{
   
    }
    (yyval)->value=(yyvsp[-1])->value;
  }
#line 3071 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1254 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="JUMP_STMT   CONTINUE";
    (yyval)->child.clear();
  }
#line 3082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1261 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="JUMP_STMT   BREAK";
    (yyval)->child.clear();
  }
#line 3093 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1268 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="JUMP_STMT   RETURN";
    (yyval)->child.clear();
  }
#line 3104 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1275 "parser.y" /* yacc.c:1646  */
    {
    (yyval)=new Node();
    (yyval)->type=1;
    (yyval)->node_name="JUMP_STMT   RERURN expr";
    (yyval)->child.clear();
    (yyval)->child.push_back((yyvsp[0]));
  }
#line 3116 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3120 "parser.cpp" /* yacc.c:1646  */
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
#line 1284 "parser.y" /* yacc.c:1906  */

string deal(Node* arg1,Node* arg2,int oparg){
  if(oparg==1||oparg==2||oparg==9||oparg==10||oparg==3||oparg==4){
    if((arg1->type_name=="int"||arg1->type_name=="char")&&(arg2->type_name=="int"||arg2->type_name=="char")){
      return "int";
    }
    return "error";
  }
  else if(oparg==5||oparg==6||oparg==7||oparg==8){
    if((arg1->type_name=="int"&&arg2->type_name=="int")||(arg1->type_name=="int"&&arg2->type_name=="char")||(arg1->type_name=="char"&&arg2->type_name=="int")){
      return "int";
    }
    else if(arg1->type_name=="char"&&arg2->type_name=="char"){
      return "char";
    }
    else if(arg1->type_name=="double"||arg2->type_name=="double"){
      return "double";
    }
    else if(arg1->type_name=="float"||arg2->type_name=="float"){
      return "float";
    }
    else{
      return"error";
    }
  }
  else if(oparg==11||oparg==12||oparg==13||oparg==14||oparg==15||oparg==16||oparg==17||oparg==18){
    if((arg1->type_name!="int"&&arg1->type_name!="char"&&arg1->type_name!="float"&&arg1->type_name!="double")||(arg2->type_name!="int"&&arg2->type_name!="char"&&arg2->type_name!="float"&&arg2->type_name!="double")){
      return "error";
    }
    else{
      return "int";
    }
  }
    else{
      return "error";
    }
}
int  sti(string s){
  int a=atoi(s.c_str());
  return a;
}
double stf(string s){
  double b=atof(s.c_str());
  return b;
}
var_info* get(string s){
    map<string,var_info*>::iterator itor;
    itor=var_list.find(s);
    if(itor==var_list.end())
        return NULL;
    else
        return itor->second;
}
void dfs(Node* node,int depth)
{
		printNode(node,depth);
		for (int i=0;i<node->child.size();i++)
		{
			dfs(node->child[i],depth+1);
		}
}
string tostr(int a){
  ostringstream os;
  os<<a;
  return os.str();
}
string tostr(double b){
  ostringstream os;
  os<<b;
  return os.str();
}
void printNode(Node* node,int indent){
  for(int i=1;i<=(indent-1)*3;i++){
      cout<<" ";
    }
  if(node->type==3){
    cout<<"Val   ";
    if(node->type_name=="int"){
      cout<<node->type_name<<"   "<<node->value;
    }
    else if(node->type_name=="char"){
      cout<<node->type_name<<"   "<<node->value;
    }
    else if(node->type_name=="double"){
      cout<<node->type_name<<"   "<<node->value;
    }
    else if(node->type_name=="float"){
      cout<<node->type_name<<"   "<<node->value;
    }
  }
  else if(node->type==4){
   cout<<"Var   "<<node->var_name<<"    ";
   if(node->type_name=="int"){
     cout<<node->type_name<<"   "<<node->value;
   }
   else  if(node->type_name=="char"){
     cout<<node->type_name<<"   "<<node->value;
   }
   else  if(node->type_name=="double"||node->type_name=="float"){
     cout<<node->type_name<<"   "<<node->value;
   }
   else{
     cout<<node->type_name;
   }
  }
  else if(node->type==5){
  }
  else{
    cout<<node->node_name<<"     "<<node->value<<endl;
  }
}
