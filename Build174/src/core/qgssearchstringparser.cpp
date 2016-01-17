
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
#line 20 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"

#include <qglobal.h>
#include <QList>
#include <cstdlib>
#include "qgssearchtreenode.h"

#ifdef _MSC_VER
#  pragma warning( disable: 4065 )  // switch statement contains 'default' but no 'case' labels
#  pragma warning( disable: 4702 )  // unreachable code
#endif

// don't redeclare malloc/free
#define YYINCLUDED_STDLIB_H 1

/** returns parsed tree, otherwise returns NULL and sets parserErrorMsg
    (interface function to be called from QgsSearchString) 
  */
QgsSearchTreeNode* parseSearchString(const QString& str, QString& parserErrorMsg);


//! from lex.yy.c
extern int yylex();
extern char* yytext;
extern void set_input_buffer(const char* buffer);

//! varible where the parser error will be stored
QString gParserErrorMsg;

//! sets gParserErrorMsg
void yyerror(const char* msg);

//! temporary list for nodes without parent (if parsing fails these nodes are removed)
QList<QgsSearchTreeNode*> gTmpNodes;
void joinTmpNodes(QgsSearchTreeNode* parent, QgsSearchTreeNode* left, QgsSearchTreeNode* right);
void addToTmpNodes(QgsSearchTreeNode* node);

// we want verbose error messages
#define YYERROR_VERBOSE 1



/* Line 189 of yacc.c  */
#line 115 "E:\\QGIS\\Build174\\src\\core\\qgssearchstringparser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     NUMBER = 258,
     COMPARISON = 259,
     FUNCTION1 = 260,
     FUNCTION2 = 261,
     FUNCTION3 = 262,
     CONCAT = 263,
     IS = 264,
     IN = 265,
     ROWNUM = 266,
     AREA = 267,
     PERIMETER = 268,
     LENGTH = 269,
     X = 270,
     Y = 271,
     ID = 272,
     NULLVALUE = 273,
     STRING = 274,
     COLUMN_REF = 275,
     Unknown_CHARACTER = 276,
     NOT = 277,
     AND = 278,
     OR = 279,
     UMINUS = 280
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 61 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
 QgsSearchTreeNode* node; double number; QgsSearchTreeNode::Operator op;


