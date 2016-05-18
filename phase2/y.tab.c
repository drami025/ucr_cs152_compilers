/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     BEGIN_PROGRAM = 259,
     END_PROGRAM = 260,
     INTEGER = 261,
     ARRAY = 262,
     OF = 263,
     IF = 264,
     THEN = 265,
     ENDIF = 266,
     ELSE = 267,
     WHILE = 268,
     DO = 269,
     BEGINLOOP = 270,
     ENDLOOP = 271,
     CONTINUE = 272,
     READ = 273,
     WRITE = 274,
     AND = 275,
     OR = 276,
     NOT = 277,
     TRUE = 278,
     FALSE = 279,
     SUB = 280,
     ADD = 281,
     MULT = 282,
     DIV = 283,
     MOD = 284,
     EQ = 285,
     NEQ = 286,
     LT = 287,
     GT = 288,
     LTE = 289,
     GTE = 290,
     SEMICOLON = 291,
     COLON = 292,
     COMMA = 293,
     L_PAREN = 294,
     R_PAREN = 295,
     ASSIGN = 296,
     IDENT = 297,
     NUMBER = 298
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define BEGIN_PROGRAM 259
#define END_PROGRAM 260
#define INTEGER 261
#define ARRAY 262
#define OF 263
#define IF 264
#define THEN 265
#define ENDIF 266
#define ELSE 267
#define WHILE 268
#define DO 269
#define BEGINLOOP 270
#define ENDLOOP 271
#define CONTINUE 272
#define READ 273
#define WRITE 274
#define AND 275
#define OR 276
#define NOT 277
#define TRUE 278
#define FALSE 279
#define SUB 280
#define ADD 281
#define MULT 282
#define DIV 283
#define MOD 284
#define EQ 285
#define NEQ 286
#define LT 287
#define GT 288
#define LTE 289
#define GTE 290
#define SEMICOLON 291
#define COLON 292
#define COMMA 293
#define L_PAREN 294
#define R_PAREN 295
#define ASSIGN 296
#define IDENT 297
#define NUMBER 298




