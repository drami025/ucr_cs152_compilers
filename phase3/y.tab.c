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
	#include <iostream>
	#include <sstream>
	#include <utility>
	#include "MINI_L.h"
	#include <fstream>
	void yyerror(const char *msg);
	extern int currentLine;
	extern int currentPosition;
	extern int yylex();
	extern FILE *yyin;
	int numToken;
	string programName;

	int labelId = 0;

	list<string> variables;	
	list<string> declaration_list;
	list<string> temp_t_vars;
	list<string> temp_p_vars;
	list<string> labels;
	list<pair<string, bool> > whileLabels;

	bool error_found = false;

	stringstream pgout;	//program output


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
typedef union YYSTYPE
#line 33 "MINI_L.y"
{char* sval; int dval;}
/* Line 193 of yacc.c.  */
#line 215 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 228 "y.tab.c"

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
#define YYLAST   117

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

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
       0,     0,     3,     4,    11,    12,    16,    20,    22,    23,
      29,    33,    34,    41,    42,    44,    45,    49,    51,    52,
      53,    57,    58,    62,    63,    71,    72,    73,    81,    82,
      83,    92,    95,    98,   100,   103,   106,   107,   110,   113,
     114,   117,   121,   123,   125,   129,   131,   132,   134,   136,
     138,   140,   142,   144,   148,   151,   152,   155,   156,   161,
     164,   165,   168,   169,   172,   173,   176,   178,   180,   184,
     187,   190,   191,   193,   199,   201,   203,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   279
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    -1,    84,    86,    46,    89,    47,    90,
      -1,    -1,    48,    85,    54,    -1,    50,    89,    49,    -1,
      48,    -1,    -1,    86,    51,    87,    52,   123,    -1,    88,
      86,    51,    -1,    -1,    91,    92,    53,    93,    94,    95,
      -1,    -1,   119,    -1,    -1,    58,    89,    55,    -1,    54,
      -1,    -1,    -1,    99,    57,    54,    -1,    -1,    83,   124,
      72,    -1,    -1,    96,    64,    97,    59,    54,    56,    98,
      -1,    -1,    -1,   100,    60,    64,    61,   102,    54,   103,
      -1,    -1,    -1,   101,   102,    62,    54,   103,   100,    63,
      64,    -1,   104,    81,    -1,   105,    81,    -1,   106,    -1,
      66,    65,    -1,   108,    64,    -1,    -1,    68,    67,    -1,
     107,    66,    -1,    -1,    70,    69,    -1,    72,    71,    72,
      -1,   110,    -1,   111,    -1,    92,    64,    94,    -1,   109,
      -1,    -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,   117,    -1,    75,    73,    74,    -1,   118,    72,
      -1,    -1,   119,    72,    -1,    -1,    79,    76,    77,    78,
      -1,   120,    75,    -1,    -1,   121,    75,    -1,    -1,   122,
      75,    -1,    -1,    74,    80,    -1,    83,    -1,    93,    -1,
      92,    72,    94,    -1,    83,    82,    -1,    88,    81,    -1,
      -1,    86,    -1,    86,    92,    53,    72,    94,    -1,     3,
      -1,     4,    -1,    42,    -1,    37,    -1,    38,    -1,    36,
      -1,     5,    -1,     7,    -1,    39,    -1,    43,    -1,    40,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,    18,
      -1,    19,    -1,    17,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    30,    -1,    31,    -1,    32,
      -1,    33,    -1,    34,    -1,    35,    -1,    26,    -1,    25,
      -1,    27,    -1,    28,    -1,    29,    -1,     6,    -1,    41,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    89,    95,    99,   102,   105,   106,   109,
     163,   168,   171,   179,   184,   189,   192,   195,   196,   200,
     199,   222,   234,   281,   280,   303,   314,   302,   340,   353,
     339,   370,   384,   397,   421,   433,   438,   443,   455,   460,
     465,   476,   484,   488,   492,   498,   503,   509,   513,   517,
     521,   525,   529,   535,   559,   564,   569,   574,   579,   625,
     630,   635,   640,   646,   651,   656,   662,   666,   673,   680,
     693,   698,   704,   721,   750,   752,   757,   759,   761,   763,
     765,   767,   769,   771,   773,   775,   777,   779,   781,   783,
     785,   787,   789,   791,   793,   795,   797,   799,   801,   803,
     805,   807,   809,   811,   813,   815,   817,   819,   821,   823,
     825,   827,   829,   831,   833
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
  "@1", "block", "declarations", "declarations2", "declaration",
  "declaration2", "array_block", "neg_array", "statements", "statements2",
  "if_else", "@2", "statement", "@3", "@4", "@5", "@6", "@7", "bool_exp",
  "or_exp", "relation_and_exp", "and_exp", "relation_exp", "relation_exp2",
  "not_exp", "comp", "exp", "add_exp", "sub_exp", "mult_exp", "mult_exp2",
  "div_exp", "mod_exp", "term", "term2", "vars", "vars2", "var", "program",
  "beginprogram", "identifier", "colon", "comma", "semicolon",
  "endprogram", "array", "l_paren", "number", "r_paren", "of", "If",
  "then", "endif", "Else", "While", "Do", "beginloop", "endloop", "read",
  "write", "Continue", "and", "or", "not", "True", "False", "equal",
  "not_equal", "less_than", "greater_than", "less_than_eq",
  "greater_than_eq", "add", "sub", "mult", "div", "mod", "integer",
  "assign", 0
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
       0,    44,    46,    45,    45,    47,    48,    49,    49,    50,
      51,    51,    52,    52,    53,    53,    54,    55,    55,    57,
      56,    56,    58,    59,    58,    60,    61,    58,    62,    63,
      58,    58,    58,    58,    64,    65,    65,    66,    67,    67,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    72,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    79,    80,    80,    80,    81,
      82,    82,    83,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     0,     3,     3,     1,     0,     5,
       3,     0,     6,     0,     1,     0,     3,     1,     0,     0,
       3,     0,     3,     0,     7,     0,     0,     7,     0,     0,
       8,     2,     2,     1,     2,     2,     0,     2,     2,     0,
       2,     3,     1,     1,     3,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     2,     0,     2,     0,     4,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     3,     2,
       2,     0,     1,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    74,     0,     0,     1,    76,     2,     0,    79,     0,
       0,     0,     0,    11,    80,     3,    75,     0,     8,    78,
       0,     0,    86,    90,    91,    96,    94,    95,     5,     0,
       0,    72,    46,    25,     0,     0,     0,    33,     7,     6,
      77,    13,    11,    18,   114,    57,    82,    15,    99,     0,
      36,    39,    57,    45,    46,    92,    28,    31,    71,    32,
      81,     0,     0,    10,    17,    16,   109,    22,     0,    55,
      60,    57,    57,    14,    87,    23,    98,    34,    46,    97,
      37,    46,   100,   101,    40,     0,    46,    42,    43,    26,
       0,    69,     0,   113,     9,    15,    83,    65,    66,    57,
      67,   108,    57,    57,   110,    62,    57,    56,     0,     0,
      35,    38,   102,   103,   104,   105,   106,   107,    57,    47,
      48,    49,    50,    51,    52,     0,     0,     0,    70,     0,
       0,    53,    54,   111,    64,    57,    59,    84,    73,    21,
      41,    44,     0,    93,     0,     0,    68,   112,    58,    57,
      61,    89,     0,    19,     0,    29,     0,    63,    88,    24,
       0,    27,    46,    85,    12,    20,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    10,    11,    39,    12,    20,    61,    72,
      28,    65,   152,   160,    29,   109,    54,   126,    90,   162,
      49,    77,    50,    80,    51,    84,    52,   118,    67,   102,
      68,    69,   105,   134,   148,    70,    97,    57,    91,    30,
       3,    17,    31,    41,    21,     9,    15,    62,    47,   100,
     138,   164,    32,    75,   159,   153,    33,    34,    56,   144,
      35,    36,    37,    81,    78,    53,    87,    88,   119,   120,
     121,   122,   123,   124,   103,    71,   106,   135,   149,    94,
      45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -117