/* Line 214 of yacc.c  */
#line 180 "E:\\QGIS\\Build174\\src\\core\\qgssearchstringparser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "E:\\QGIS\\Build174\\src\\core\\qgssearchstringparser.cpp"

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNRULES -- Number of states.  */
#define YYNSTATES  86

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    34,     2,     2,
      31,    32,    27,    25,    33,    26,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    29,     2,     2,     2,     2,     2,
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
      30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    15,    18,    22,    24,
      26,    32,    39,    43,    48,    52,    56,    58,    63,    70,
      79,    83,    87,    91,    95,    99,   103,   107,   110,   113,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    -1,    41,    -1,    37,    24,    37,
      -1,    37,    23,    37,    -1,    22,    37,    -1,    31,    37,
      32,    -1,    38,    -1,    39,    -1,    41,    10,    31,    40,
      32,    -1,    41,    22,    10,    31,    40,    32,    -1,    41,
       9,    18,    -1,    41,     9,    22,    18,    -1,    41,     4,
      41,    -1,    40,    33,    41,    -1,    41,    -1,     5,    31,
      41,    32,    -1,     6,    31,    41,    33,    41,    32,    -1,
       7,    31,    41,    33,    41,    33,    41,    32,    -1,    41,
      29,    41,    -1,    41,    27,    41,    -1,    41,    34,    41,
      -1,    41,    28,    41,    -1,    41,    25,    41,    -1,    41,
      26,    41,    -1,    31,    41,    32,    -1,    25,    41,    -1,
      26,    41,    -1,    41,     8,    41,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,     3,    -1,    19,    -1,    18,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   123,   123,   124,   128,   129,   130,   131,   132,   137,
     138,   139,   143,   144,   145,   149,   150,   159,   160,   161,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "COMPARISON", "FUNCTION1",
  "FUNCTION2", "FUNCTION3", "CONCAT", "IS", "IN", "ROWNUM", "AREA",
  "PERIMETER", "LENGTH", "X", "Y", "ID", "NULLVALUE", "STRING",
  "COLUMN_REF", "Unknown_CHARACTER", "NOT", "AND", "OR", "'+'", "'-'",
  "'*'", "'/'", "'^'", "UMINUS", "'('", "')'", "','", "'%'", "$accept",
  "root", "search_cond", "predicate", "comp_predicate", "scalar_exp_list",
  "scalar_exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    43,    45,    42,    47,    94,
     280,    40,    41,    44,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    37,    38,
      38,    38,    39,    39,    39,    40,    40,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     2,     3,     1,     1,
       5,     6,     3,     4,     3,     3,     1,     4,     6,     8,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    37,     0,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    39,    38,    40,     0,     0,     0,     0,     0,
       2,     8,     9,     3,     0,     0,     0,     6,     0,     0,
      27,    28,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,    26,     5,     4,    14,    29,    12,     0,
       0,     0,    24,    25,    21,    23,    20,    22,    17,     0,
       0,    13,     0,    16,     0,     0,     0,    10,     0,     0,
      18,     0,    15,    11,     0,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    72,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int16 yypact[] =
{
      87,   -31,   -30,   -23,    21,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,    87,   114,   114,    87,    50,
     -13,   -31,   -31,     5,   114,   114,   114,   -31,     5,   114,
      24,    24,    17,    57,   -31,    87,    87,   114,   114,    41,
      33,    58,   114,   114,   114,   114,   114,   114,   127,   138,
     149,   160,   -31,   -31,   -31,    54,    -6,   -22,   -31,    55,
     114,    49,    28,    28,    19,    19,    24,    -6,   -31,   114,
     114,   -31,     3,    -6,   114,   171,   182,   -31,   114,    43,
     -31,   114,    -6,   -31,   193,   -31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,    36,   -31,   -31,    13,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,    24,    38,    42,    43,    44,    45,    46,    25,    37,
      35,    36,    47,    38,    39,    40,    30,    31,    33,    42,
      43,    44,    45,    46,    48,    49,    50,    41,    47,    51,
      42,    43,    44,    45,    46,    77,    78,    56,    57,    47,
      35,    36,    62,    63,    64,    65,    66,    67,    46,    52,
      34,    27,    26,    47,    32,    44,    45,    46,    47,    58,
      73,    37,    47,    59,    60,    38,    39,    40,    61,    75,
      76,    54,    55,    71,    73,    83,    78,    35,    82,    41,
      74,    84,    42,    43,    44,    45,    46,    79,     0,    53,
       1,    47,     2,     3,     4,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    15,
       0,     0,    16,    17,     0,     0,     0,     1,    18,     2,
       3,     4,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    38,     0,     0,     0,    16,
      17,     0,     0,     0,     0,    29,    38,     0,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    38,     0,    68,
       0,    47,     0,    42,    43,    44,    45,    46,    38,     0,
       0,    69,    47,     0,    42,    43,    44,    45,    46,    38,
       0,     0,    70,    47,     0,    42,    43,    44,    45,    46,
      38,     0,    53,     0,    47,     0,    42,    43,    44,    45,
      46,    38,     0,    80,     0,    47,     0,    42,    43,    44,
      45,    46,     0,     0,     0,    81,    47,     0,    42,    43,
      44,    45,    46,     0,     0,    85,     0,    47
};