/* Copy the first part of user declarations.  */
#line 2 "MINI_L.y"

	#include "y.tab.h"
	#include <stdio.h>
	#include <stdlib.h>
	void yyerror(const char *msg);
	extern int currentLine;
	extern int currentPosition;
	int prodId = 0;
	FILE *yyin;
	int numToken;
	char* identToken;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 205 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   111

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    14,    18,    20,    21,    27,
      31,    32,    38,    39,    43,    45,    46,    49,    50,    54,
      61,    67,    74,    77,    80,    82,    85,    88,    89,    92,
      95,    96,    99,   103,   105,   107,   111,   113,   114,   116,
     118,   120,   122,   124,   126,   130,   133,   134,   137,   138,
     143,   146,   147,   150,   151,   154,   155,   158,   160,   162,
     166,   169,   172,   173,   175,   180,   182,   184,   186,   188,
     190,   192,   194,   196,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     250,   252,   254,   256,   258,   260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    76,    78,    81,    46,    82,    -1,    -1,
      47,    77,    52,    -1,    49,    81,    48,    -1,    47,    -1,
      -1,    78,    50,    79,    51,   115,    -1,    80,    78,    50,
      -1,    -1,    83,    84,    85,    86,    87,    -1,    -1,    55,
      81,    53,    -1,    52,    -1,    -1,    91,    52,    -1,    -1,
      75,   116,    64,    -1,    88,    56,    89,    52,    54,    90,
      -1,    92,    56,    94,    52,    95,    -1,    93,    94,    52,
      95,    92,    56,    -1,    96,    73,    -1,    97,    73,    -1,
      98,    -1,    58,    57,    -1,   100,    56,    -1,    -1,    60,
      59,    -1,    99,    58,    -1,    -1,    62,    61,    -1,    64,
      63,    64,    -1,   102,    -1,   103,    -1,    84,    56,    86,
      -1,   101,    -1,    -1,   104,    -1,   105,    -1,   106,    -1,
     107,    -1,   108,    -1,   109,    -1,    67,    65,    66,    -1,
     110,    64,    -1,    -1,   111,    64,    -1,    -1,    71,    68,
      69,    70,    -1,   112,    67,    -1,    -1,   113,    67,    -1,
      -1,   114,    67,    -1,    -1,    66,    72,    -1,    75,    -1,
      85,    -1,    84,    64,    86,    -1,    75,    74,    -1,    80,
      73,    -1,    -1,    78,    -1,    78,    84,    64,    86,    -1,
       3,    -1,     4,    -1,    42,    -1,    37,    -1,    38,    -1,
      36,    -1,     5,    -1,     7,    -1,    39,    -1,    43,    -1,
      40,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      18,    -1,    19,    -1,    17,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    26,    -1,
      25,    -1,    27,    -1,    28,    -1,    29,    -1,     6,    -1,
      41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    37,    41,    44,    47,    48,    51,    54,
      55,    58,    59,    62,    65,    66,    69,    70,    73,    74,
      75,    76,    77,    78,    79,    83,    86,    87,    90,    93,
      94,    97,   100,   101,   102,   103,   106,   107,   111,   112,
     113,   114,   115,   116,   119,   122,   123,   126,   127,   130,
     133,   134,   137,   138,   141,   142,   145,   148,   149,   150,
     154,   157,   158,   162,   163,   169,   171,   173,   175,   177,
     179,   181,   183,   185,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     219,   221,   223,   225,   227,   229,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "BEGIN_PROGRAM",
  "END_PROGRAM", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE",
  "AND", "OR", "NOT", "TRUE", "FALSE", "SUB", "ADD", "MULT", "DIV", "MOD",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "ASSIGN", "IDENT", "NUMBER", "$accept", "start",
  "block", "declarations", "declarations2", "declaration", "declaration2",
  "array_block", "statements", "statements2", "if_else", "statement",
  "bool_exp", "or_exp", "relation_and_exp", "and_exp", "relation_exp",
  "relation_exp2", "not_exp", "comp", "exp", "add_exp", "sub_exp",
  "mult_exp", "mult_exp2", "div_exp", "mod_exp", "term", "term2", "vars",
  "vars2", "var", "program", "beginprogram", "identifier", "colon",
  "comma", "semicolon", "endprogram", "array", "l_paren", "number",
  "r_paren", "of", "If", "then", "endif", "Else", "While", "Do",
  "beginloop", "endloop", "read", "write", "Continue", "and", "or", "not",
  "True", "False", "equal", "not_equal", "less_than", "greater_than",
  "less_than_eq", "greater_than_eq", "add", "sub", "mult", "div", "mod",
  "integer", "assign", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    47,    48,    48,    49,    50,
      50,    51,    51,    52,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    57,    58,    59,
      59,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    64,    65,    65,    66,    66,    67,
      68,    68,    69,    69,    70,    70,    71,    72,    72,    72,
      73,    74,    74,    75,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     3,     3,     1,     0,     5,     3,
       0,     5,     0,     3,     1,     0,     2,     0,     3,     6,
       5,     6,     2,     2,     1,     2,     2,     0,     2,     2,
       0,     2,     3,     1,     1,     3,     1,     0,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     2,     0,     4,
       2,     0,     2,     0,     2,     0,     2,     1,     1,     3,
       2,     2,     0,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    65,     0,     0,     1,    67,     0,    70,     0,     0,
       0,     0,    10,    71,     2,    66,     0,     7,    69,     0,
       0,    77,    81,    82,    87,    85,    86,     4,     0,     0,
      63,    37,    37,     0,     0,     0,    24,     6,     5,    68,
      12,    10,    15,   105,    48,    73,    48,    90,     0,    27,
      30,    48,    36,     0,    83,     0,    22,    62,    23,    72,
       0,     0,     9,    14,    13,   100,    18,     0,    46,    51,
      48,     0,    78,     0,    89,    25,    37,    88,    28,    37,
      91,    92,    31,     0,    37,    33,    34,     0,     0,    60,
       0,   104,     8,     0,    74,    56,    57,    48,    58,    99,
      48,    48,   101,    53,    48,    47,    75,    64,    17,    26,
      29,    93,    94,    95,    96,    97,    98,    48,    38,    39,
      40,    41,    42,    43,     0,     0,    84,     0,    61,     0,
       0,    44,    45,   102,    55,    48,    50,    80,     0,     0,
      32,    35,    20,    37,     0,    59,   103,    49,    48,    52,
      79,    19,    16,    21,    76,    11,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    38,    11,    19,    60,    27,    64,
     138,    28,    48,    75,    49,    78,    50,    82,    51,   117,
      66,   100,    67,    68,   103,   134,   147,    69,    95,    56,
      89,    29,     3,    16,    30,    40,    20,     8,    14,    61,
      46,    98,   107,   155,    31,    73,   151,   139,    32,    33,
      55,   127,    34,    35,    36,    79,    76,    52,    85,    86,
     118,   119,   120,   121,   122,   123,   101,    70,   104,   135,
     148,    92,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int8 yypact[] =
{
      19,  -100,     9,   -13,  -100,  -100,    -2,  -100,   -13,    33,
      36,    -2,     4,  -100,  -100,  -100,    -1,   -13,  -100,    10,
     -13,  -100,  -100,  -100,  -100,  -100,  -100,  -100,    -2,     2,
      12,    32,    32,    40,   -13,   -13,  -100,  -100,  -100,  -100,
      49,     4,    -1,  -100,    42,  -100,    42,  -100,    48,    47,
      50,    -4,  -100,    40,  -100,    -1,  -100,     4,  -100,  -100,
      63,    12,  -100,  -100,  -100,  -100,  -100,     6,    45,    51,
      42,    34,  -100,    -1,  -100,  -100,    32,  -100,  -100,    32,
    -100,  -100,  -100,    31,    32,  -100,  -100,    -1,    56,  -100,
     -13,  -100,  -100,    37,  -100,  -100,  -100,    42,  -100,  -100,
      42,    42,  -100,    53,    42,  -100,  -100,  -100,    64,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,    42,  -100,  -100,
    -100,  -100,  -100,  -100,    34,    56,  -100,    62,  -100,    34,
      34,  -100,  -100,  -100,    54,    42,  -100,  -100,    66,    -1,
    -100,  -100,  -100,    32,    71,  -100,  -100,  -100,    42,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,  -100,    65,  -100,  -100,    43,  -100,   -41,  -100,
    -100,  -100,   -32,  -100,     8,  -100,  -100,  -100,  -100,  -100,
     -44,  -100,   -15,   -98,  -100,  -100,  -100,  -100,  -100,   -30,
    -100,   -31,  -100,  -100,     7,  -100,    29,     0,  -100,  -100,
     -28,    -5,   -99,  -100,  -100,  -100,  -100,  -100,   -38,  -100,
      38,   -35,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      53,    63,    71,    57,    57,    58,   136,    83,    21,     4,
       6,    17,    22,    23,    88,    12,    24,    25,    26,    80,
      81,    65,     1,    84,    12,   141,   105,    41,    42,     5,
     144,   145,   108,    93,     7,    45,    96,   149,    13,    97,
      15,     5,    18,    43,   109,    45,   125,    39,     5,    94,
     156,    45,   124,   130,    47,    54,    59,   132,    72,    57,
     128,   111,   112,   113,   114,   115,   116,    65,    74,    91,
      77,    99,   126,   140,   106,    22,   137,   150,   102,   154,
      94,   133,    37,   146,    62,   131,    90,   110,   129,   143,
     142,    87,     0,     0,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153
};