static const yytype_int8 yypact[] =
{
      20,  -117,    24,   -15,  -117,  -117,  -117,    -6,  -117,   -15,
      27,    30,    -6,     0,  -117,  -117,  -117,    -2,   -15,  -117,
       2,   -15,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    -6,
       3,     7,    23,  -117,    33,   -15,   -15,  -117,  -117,  -117,
    -117,    43,     0,    -2,  -117,    34,  -117,    34,  -117,    48,
      41,    44,    18,  -117,    23,  -117,  -117,  -117,     0,  -117,
    -117,    57,     7,  -117,  -117,  -117,  -117,  -117,    13,    49,
      38,    34,    34,  -117,  -117,  -117,  -117,  -117,    23,  -117,
    -117,    23,  -117,  -117,  -117,    39,    23,  -117,  -117,  -117,
      -2,  -117,   -15,  -117,  -117,    34,  -117,  -117,  -117,    34,
    -117,  -117,    34,    34,  -117,    50,    34,  -117,    36,    -2,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    34,  -117,
    -117,  -117,  -117,  -117,  -117,    36,    33,    51,  -117,    37,
      36,  -117,  -117,  -117,    52,    34,  -117,  -117,  -117,    65,
    -117,  -117,    -2,  -117,    66,    36,  -117,  -117,  -117,    34,
    -117,  -117,    71,  -117,    51,  -117,    75,  -117,  -117,  -117,
      -2,  -117,    23,  -117,  -117,  -117,  -117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -117,  -117,  -117,  -117,    67,  -117,  -117,    42,  -117,    -9,
     -43,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
     -53,  -117,     8,  -117,  -117,  -117,  -117,  -117,   -50,  -117,
     -14,   -98,  -117,  -117,  -117,  -117,  -117,   -31,  -117,   -32,
    -117,  -117,    10,  -117,    29,     6,  -117,  -117,   -42,   -39,
    -116,  -117,  -117,  -117,  -117,  -117,   -52,  -117,   -35,   -61,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,   -41,  -117,  -117,  -117,  -117,
    -117
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      64,    89,    85,    58,    58,    59,    73,    22,   136,   141,
      86,    23,    24,     6,   146,    25,    26,    27,    18,    13,
      95,   107,   108,     1,     4,   110,    99,     5,    13,   156,
       8,    42,    14,   125,    16,    43,    98,   150,    19,    40,
       5,    82,    83,    66,    44,    48,    46,   127,    55,   130,
      60,   157,    46,   132,    73,     5,    96,    46,    74,    66,
      58,   128,    76,    93,    79,   104,   139,   143,   140,   112,
     113,   114,   115,   116,   117,   101,   137,   151,   133,    23,
      96,   147,   158,   163,    63,    38,   129,    92,   131,   111,
     145,   142,   155,   161,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,   165
};