static const yytype_int8 yycheck[] =
{
       0,    31,     8,    25,    26,    27,    28,    29,    31,     4,
      23,    24,    34,     8,     9,    10,    16,    17,    18,    25,
      26,    27,    28,    29,    24,    25,    26,    22,    34,    29,
      25,    26,    27,    28,    29,    32,    33,    37,    38,    34,
      23,    24,    42,    43,    44,    45,    46,    47,    29,    32,
       0,    15,    31,    34,    18,    27,    28,    29,    34,    18,
      60,     4,    34,    22,    31,     8,     9,    10,    10,    69,
      70,    35,    36,    18,    74,    32,    33,    23,    78,    22,
      31,    81,    25,    26,    27,    28,    29,    74,    -1,    32,
       3,    34,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,     3,    31,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     8,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,     8,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,     8,    -1,    32,
      -1,    34,    -1,    25,    26,    27,    28,    29,     8,    -1,
      -1,    33,    34,    -1,    25,    26,    27,    28,    29,     8,
      -1,    -1,    33,    34,    -1,    25,    26,    27,    28,    29,
       8,    -1,    32,    -1,    34,    -1,    25,    26,    27,    28,
      29,     8,    -1,    32,    -1,    34,    -1,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    34,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    25,    26,    31,    36,
      37,    38,    39,    41,    31,    31,    31,    37,    41,    31,
      41,    41,    37,    41,     0,    23,    24,     4,     8,     9,
      10,    22,    25,    26,    27,    28,    29,    34,    41,    41,
      41,    41,    32,    32,    37,    37,    41,    41,    18,    22,
      31,    10,    41,    41,    41,    41,    41,    41,    32,    33,
      33,    18,    40,    41,    31,    41,    41,    32,    33,    40,
      32,    33,    41,    32,    41,    32
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
#line 123 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { /*gParserRootNode = $1;*/ ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 124 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 128 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opOR,  (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 129 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 130 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opNOT, (yyvsp[(2) - (2)].node),  0); joinTmpNodes((yyval.node),(yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 131 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 138 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opIN, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (5)].node),(yyvsp[(4) - (5)].node)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 139 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opNOTIN, (yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (6)].node),(yyvsp[(5) - (6)].node)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 143 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opISNULL, (yyvsp[(1) - (3)].node), 0); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),0); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 144 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opISNOTNULL, (yyvsp[(1) - (4)].node), 0); joinTmpNodes((yyval.node),(yyvsp[(1) - (4)].node),0); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 145 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode((yyvsp[(2) - (3)].op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 149 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = (yyvsp[(1) - (3)].node); (yyvsp[(1) - (3)].node)->append((yyvsp[(3) - (3)].node)); joinTmpNodes((yyvsp[(1) - (3)].node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 151 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    {
        (yyval.node) = new QgsSearchTreeNode( QgsSearchTreeNode::tNodeList );
        (yyval.node)->append((yyvsp[(1) - (1)].node));
        joinTmpNodes((yyval.node),(yyvsp[(1) - (1)].node),0);
      ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 159 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode((yyvsp[(1) - (4)].op), (yyvsp[(3) - (4)].node), 0); joinTmpNodes((yyval.node), (yyvsp[(3) - (4)].node), 0); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 160 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode((yyvsp[(1) - (6)].op), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node)); joinTmpNodes((yyval.node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 162 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    {
        QgsSearchTreeNode *args = new QgsSearchTreeNode( QgsSearchTreeNode::tNodeList );
	args->append((yyvsp[(3) - (8)].node));
	args->append((yyvsp[(5) - (8)].node));
	args->append((yyvsp[(7) - (8)].node));

	(yyval.node) = new QgsSearchTreeNode((yyvsp[(1) - (8)].op), args, 0);
        joinTmpNodes((yyval.node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].node));
        joinTmpNodes((yyval.node), (yyval.node), (yyvsp[(7) - (8)].node));
      ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 172 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opPOW,  (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 173 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opMUL,  (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 174 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opMOD,  (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 175 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opDIV,  (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 176 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opPLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 177 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opMINUS,(yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node),(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 178 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 179 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 180 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = (yyvsp[(2) - (2)].node); if ((yyval.node)->type() == QgsSearchTreeNode::tNumber) (yyval.node)->setNumber(- (yyval.node)->number()); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 181 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opCONCAT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); joinTmpNodes((yyval.node), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 182 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opROWNUM, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 183 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opAREA, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 184 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opPERIMETER, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 185 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opLENGTH, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 186 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opX, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 187 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opY, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 188 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QgsSearchTreeNode::opID, 0, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 189 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode((yyvsp[(1) - (1)].number)); addToTmpNodes((yyval.node)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 190 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QString::fromUtf8(yytext), 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 191 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QString::null, 0); addToTmpNodes((yyval.node)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 192 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"
    { (yyval.node) = new QgsSearchTreeNode(QString::fromUtf8(yytext), 1); addToTmpNodes((yyval.node)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1749 "E:\\QGIS\\Build174\\src\\core\\qgssearchstringparser.cpp"
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
#line 195 "E:\\QGIS\\qgis-1.7.4\\src\\core\\qgssearchstringparser.yy"


void addToTmpNodes(QgsSearchTreeNode* node)
{
  gTmpNodes.append(node);
}


void joinTmpNodes(QgsSearchTreeNode* parent, QgsSearchTreeNode* left, QgsSearchTreeNode* right)
{
  bool res;

  if (left)
  {
    res = gTmpNodes.removeAll(left);
    Q_ASSERT(res);
  }

  if (right)
  {
    res = gTmpNodes.removeAll(right);
    Q_ASSERT(res);
  }

  gTmpNodes.append(parent);
}

// returns parsed tree, otherwise returns NULL and sets parserErrorMsg
QgsSearchTreeNode* parseSearchString(const QString& str, QString& parserErrorMsg)
{
  // list should be empty when starting
  Q_ASSERT(gTmpNodes.count() == 0);

  set_input_buffer(str.toUtf8().constData());
  int res = yyparse();
 
  // list should be empty when parsing was OK
  if (res == 0) // success?
  {
    Q_ASSERT(gTmpNodes.count() == 1);
    return gTmpNodes.takeFirst();
  }
  else // error?
  {
    parserErrorMsg = gParserErrorMsg;
    // remove nodes without parents - to prevent memory leaks
    while (gTmpNodes.size() > 0)
      delete gTmpNodes.takeFirst();
    return NULL;
  }
}


void yyerror(const char* msg)
{
  gParserErrorMsg = msg;
}