static const yytype_int16 yycheck[] =
{
      32,    42,    46,    34,    35,    35,   104,    51,     9,     0,
       3,    11,    13,    14,    55,     8,    17,    18,    19,    23,
      24,    25,     3,    51,    17,   124,    70,    20,    28,    42,
     129,   130,    73,    61,    36,    39,    67,   135,     5,    67,
       4,    42,    38,    41,    76,    39,    87,    37,    42,    43,
     148,    39,    84,    97,    22,    15,     7,   101,    10,    90,
      90,    30,    31,    32,    33,    34,    35,    25,    21,     6,
      20,    26,    16,   117,    40,    13,    12,    11,    27,     8,
      43,    28,    17,    29,    41,   100,    57,    79,    93,   127,
     125,    53,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,    76,     0,    42,    78,    36,    81,    46,
      47,    49,    78,     5,    82,     4,    77,    81,    38,    50,
      80,     9,    13,    14,    17,    18,    19,    52,    55,    75,
      78,    88,    92,    93,    96,    97,    98,    47,    48,    37,
      79,    78,    81,    41,   116,    39,    84,    22,    56,    58,
      60,    62,   101,    56,    15,    94,    73,    75,    73,     7,
      51,    83,    50,    52,    53,    25,    64,    66,    67,    71,
     111,    64,    10,    89,    21,    57,   100,    20,    59,    99,
      23,    24,    61,    64,    84,   102,   103,    94,    52,    74,
      80,     6,   115,    84,    43,    72,    75,    84,    85,    26,
      65,   110,    27,    68,   112,    64,    40,    86,    52,    56,
      58,    30,    31,    32,    33,    34,    35,    63,   104,   105,
     106,   107,   108,   109,    56,    52,    16,    95,    73,    85,
      64,    66,    64,    28,    69,   113,    67,    12,    54,    91,
      64,    86,    95,    92,    86,    86,    29,    70,   114,    67,
      11,    90,    52,    56,     8,    87,    67
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 36 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: start -> program#%d identifier#%d semicolon#%d block#%d endprogram#%d\n", prodId, (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 3:
#line 37 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: start -> \n", prodId);;}
    break;

  case 4:
#line 41 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: block -> declarations#%d beginprogram#%d statements#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 5:
#line 44 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: declarations -> declaration#%d semicolon#%d declarations2#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 6:
#line 47 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: declarations2 -> declarations#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 7:
#line 48 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: declarations2 -> \n", prodId);;}
    break;

  case 8:
#line 51 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: declaration -> identifier#%d declaration2#%d colon#%d array#%d integer#%d\n", prodId, (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 9:
#line 54 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: declaration2 -> comma#%d identifier#%d declaration2#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 10:
#line 55 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: declaration2 -> \n", prodId);;}
    break;

  case 11:
#line 58 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: array_block -> array#%d l_paren#%d number#%d r_paren#%d of#%d\n", prodId, (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 12:
#line 59 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: array_block -> \n", prodId);;}
    break;

  case 13:
#line 62 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statements -> statement#%d semicolon#%d statements2#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 14:
#line 65 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statements2 -> statements#%d \n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 15:
#line 66 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statements2 -> \n", prodId);;}
    break;

  case 16:
#line 69 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: if_else -> Else#%d statements#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 17:
#line 70 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: if_else -> \n", prodId);;}
    break;

  case 18:
#line 73 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> var#%d assign#%d exp#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 19:
#line 74 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> If#%d bool_exp#%d then#%d statements#%d if_else#%d endif#%d\n", prodId, (yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]) );;}
    break;

  case 20:
#line 75 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> While#%d bool_exp#%d beginloop#%d statements#%d endloop#%d\n", prodId, (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 21:
#line 76 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> Do#%d beginloop#%d statements#%d endloop#%d While#%d bool_exp#%d\n", prodId, (yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));;}
    break;

  case 22:
#line 77 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> vars#%d\n", prodId, (yyvsp[(1) - (2)]));;}
    break;

  case 23:
#line 78 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> vars#%d\n", prodId, (yyvsp[(1) - (2)]));;}
    break;

  case 24:
#line 79 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: statement -> Continue#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 25:
#line 83 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: bool_exp -> relation_and_exp#%d or_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 26:
#line 86 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: or_exp -> or#%d bool_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 27:
#line 87 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: or_exp -> \n", prodId);;}
    break;

  case 28:
#line 90 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: relation_and_exp -> relation_exp#%d and_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 29:
#line 93 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: and_exp -> and#%d relation_and_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 30:
#line 94 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: and_exp -> \n", prodId);;}
    break;

  case 31:
#line 97 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: relation_exp -> not_exp#%d relation_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 32:
#line 100 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: relation_exp -> exp#%d comp#%d exp#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 33:
#line 101 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: relation_exp -> True#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 34:
#line 102 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: relation_exp -> False#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 35:
#line 103 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: relation_exp -> l_paren#%d bool_exp#%d r_paren#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 36:
#line 106 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: not_exp -> not#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 37:
#line 107 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: not_exp -> \n", prodId);;}
    break;

  case 38:
#line 111 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comp -> equal#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 39:
#line 112 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comp -> not_equal#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 40:
#line 113 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comp -> less_than#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 41:
#line 114 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comp -> greater_than#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 42:
#line 115 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comp -> less_than_eq#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 43:
#line 116 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comp -> greater_than_eq#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 44:
#line 119 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: exp -> mult_exp#%d add_exp#%d sub_exp#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 45:
#line 122 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: add_exp -> add#%d exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 46:
#line 123 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: add_exp -> \n", prodId);;}
    break;

  case 47:
#line 126 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: sub_exp -> sub#%d exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 48:
#line 127 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: sub_exp -> \n", prodId);;}
    break;

  case 49:
#line 130 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mult_exp -> term#%d mult_exp2#%d div_exp#%d mod_exp#%d\n", prodId, (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 50:
#line 133 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mult_exp2 -> mult#%d mult_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 51:
#line 134 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mult_exp2 -> \n", prodId);;}
    break;

  case 52:
#line 137 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: div_exp -> div#%d mult_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 53:
#line 138 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: div_exp -> \n", prodId);;}
    break;

  case 54:
#line 141 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mod_exp -> mod#%d mult_exp#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 55:
#line 142 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mod_exp -> \n", prodId);;}
    break;

  case 56:
#line 145 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: term -> sub_exp#%d term2#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 57:
#line 148 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: term2 -> var#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 58:
#line 149 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: term2 -> number#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 59:
#line 150 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: term2 -> l_paren#%d exp#%d r_paren#%d\n", prodId, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 60:
#line 154 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: vars -> var#%d vars2#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 61:
#line 157 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: vars2 -> comma#%d vars#%d\n", prodId, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 62:
#line 158 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: vars2 -> \n", prodId);;}
    break;

  case 63:
#line 162 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: var -> identifier#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 64:
#line 163 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: var -> identifier#%d l_paren#%d exp#%d r_paren#%d\n", prodId, (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 65:
#line 169 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: program -> PROGRAM#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 66:
#line 171 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: begin_program -> BEGIN_PROGRAM#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 67:
#line 173 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: ident -> IDENT (%s)#%d\n", prodId, identToken, (yyvsp[(1) - (1)]));;}
    break;

  case 68:
#line 175 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: colon -> COLON#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 69:
#line 177 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: comma -> COMMA#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 70:
#line 179 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: semicolon -> SEMICOLON#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 71:
#line 181 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: end_program -> END_PROGRAM#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 72:
#line 183 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: array -> ARRAY#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 73:
#line 185 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: l_paren -> L_PAREN#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 74:
#line 187 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: number -> NUMBER (%d)#%d\n", prodId, numToken, (yyvsp[(1) - (1)]));;}
    break;

  case 75:
#line 189 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: r_paren -> R_PAREN#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 76:
#line 191 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: of -> OF#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 77:
#line 193 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: If -> IF#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 78:
#line 195 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: then -> THEN#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 79:
#line 197 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: endif -> ENDIF#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 80:
#line 199 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: Else -> ELSE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 81:
#line 201 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: While -> WHILE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 82:
#line 203 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: Do -> DO#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 83:
#line 205 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: beginloop -> BEGINLOOP#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 84:
#line 207 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: endloop -> ENDLOOP#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 85:
#line 209 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: read -> READ#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 86:
#line 211 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: write -> WRITE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 87:
#line 213 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: Continue -> CONTINUE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 88:
#line 215 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: and -> AND#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 89:
#line 217 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: or -> OR#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 90:
#line 219 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: not -> NOT#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 91:
#line 221 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: True -> TRUE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 92:
#line 223 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: False -> FALSE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 93:
#line 225 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: equal -> EQ#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 94:
#line 227 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: not_equal -> NEQ#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 95:
#line 229 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: less_than -> LT#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 96:
#line 231 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: greater_than -> GT#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 97:
#line 233 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: less_than_eq -> LTE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 98:
#line 235 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: greater_than_eq -> GTE#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 99:
#line 237 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: add -> ADD#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 100:
#line 239 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: sub -> SUB#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 101:
#line 241 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mult -> MULT#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 102:
#line 243 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: div -> DIV#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 103:
#line 245 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: mod -> MOD#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 104:
#line 247 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: integer -> INTEGER#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;

  case 105:
#line 249 "MINI_L.y"
    {prodId++; (yyval)=prodId; printf("%d: assign -> ASSIGN#%d\n", prodId, (yyvsp[(1) - (1)]));;}
    break;


/* Line 1267 of yacc.c.  */
#line 2075 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 252 "MINI_L.y"


int main(int argc, char **argv){
	
	if(argc > 1){
		yyin = fopen(argv[1], "r");
		
		if(yyin == NULL){
			yyin = stdin;
		}
	}
	else{
		yyin = stdin;
	}

	yyparse();

	return 0;
}

void yyerror(const char *msg){
	printf("\n\n** Line %d, position %d: %s\n", currentLine, currentPosition, msg);
}