static const yytype_int16 yycheck[] =
{
      43,    54,    52,    35,    36,    36,    47,     9,   106,   125,
      52,    13,    14,     3,   130,    17,    18,    19,    12,     9,
      62,    71,    72,     3,     0,    78,    68,    42,    18,   145,
      36,    21,     5,    86,     4,    29,    68,   135,    38,    37,
      42,    23,    24,    25,    41,    22,    39,    90,    15,    99,
       7,   149,    39,   103,    95,    42,    43,    39,    10,    25,
      92,    92,    21,     6,    20,    27,   109,    16,   118,    30,
      31,    32,    33,    34,    35,    26,    40,    12,    28,    13,
      43,    29,    11,     8,    42,    18,    95,    58,   102,    81,
     129,   126,   144,   154,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,    84,     0,    42,    86,    46,    36,    89,
      47,    48,    50,    86,     5,    90,     4,    85,    89,    38,
      51,    88,     9,    13,    14,    17,    18,    19,    54,    58,
      83,    86,    96,   100,   101,   104,   105,   106,    48,    49,
      37,    87,    86,    89,    41,   124,    39,    92,    22,    64,
      66,    68,    70,   109,    60,    15,   102,    81,    83,    81,
       7,    52,    91,    51,    54,    55,    25,    72,    74,    75,
      79,   119,    53,   119,    10,    97,    21,    65,   108,    20,
      67,   107,    23,    24,    69,    72,    92,   110,   111,    64,
      62,    82,    88,     6,   123,    92,    43,    80,    83,    92,
      93,    26,    73,   118,    27,    76,   120,    72,    72,    59,
      64,    66,    30,    31,    32,    33,    34,    35,    71,   112,
     113,   114,   115,   116,   117,    64,    61,    54,    81,    53,
      72,    74,    72,    28,    77,   121,    75,    40,    94,    54,
      72,    94,   102,    16,   103,    93,    94,    29,    78,   122,
      75,    12,    56,    99,    54,   100,    94,    75,    11,    98,
      57,   103,    63,     8,    95,    54,    64
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
#line 90 "MINI_L.y"
    {
			programName = (yyvsp[(2) - (2)].sval);
			programName = "_" + programName;
		;}
    break;

  case 9:
#line 110 "MINI_L.y"
    {
			string tmp = string((yyvsp[(4) - (5)].sval));
			string id = string((yyvsp[(1) - (5)].sval));
			declaration_list.push_back("_" + id); 
			stringstream ss;

			list<string>::iterator it;
			
			Type var_type;
			int size = 0;

			for(it = declaration_list.begin(); it != declaration_list.end(); it++){
				ss.clear();
				ss.str(string());

				if(*it == programName){
					error_found = true;
					cout << "Error line "<< currentLine <<": Cannot declare variable with the same name as the program." << endl;
				}

				if(!is_declared(*it)){
					ss << "\t.";

					if(!tmp.empty()){
						ss << "[] " << *it << ", " << tmp; 
						var_type = ARRAY_T;
						size = atoi(tmp.c_str());

						if(size == 0){
							cout << "Error line " << currentLine << ". Invalid array size." << endl;
							error_found = true;
						} 
					}
					else{
						ss << " " << *it; 
						var_type = INT_T;
						size = 0;
					}		

					variables.push_back(ss.str());
					Symbol sym(*it, var_type, size);
					symbol_table[*it] = sym;
				}
				else{
					cout << "Error line " << currentLine << ": " << *it << " already declared." << endl;
				}
			}

			declaration_list.clear();
			
		;}
    break;

  case 10:
#line 164 "MINI_L.y"
    {
			string id = "_" + string((yyvsp[(2) - (3)].sval)); 
			declaration_list.push_back(id);
		;}
    break;

  case 12:
#line 172 "MINI_L.y"
    {
			stringstream ss;
			ss << (yyvsp[(4) - (6)].dval);
			(yyval.sval) = (char*) ss.str().c_str();
			ss.str(string());
		;}
    break;

  case 13:
#line 179 "MINI_L.y"
    {
			(yyval.sval) = "";
		;}
    break;

  case 14:
#line 185 "MINI_L.y"
    {
			cout << "Error line " << currentLine << ": Invalid array size." << endl;
			error_found = true;
		;}
    break;

  case 19:
#line 200 "MINI_L.y"
    {
			(yyval.sval) = "else";
			string label1 = labels.back();
			labels.pop_back();

			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			
			string label2 = ss.str();
			labels.push_back(label2);

			pgout << "\t:= " << label2 << endl;

			pgout << ": " << label1 << endl;
			
		;}
    break;

  case 20:
#line 218 "MINI_L.y"
    {
			(yyval.sval) = "else";
		;}
    break;

  case 21:
#line 222 "MINI_L.y"
    {
			if(!labels.empty()){
				string label = labels.back();
				labels.pop_back();

				pgout << ": " << label << endl;
			}
			
			(yyval.sval) = NULL;
		;}
    break;

  case 22:
#line 235 "MINI_L.y"
    {
			string temp;
			string var = (yyvsp[(1) - (3)].sval);
			string exp = (yyvsp[(3) - (3)].sval);
			string index;

			bool indexIsVar = false;
			bool varIsArr = false;
			bool expIsArr = false;

			if((temp = var).find(",") != string::npos || (temp = exp).find(",") != string::npos){
				varIsArr = temp == var;
				expIsArr = !varIsArr;

				var = temp.substr(0, temp.find(","));
				index = temp.substr(temp.find(" ") + 1);

				indexIsVar = !is_temp(index) && !(atoi(index.c_str()));
			}
			
			map<string, Symbol>::iterator it = symbol_table.find(var);


			//if(it == symbol_table.end()){
			//	error_found = true;	
			//	cout << "Error line " << currentLine << ": " << var << " has not been declared yet.\n" << endl;
			//}

			if(indexIsVar && (it = symbol_table.find(index)) == symbol_table.end()){
				error_found = true;
				cout << "Error line " << currentLine << ": " << index << " has not been declared and is used as an index.\n" << endl;
			}

			if(varIsArr){
				string third = evaluate_array((yyvsp[(3) - (3)].sval));
				pgout << "\t[]= " << var << ", " << index << ", " << third << endl;
			}
			else if(expIsArr){
				pgout << "\t=[] " << (yyvsp[(1) - (3)].sval) << ", " << exp << endl;
			}
			else{
				pgout << "\t= " << (yyvsp[(1) - (3)].sval) << ", " << (yyvsp[(3) - (3)].sval) << endl;
			}
				
		;}
    break;

  case 23:
#line 281 "MINI_L.y"
    {
			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			string label = ss.str();
			labels.push_back(label);

			string pred = bool_statement("!", (yyvsp[(2) - (3)].sval), " ");

			pgout << endl << "\t?:= " << label << ", " << pred << endl;
		;}
    break;

  case 24:
#line 293 "MINI_L.y"
    {
			if((yyvsp[(6) - (7)].sval) != NULL){
				string label = labels.back();

				pgout << ": " << label << endl;

				labels.pop_back();
			}
		;}
    break;

  case 25:
#line 303 "MINI_L.y"
    {
			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			string label = ss.str();
			labels.push_back(label);
			whileLabels.push_back(make_pair(label, false));

			pgout <<  endl << ": " << label << endl;
		;}
    break;

  case 26:
#line 314 "MINI_L.y"
    {
			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			string label = ss.str();
			labels.push_back(label);

			string pred = bool_statement("!", (yyvsp[(3) - (3)].sval), " ");

			pgout << "\t?:= " << label << ", " << pred << endl;	
		;}
    break;

  case 27:
#line 326 "MINI_L.y"
    {
			string breakLabel = labels.back();
			labels.pop_back();
			
			string nextItLabel = labels.back();
			labels.pop_back();

			pgout << "\t:= " << nextItLabel << endl;
		
			pgout << ": " << breakLabel << endl;

			whileLabels.pop_back();
		;}
    break;

  case 28:
#line 340 "MINI_L.y"
    {
			stringstream ss;
			ss << "L" << labelId;
			labelId++;

			string label = ss.str();
			labels.push_back(label);

			pgout << ": " << label << endl;

			whileLabels.push_back(make_pair("L", false));
		;}
    break;

  case 29:
#line 353 "MINI_L.y"
    {
			pair<string, bool> labelPair = whileLabels.back();

			if(labelPair.second){
				pgout << ": " << labelPair.first << endl;
			}

			whileLabels.pop_back();
		;}
    break;

  case 30:
#line 363 "MINI_L.y"
    {
			string label = labels.back();
			labels.pop_back();
	
			pgout << "\t?:= " << label << ", " << (yyvsp[(8) - (8)].sval) << endl;

		;}
    break;

  case 31:
#line 371 "MINI_L.y"
    {
			char *copy = strdup((yyvsp[(2) - (2)].sval));
			vector<string> all = split(copy, '-');

			for(int i = 0; i < all.size(); i++){
				pgout << "\t.";
				if(all.at(i).find(',') != string::npos){
					pgout << "[]";
				}
				pgout << "< " << all.at(i) << endl;
			}			

		;}
    break;

  case 32:
#line 385 "MINI_L.y"
    {
			char *copy = strdup((yyvsp[(2) - (2)].sval));
			vector<string> all = split(copy, '-');

			for(int i = 0; i < all.size(); i++){
				pgout << "\t.";
				if(all.at(i).find(',') != string::npos){
					pgout << "[]";
				}
				pgout << "> " << all.at(i) << endl;
			}
		;}
    break;

  case 33:
#line 398 "MINI_L.y"
    {
			if(whileLabels.empty()){
				cout << "Error line " << currentLine << ": using keyword \"continue\" outside of a while or do-while loop." << endl;
			}
			else{
				pair<string, bool> labelPair = whileLabels.back();
				labelPair.second = true;

				if(labelPair.first == "L"){
					stringstream ss;
					ss << labelPair.first << labelId;
					labelId++;
					labelPair.first = ss.str();
				}

				pgout << "\t:= " << labelPair.first << endl;

				whileLabels.back() = labelPair;
			}
		;}
    break;

  case 34:
#line 422 "MINI_L.y"
    {
			string temp = (yyvsp[(1) - (2)].sval);

			if((yyvsp[(2) - (2)].sval) != NULL){
				temp = bool_statement("||", temp, (yyvsp[(2) - (2)].sval));
			}
			
			(yyval.sval) = strdup(temp.c_str());
		;}
    break;

  case 35:
#line 434 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 36:
#line 438 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 37:
#line 444 "MINI_L.y"
    {	
			string temp = (yyvsp[(1) - (2)].sval);

			if((yyvsp[(2) - (2)].sval) != NULL){
				temp = bool_statement("&&", temp, (yyvsp[(2) - (2)].sval));			
			}
		
			(yyval.sval) = strdup(temp.c_str());
		;}
    break;

  case 38:
#line 456 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 39:
#line 460 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 40:
#line 466 "MINI_L.y"
    {
			string temp = (yyvsp[(2) - (2)].sval);

			if((yyvsp[(1) - (2)].sval) != NULL){
				temp = bool_statement("!", temp, " ");
			}
			(yyval.sval) = strdup(temp.c_str());
		;}
    break;

  case 41:
#line 477 "MINI_L.y"
    {
			string comp = (yyvsp[(2) - (3)].sval);

			string temp = bool_statement((yyvsp[(2) - (3)].sval), (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));

			(yyval.sval) = strdup(temp.c_str());
		;}
    break;

  case 42:
#line 485 "MINI_L.y"
    {
			(yyval.sval) = "1";
		;}
    break;

  case 43:
#line 489 "MINI_L.y"
    {
			(yyval.sval) = "0";
		;}
    break;

  case 44:
#line 493 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (3)].sval);
		;}
    break;

  case 45:
#line 499 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(1) - (1)].sval);
		;}
    break;

  case 46:
#line 503 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 47:
#line 510 "MINI_L.y"
    {
			(yyval.sval) = "==";
		;}
    break;

  case 48:
#line 514 "MINI_L.y"
    {
			(yyval.sval) = "!=";
		;}
    break;

  case 49:
#line 518 "MINI_L.y"
    {
			(yyval.sval) = "<";
		;}
    break;

  case 50:
#line 522 "MINI_L.y"
    {
			(yyval.sval) = ">";
		;}
    break;

  case 51:
#line 526 "MINI_L.y"
    {
			(yyval.sval) = "<=";
		;}
    break;

  case 52:
#line 530 "MINI_L.y"
    {
			(yyval.sval) = ">=";
		;}
    break;

  case 53:
#line 536 "MINI_L.y"
    {
			string temp = (yyvsp[(1) - (3)].sval);
			bool tempCreated = false; 

			if((yyvsp[(2) - (3)].sval) != NULL){
				tempCreated = true;
				temp = arith_statement("+", temp, (yyvsp[(2) - (3)].sval));
			}	

			if((yyvsp[(3) - (3)].sval) != NULL){
				if(!tempCreated){
					tempCreated = true;
					temp = arith_statement("-", temp, (yyvsp[(3) - (3)].sval));
				}
				else{				
					temp = arith_statement("-", temp, (yyvsp[(3) - (3)].sval), temp);
				}
			}
	
			(yyval.sval) = strdup(temp.c_str());
		;}
    break;

  case 54:
#line 560 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 55:
#line 564 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 56:
#line 570 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 57:
#line 574 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 58:
#line 580 "MINI_L.y"
    {
			char *mod;
			if((yyvsp[(4) - (4)].sval) != NULL){
				mod = strdup((yyvsp[(4) - (4)].sval));
			}

			char *div;
			if((yyvsp[(3) - (4)].sval) != NULL){
				div = strdup((yyvsp[(3) - (4)].sval));
			}	


			bool tempCreated = false;

			string temp = (yyvsp[(1) - (4)].sval);			

			if((yyvsp[(2) - (4)].sval) != NULL){
				tempCreated = true;
				temp = arith_statement("*", temp, (yyvsp[(2) - (4)].sval));
			}

			if((yyvsp[(3) - (4)].sval) != NULL){
				if(!tempCreated){
					tempCreated = true;
					temp = arith_statement("/", temp, div);
				}
				else{
					temp = arith_statement("/", temp, div, temp);
				}
			}

			if((yyvsp[(4) - (4)].sval) != NULL){
				if(!tempCreated){
					tempCreated = true;
					temp = arith_statement("%", temp, mod);
				}
				else{
					temp = arith_statement("%", temp, mod, temp);
				}
			}

			(yyval.sval) = strdup(temp.c_str());
		;}
    break;

  case 59:
#line 626 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 60:
#line 630 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 61:
#line 636 "MINI_L.y"
    {		
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 62:
#line 640 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 63:
#line 647 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 64:
#line 651 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 65:
#line 657 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (2)].sval);
		;}
    break;

  case 66:
#line 663 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(1) - (1)].sval);
		;}
    break;

  case 67:
#line 667 "MINI_L.y"
    {
			stringstream ss;
			ss << (yyvsp[(1) - (1)].dval);
			(yyval.sval) = strdup(ss.str().c_str());
			ss.str(string());
		;}
    break;

  case 68:
#line 674 "MINI_L.y"
    {
			(yyval.sval) = (yyvsp[(2) - (3)].sval);
		;}
    break;

  case 69:
#line 681 "MINI_L.y"
    {
			stringstream ss;
			ss << (yyvsp[(1) - (2)].sval);
			
			if((yyvsp[(2) - (2)].sval) != NULL){
				ss << "-" << (yyvsp[(2) - (2)].sval);
			}

			(yyval.sval) = strdup(ss.str().c_str());
		;}
    break;

  case 70:
#line 694 "MINI_L.y"
    {
			(yyval.sval) = strdup((yyvsp[(2) - (2)].sval));
		;}
    break;

  case 71:
#line 698 "MINI_L.y"
    {
			(yyval.sval) = NULL;
		;}
    break;

  case 72:
#line 705 "MINI_L.y"
    {
			string id = "_" + string((yyvsp[(1) - (1)].sval)); 
			if(!is_declared(id)){
				error_found = true;
				cout << "Error line " << currentLine << ": " << (yyvsp[(1) - (1)].sval) << " was not declared." << endl;
			}
			else{
				Symbol sym = symbol_table[id];
		
				if(sym.type == ARRAY_T){
					cout << "Error line " << currentLine << ": attempting to use array \"" << id.substr(1) << "\" without an index." << endl;
				}				
			}

			(yyval.sval) = strdup(id.c_str()); 
		;}
    break;

  case 73:
#line 722 "MINI_L.y"
    {
			string id = "_" + string((yyvsp[(1) - (5)].sval)); 
			if(!is_declared(id)){
				cout << "Error line " << currentLine <<  ": " << (yyvsp[(1) - (5)].sval) << " was not declared." << endl;
				error_found = true;
			}
			else{
				Symbol sym = symbol_table[id];

				if(sym.type == INT_T){
					cout << "Error line " << currentLine << ": attempting to use integer variable \"" << id.substr(1) << "\" as an array." << endl;
				}
			}

			if(!is_temp((yyvsp[(4) - (5)].sval))){
				is_declared((yyvsp[(4) - (5)].sval));
			}

			stringstream ss;
			ss << id << ", " << (yyvsp[(4) - (5)].sval);
			(yyval.sval) = strdup(ss.str().c_str());
			ss.str(string());
		;}
    break;

  case 75:
#line 753 "MINI_L.y"
    {	
			pgout << ": START" << endl;
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2357 "y.tab.c"
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


#line 836 "MINI_L.y"


bool is_declared(string id){
	return symbol_table.find(id) != symbol_table.end();
}

bool is_temp(string temp){
	list<string>::iterator it;
	if(temp.at(0) == 't'){
		for(it = temp_t_vars.begin(); it != temp_t_vars.end(); it++){
			if(*it == temp){
				return true;	
			}
		}
	}
	else if(temp.at(0) == 'p'){
		for(it = temp_p_vars.begin(); it != temp_p_vars.end(); it++){
			if(*it == temp){
				return true;
			}
		}
	}

	return false;
}

void mil_output(){

	if(error_found){
		return;
	}

	string pname = programName.substr(1) + ".mil";
	ofstream fout (pname.c_str());

	list<string>::iterator it;

	for(it = variables.begin(); it != variables.end(); it++){
		fout << *it << endl;
	}


	for(it = temp_t_vars.begin(); it != temp_t_vars.end(); it++){
		fout << "\t. " << *it << endl;
	}

	for(it = temp_p_vars.begin(); it != temp_p_vars.end(); it++){
		fout << "\t. " << *it << endl;
	}

	
	fout << pgout.str() << endl;
}

string evaluate_array(string src){
	
	string dst = src;

	if(src.find(',') != string::npos){

		stringstream ss;
		dst = "t";
		temp_t_vars.push_back(dst);
		int size = temp_t_vars.size();
		ss << dst << (size - 1);
		temp_t_vars.back() = ss.str();
		dst = temp_t_vars.back();

		pgout << "\t=[] " << dst << ", " << src << endl;
	}

	return dst;
}

string arith_statement(string op, string src1, string src2, string dst){

	src1 = evaluate_array(src1);
	src2 = evaluate_array(src2);
	
	if(dst == "t"){
		temp_t_vars.push_back(dst);
		int size = temp_t_vars.size();

		stringstream ss;
		ss << dst << (size - 1);
		temp_t_vars.back() = ss.str();
		ss.str(string());

		dst = temp_t_vars.back();
	}

	pgout << "\t" << op << " " << dst << ", " << src1 << ", " << src2 << endl;

	return dst;
}

string bool_statement(string op, string src1, string src2, string dst){
	
	src1 = evaluate_array(src1);
	src2 = evaluate_array(src2);

	if(dst == "p"){
		temp_p_vars.push_back(dst);
		int size = temp_p_vars.size();
	
		stringstream ss;
		ss << dst << (size - 1);
		temp_p_vars.back() = ss.str();
		ss.str(string());

		dst = temp_p_vars.back();
	}

	if(op != "!"){
		pgout << "\t" << op << " " << dst << ", " << src1 << ", " << src2 << endl;
	}
	else{
		pgout << "\t" << op << " " << dst << ", " << src1 << endl;	
	}

	return dst;
}

vector<string> split(const char *str, char c){
	vector<string> result;

	do{
	
		const char *begin = str;

		while(*str != c && *str)
			str++;

		result.push_back(string(begin, str));

	}while (0 != *str++);

	return result;
}

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

	mil_output();	

	return 0;
}

void yyerror(const char *msg){
	printf("\n\n** Line %d, position %d: %s\n", currentLine, currentPosition, msg);
	error_found = true;
}

