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
     IF_PREC = 258,
     ELSE_SYM = 259,
     IDENTIFIER = 260,
     TYPE_IDENTIFIER = 261,
     FLOAT_CONSTANT = 262,
     INTEGER_CONSTANT = 263,
     CHARACTER_CONSTANT = 264,
     STRING_LITERAL = 265,
     PLUS = 266,
     MINUS = 267,
     PLUSPLUS = 268,
     MINUSMINUS = 269,
     BAR = 270,
     AMP = 271,
     BARBAR = 272,
     AMPAMP = 273,
     ARROW = 274,
     SEMICOLON = 275,
     LSS = 276,
     GTR = 277,
     LEQ = 278,
     GEQ = 279,
     EQL = 280,
     NEQ = 281,
     DOTDOTDOT = 282,
     LP = 283,
     RP = 284,
     LB = 285,
     RB = 286,
     LR = 287,
     RR = 288,
     PERIOD = 289,
     COMMA = 290,
     EXCL = 291,
     STAR = 292,
     SLASH = 293,
     PERCENT = 294,
     ASSIGN = 295,
     COLON = 296,
     AUTO_SYM = 297,
     STATIC_SYM = 298,
     TYPEDEF_SYM = 299,
     STRUCT_SYM = 300,
     ENUM_SYM = 301,
     SIZEOF_SYM = 302,
     UNION_SYM = 303,
     IF_SYM = 304,
     WHILE_SYM = 305,
     DO_SYM = 306,
     FOR_SYM = 307,
     CONTINUE_SYM = 308,
     BREAK_SYM = 309,
     RETURN_SYM = 310,
     SWITCH_SYM = 311,
     CASE_SYM = 312,
     DEFAULT_SYM = 313
   };
#endif
/* Tokens.  */
#define IF_PREC 258
#define ELSE_SYM 259
#define IDENTIFIER 260
#define TYPE_IDENTIFIER 261
#define FLOAT_CONSTANT 262
#define INTEGER_CONSTANT 263
#define CHARACTER_CONSTANT 264
#define STRING_LITERAL 265
#define PLUS 266
#define MINUS 267
#define PLUSPLUS 268
#define MINUSMINUS 269
#define BAR 270
#define AMP 271
#define BARBAR 272
#define AMPAMP 273
#define ARROW 274
#define SEMICOLON 275
#define LSS 276
#define GTR 277
#define LEQ 278
#define GEQ 279
#define EQL 280
#define NEQ 281
#define DOTDOTDOT 282
#define LP 283
#define RP 284
#define LB 285
#define RB 286
#define LR 287
#define RR 288
#define PERIOD 289
#define COMMA 290
#define EXCL 291
#define STAR 292
#define SLASH 293
#define PERCENT 294
#define ASSIGN 295
#define COLON 296
#define AUTO_SYM 297
#define STATIC_SYM 298
#define TYPEDEF_SYM 299
#define STRUCT_SYM 300
#define ENUM_SYM 301
#define SIZEOF_SYM 302
#define UNION_SYM 303
#define IF_SYM 304
#define WHILE_SYM 305
#define DO_SYM 306
#define FOR_SYM 307
#define CONTINUE_SYM 308
#define BREAK_SYM 309
#define RETURN_SYM 310
#define SWITCH_SYM 311
#define CASE_SYM 312
#define DEFAULT_SYM 313




/* Copy the first part of user declarations.  */
#line 1 "parse.y"


#include "type.h"
#include "syntax.h"

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 235 "y.tab.c"

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    15,    20,
      21,    25,    26,    28,    30,    33,    37,    39,    41,    44,
      47,    49,    51,    53,    54,    56,    58,    62,    64,    68,
      70,    74,    76,    80,    82,    84,    86,    87,    88,    96,
      97,    98,   105,   108,   110,   112,   114,   117,   121,   123,
     127,   129,   130,   137,   138,   144,   147,   149,   153,   155,
     156,   161,   164,   166,   168,   171,   173,   177,   182,   183,
     189,   190,   192,   194,   198,   200,   204,   207,   210,   211,
     213,   215,   217,   220,   224,   228,   233,   237,   242,   243,
     245,   247,   250,   252,   254,   256,   258,   260,   262,   267,
     271,   272,   278,   280,   283,   289,   297,   303,   309,   317,
     323,   329,   330,   332,   336,   339,   342,   343,   345,   347,
     351,   352,   354,   356,   358,   360,   362,   366,   368,   370,
     374,   376,   380,   382,   384,   386,   388,   392,   396,   398,
     402,   406,   410,   414,   416,   418,   422,   426,   428,   432,
     436,   440,   442,   447,   449,   452,   455,   458,   461,   464,
     467,   470,   473,   478,   480,   485,   490,   494,   498,   501,
     504,   506,   508,   510,   512,   514,   518
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    62,    -1,    61,    62,    -1,
      63,    -1,    68,    -1,    -1,    69,    93,    64,   108,    -1,
      -1,    93,    65,   108,    -1,    -1,    67,    -1,    68,    -1,
      67,    68,    -1,    69,    71,    20,    -1,    76,    -1,    70,
      -1,    76,    69,    -1,    70,    69,    -1,    42,    -1,    43,
      -1,    44,    -1,    -1,    72,    -1,    73,    -1,    72,    35,
      73,    -1,    93,    -1,    93,    40,    74,    -1,   119,    -1,
      32,    75,    33,    -1,    74,    -1,    75,    35,    74,    -1,
      77,    -1,    87,    -1,     6,    -1,    -1,    -1,    82,     5,
      78,    32,    79,    83,    33,    -1,    -1,    -1,    82,    80,
      32,    81,    83,    33,    -1,    82,     5,    -1,    45,    -1,
      48,    -1,    84,    -1,    83,    84,    -1,    76,    85,    20,
      -1,    86,    -1,    85,    35,    86,    -1,    93,    -1,    -1,
      46,     5,    88,    32,    90,    33,    -1,    -1,    46,    89,
      32,    90,    33,    -1,    46,     5,    -1,    91,    -1,    90,
      35,    91,    -1,     5,    -1,    -1,     5,    92,    40,   120,
      -1,    94,    95,    -1,    95,    -1,    37,    -1,    37,    94,
      -1,     5,    -1,    28,    93,    29,    -1,    95,    30,   118,
      31,    -1,    -1,    95,    28,    96,    97,    29,    -1,    -1,
      98,    -1,    99,    -1,    99,    35,    27,    -1,   100,    -1,
      99,    35,   100,    -1,    69,    93,    -1,    69,   101,    -1,
      -1,   102,    -1,   103,    -1,    94,    -1,    94,   103,    -1,
      28,   102,    29,    -1,    30,   118,    31,    -1,   103,    30,
     118,    31,    -1,    28,    97,    29,    -1,   103,    28,    97,
      29,    -1,    -1,   105,    -1,   106,    -1,   105,   106,    -1,
     107,    -1,   108,    -1,   110,    -1,   111,    -1,   112,    -1,
     115,    -1,    57,   119,    41,   106,    -1,    58,    41,   106,
      -1,    -1,    32,   109,    66,   104,    33,    -1,    20,    -1,
     120,    20,    -1,    49,    28,   120,    29,   106,    -1,    49,
      28,   120,    29,   106,     4,   106,    -1,    56,    28,   120,
      29,   106,    -1,    50,    28,   120,    29,   106,    -1,    51,
     106,    50,    28,   120,    29,    20,    -1,    52,    28,   113,
      29,   106,    -1,   114,    20,   114,    20,   114,    -1,    -1,
     120,    -1,    55,   114,    20,    -1,    53,    20,    -1,    54,
      20,    -1,    -1,   117,    -1,   122,    -1,   117,    35,   122,
      -1,    -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,
     123,    -1,   135,    40,   122,    -1,   124,    -1,   125,    -1,
     124,    17,   125,    -1,   126,    -1,   125,    18,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   129,    25,
     130,    -1,   129,    26,   130,    -1,   131,    -1,   130,    21,
     131,    -1,   130,    22,   131,    -1,   130,    23,   131,    -1,
     130,    24,   131,    -1,   132,    -1,   133,    -1,   132,    11,
     133,    -1,   132,    12,   133,    -1,   134,    -1,   133,    37,
     134,    -1,   133,    38,   134,    -1,   133,    39,   134,    -1,
     135,    -1,    28,   138,    29,   134,    -1,   136,    -1,    13,
     135,    -1,    14,   135,    -1,    16,   134,    -1,    37,   134,
      -1,    36,   134,    -1,    12,   134,    -1,    11,   134,    -1,
      47,   135,    -1,    47,    28,   138,    29,    -1,   137,    -1,
     136,    30,   120,    31,    -1,   136,    28,   116,    29,    -1,
     136,    34,     5,    -1,   136,    19,     5,    -1,   136,    13,
      -1,   136,    14,    -1,     5,    -1,     8,    -1,     7,    -1,
       9,    -1,    10,    -1,    28,   120,    29,    -1,    69,   101,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    26,    27,    30,    31,    34,    34,    36,
      36,    40,    41,    44,    45,    48,    51,    52,    53,    54,
      57,    58,    59,    62,    63,    66,    67,    70,    71,    74,
      75,    78,    79,    82,    83,    84,    87,    88,    87,    90,
      90,    90,    92,    95,    96,    99,   100,   103,   106,   107,
     110,   113,   113,   115,   115,   117,   120,   121,   124,   125,
     125,   129,   130,   133,   134,   137,   138,   139,   141,   141,
     146,   147,   150,   151,   154,   155,   158,   159,   162,   163,
     166,   167,   168,   171,   172,   173,   174,   175,   178,   179,
     182,   183,   186,   187,   188,   189,   190,   191,   194,   195,
     198,   198,   203,   204,   207,   208,   209,   212,   213,   214,
     217,   220,   221,   224,   225,   226,   229,   230,   233,   234,
     237,   238,   241,   244,   247,   250,   251,   254,   257,   258,
     261,   262,   265,   268,   271,   274,   275,   276,   279,   280,
     281,   282,   283,   286,   289,   290,   291,   294,   295,   296,
     297,   300,   301,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   316,   317,   318,   319,   320,   321,   322,
     325,   326,   327,   328,   329,   330,   333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF_PREC", "ELSE_SYM", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "WHILE_SYM", "DO_SYM",
  "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM",
  "CASE_SYM", "DEFAULT_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    78,    79,    77,    80,
      81,    77,    77,    82,    82,    83,    83,    84,    85,    85,
      86,    88,    87,    89,    87,    87,    90,    90,    91,    92,
      91,    93,    93,    94,    94,    95,    95,    95,    96,    95,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     109,   108,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   160,   151,   159,
       0,   154,   155,   156,    78,     0,     0,   158,   157,     0,
     161,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,    70,    81,   176,   175,     0,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,   102,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   152,   162,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,   112,
       0,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,     0,     0,     0,     0,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   248,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -220
static const yytype_int16 yypact[] =
{
     135,  -220,  -220,    23,    38,  -220,  -220,  -220,  -220,    74,
    -220,    92,   135,  -220,  -220,  -220,    23,    43,    43,  -220,
      94,  -220,  -220,    22,   129,    82,  -220,    71,    84,  -220,
    -220,   104,    86,  -220,    65,  -220,  -220,   105,   110,   119,
     129,  -220,    27,  -220,   126,   165,  -220,    23,   356,   119,
     150,  -220,  -220,  -220,    43,  -220,  -220,  -220,  -220,  -220,
      27,    27,   202,   202,    27,   312,    27,    27,   369,   167,
    -220,  -220,  -220,  -220,  -220,   200,   201,  -220,  -220,  -220,
      36,   112,  -220,   116,    -8,  -220,   185,   268,  -220,   165,
     188,   131,  -220,  -220,   191,   356,  -220,  -220,  -220,  -220,
     187,    43,    39,   198,  -220,   208,  -220,  -220,  -220,  -220,
      27,  -220,  -220,  -220,    95,   216,   217,  -220,  -220,   312,
    -220,  -220,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,  -220,  -220,   232,    27,
      27,   243,   138,   224,  -220,   165,  -220,   141,   187,    23,
      48,  -220,   258,    43,  -220,    23,   101,    27,  -220,    17,
    -220,  -220,   169,  -220,   178,   380,   176,  -220,  -220,    27,
     244,   201,  -220,   112,   112,  -220,  -220,  -220,  -220,    -8,
      -8,  -220,  -220,  -220,  -220,  -220,   246,   241,  -220,   248,
    -220,  -220,    27,  -220,  -220,   356,   196,    45,  -220,  -220,
    -220,  -220,  -220,   249,   252,   258,   255,   264,   265,    27,
     260,    27,   250,   256,   258,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,   272,  -220,   270,   271,   262,   169,    43,    27,
    -220,  -220,  -220,  -220,  -220,    27,  -220,  -220,  -220,  -220,
    -220,    23,    27,    27,   251,    27,  -220,  -220,   283,  -220,
      27,   263,   258,  -220,  -220,  -220,  -220,  -220,  -220,   277,
     296,  -220,  -220,   304,   305,   307,   308,   316,  -220,   309,
     258,  -220,  -220,  -220,   258,   258,    27,   258,    27,   258,
    -220,   335,  -220,   313,  -220,   321,  -220,   258,   323,    27,
    -220,  -220,  -220
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,   332,  -220,  -220,  -220,  -220,  -220,   -80,
       7,  -220,  -220,  -220,   298,   -83,  -220,   -92,  -220,  -220,
    -220,  -220,  -220,  -220,   199,  -130,  -220,   109,  -220,  -220,
    -220,   257,   206,  -220,    -1,     0,   -20,  -220,   -53,  -220,
    -220,   189,   238,  -123,   -88,  -220,  -220,  -157,  -220,    61,
    -220,  -220,  -220,  -220,  -220,  -219,  -220,  -220,  -220,  -139,
     -43,   -42,  -220,  -126,  -220,  -220,   240,   266,  -220,  -220,
    -220,    37,   203,  -220,    55,   -50,   128,  -220,  -220,   254
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -60
static const yytype_int16 yytable[] =
{
      71,   103,    25,    40,    26,    97,    71,    16,   149,   184,
     107,   109,   146,   188,   113,    34,   117,   118,   226,    16,
     201,   154,     1,   115,    35,    36,   267,     1,     1,   132,
     133,   134,    55,   225,    56,    57,    58,    59,    60,    61,
      62,    63,   225,    64,     1,   156,    94,   157,   244,     2,
       3,     3,    97,    71,     2,    65,   149,   254,   149,   285,
       4,   124,   125,    66,    67,   240,   201,   156,   115,   157,
     292,   227,   114,   223,    68,     4,     4,   115,   227,    27,
     241,   200,   181,   182,   183,     5,     6,     7,     8,     9,
     260,    10,    29,     8,     9,   271,    10,    -7,   189,    37,
      53,   158,   159,   -51,   149,    48,     1,     2,   155,   261,
      98,    43,   238,   280,   166,    71,    45,   281,   282,   232,
     284,    47,   286,   165,    46,   157,   114,   130,   131,   156,
     290,   157,     4,   126,   127,   128,   129,   -36,     4,    40,
       1,     2,    51,     5,     6,     7,     8,     9,   199,    10,
     237,    52,    97,    71,    94,    25,   159,    41,    89,    42,
     155,   173,   174,     3,   144,   166,   145,   249,   251,    71,
      90,   191,     4,   145,   194,   259,   195,     5,     6,     7,
       8,     9,    99,    10,     2,   179,   180,    71,   108,   108,
     111,   112,   108,     2,   108,   108,   120,   228,   121,   229,
     263,   264,     2,   249,   165,   230,   157,    55,   269,    56,
      57,    58,    59,    60,    61,    62,    63,   122,    64,   123,
       5,     6,     7,     8,     9,   135,    10,   163,   -59,   239,
     110,    48,     8,     9,   283,    10,   249,   185,    66,    67,
     199,     8,     9,   164,    10,   168,   169,   249,   190,    68,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,    55,   192,    56,    57,    58,    59,    60,
      61,    62,    63,   233,    64,   234,   235,   242,   202,   236,
     243,   136,   137,   245,   246,   247,    65,   138,   250,   253,
      52,   252,   255,   258,    66,    67,   139,   108,   140,   256,
     257,   265,   141,   268,   270,    68,   272,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,    55,     2,    56,
      57,    58,    59,    60,    61,    62,    63,   273,    64,   175,
     176,   177,   178,   274,   275,   276,   278,   277,   279,   287,
      65,   289,   288,   291,    30,    93,   142,   196,    66,    67,
     262,   193,   167,   231,     5,     6,     7,     8,     9,    68,
      10,    55,   171,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,   170,    55,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    65,    64,     2,     0,    95,   172,
       0,     0,    66,    67,     0,     0,     0,   119,     0,     0,
       0,     0,     0,    68,     0,    66,    67,     0,   165,     0,
     157,     0,     0,     0,     0,     0,    68,     4,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,    10
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,     4,    48,    48,     0,   100,   135,
      60,    61,    95,   139,    64,    16,    66,    67,   157,    12,
     150,   101,     5,    65,    17,    18,   245,     5,     5,    37,
      38,    39,     5,   156,     7,     8,     9,    10,    11,    12,
      13,    14,   165,    16,     5,    28,    47,    30,   205,     6,
      28,    28,    95,    95,     6,    28,   148,   214,   150,   278,
      37,    25,    26,    36,    37,    20,   196,    28,   110,    30,
     289,   159,    65,   153,    47,    37,    37,   119,   166,     5,
      35,    33,   132,   133,   134,    42,    43,    44,    45,    46,
     229,    48,     0,    45,    46,   252,    48,    32,   140,     5,
      39,   102,   102,    32,   196,    40,     5,     6,   101,   235,
      49,    29,   195,   270,   114,   157,    32,   274,   275,   169,
     277,    35,   279,    28,    20,    30,   119,    11,    12,    28,
     287,    30,    37,    21,    22,    23,    24,    32,    37,   159,
       5,     6,    32,    42,    43,    44,    45,    46,   149,    48,
     192,    32,   195,   195,   155,   156,   156,    28,    32,    30,
     153,   124,   125,    28,    33,   165,    35,   209,   211,   211,
       5,    33,    37,    35,    33,   228,    35,    42,    43,    44,
      45,    46,    32,    48,     6,   130,   131,   229,    60,    61,
      62,    63,    64,     6,    66,    67,    68,    28,    31,    30,
     242,   243,     6,   245,    28,    27,    30,     5,   250,     7,
       8,     9,    10,    11,    12,    13,    14,    17,    16,    18,
      42,    43,    44,    45,    46,    40,    48,    29,    40,    33,
      28,    40,    45,    46,   276,    48,   278,     5,    36,    37,
     241,    45,    46,    35,    48,    29,    29,   289,     5,    47,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     5,    40,     7,     8,     9,    10,    11,
      12,    13,    14,    29,    16,    29,    35,    28,    20,    31,
      28,    13,    14,    28,    20,    20,    28,    19,    28,    33,
      32,    41,    20,    31,    36,    37,    28,   169,    30,    29,
      29,    50,    34,    20,    41,    47,    29,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    31,    16,   126,
     127,   128,   129,    29,    29,    28,    20,    29,    29,     4,
      28,    20,    29,    20,    12,    47,    89,   148,    36,    37,
     241,   145,   114,   164,    42,    43,    44,    45,    46,    47,
      48,     5,   122,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,   119,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    28,    16,     6,    -1,    32,   123,
      -1,    -1,    36,    37,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    36,    37,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    47,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,    28,    37,    42,    43,    44,    45,    46,
      48,    60,    61,    62,    63,    68,    69,    70,    76,    77,
      82,    87,    93,    94,    95,    93,    94,     5,    89,     0,
      62,    71,    72,    73,    93,    69,    69,     5,    80,    65,
      95,    28,    30,    29,    88,    32,    20,    35,    40,    64,
      78,    32,    32,   108,    96,     5,     7,     8,     9,    10,
      11,    12,    13,    14,    16,    28,    36,    37,    47,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    32,
       5,    90,    91,    73,    93,    32,    74,   119,   108,    32,
      81,   109,    69,    97,    98,    99,   100,   134,   135,   134,
      28,   135,   135,   134,    69,   120,   138,   134,   134,    28,
     135,    31,    17,    18,    25,    26,    21,    22,    23,    24,
      11,    12,    37,    38,    39,    40,    13,    14,    19,    28,
      30,    34,    90,    92,    33,    35,    74,    75,    79,    76,
      83,    84,    66,    67,    68,    69,    28,    30,    93,    94,
     101,   102,   103,    29,    35,    28,    94,   101,    29,    29,
     138,   125,   126,   130,   130,   131,   131,   131,   131,   133,
     133,   134,   134,   134,   122,     5,   116,   117,   122,   120,
       5,    33,    40,    91,    33,    35,    83,    85,    86,    93,
      33,    84,    20,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,   104,   105,   106,   107,   108,   110,   111,
     112,   115,   120,    68,    97,   102,   118,   103,    28,    30,
      27,   100,   134,    29,    29,    35,    31,   120,    74,    33,
      20,    35,    28,    28,   106,    28,    20,    20,   114,   120,
      28,   119,    41,    33,   106,    20,    29,    29,    31,    97,
     118,   122,    86,   120,   120,    50,   113,   114,    20,   120,
      41,   106,    29,    31,    29,    29,    28,    29,    20,    29,
     106,   106,   106,   120,   106,   114,   106,     4,    29,    20,
     106,    20,   114
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
#line 23 "parse.y"
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[(1) - (1)]),NIL); checkForwardReference();}
    break;

  case 3:
#line 26 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 4:
#line 27 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 5:
#line 30 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 6:
#line 31 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 7:
#line 34 "parse.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));}
    break;

  case 8:
#line 35 "parse.y"
    {(yyval)=setFunctionDeclaratorBody((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));}
    break;

  case 9:
#line 36 "parse.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(1) - (1)]),makeSpecifier(int_type,0));}
    break;

  case 10:
#line 37 "parse.y"
    {(yyval)=setFunctionDeclaratorBody((yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 11:
#line 40 "parse.y"
    {(yyval)=NIL;}
    break;

  case 12:
#line 41 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 13:
#line 44 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 14:
#line 45 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 15:
#line 48 "parse.y"
    {(yyval)=setDeclaratorListSpecifier((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]));}
    break;

  case 16:
#line 51 "parse.y"
    {(yyval)=makeSpecifier((yyvsp[(1) - (1)]),0);}
    break;

  case 17:
#line 52 "parse.y"
    {(yyval)=makeSpecifier(0,(yyvsp[(1) - (1)]));}
    break;

  case 18:
#line 53 "parse.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),0);}
    break;

  case 19:
#line 54 "parse.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]),0,(yyvsp[(1) - (2)]));}
    break;

  case 20:
#line 57 "parse.y"
    {(yyval)=S_AUTO;}
    break;

  case 21:
#line 58 "parse.y"
    {(yyval)=S_STATIC;}
    break;

  case 22:
#line 59 "parse.y"
    {(yyval)=S_TYPEDEF;}
    break;

  case 23:
#line 62 "parse.y"
    {(yyval)=makeDummyIdentifier();}
    break;

  case 24:
#line 63 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 25:
#line 66 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 26:
#line 67 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 27:
#line 70 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 28:
#line 71 "parse.y"
    {(yyval)=setDeclaratorInit((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 29:
#line 74 "parse.y"
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[(1) - (1)]),NIL);}
    break;

  case 30:
#line 75 "parse.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 31:
#line 78 "parse.y"
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[(1) - (1)]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
    break;

  case 32:
#line 79 "parse.y"
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 33:
#line 82 "parse.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 34:
#line 83 "parse.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 35:
#line 84 "parse.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 36:
#line 87 "parse.y"
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),ID_STRUCT);}
    break;

  case 37:
#line 88 "parse.y"
    { (yyval)=current_id;current_level++;}
    break;

  case 38:
#line 89 "parse.y"
    {checkForwardReference();(yyval)=setTypeField((yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]));current_level--; current_id=(yyvsp[(5) - (7)]);}
    break;

  case 39:
#line 90 "parse.y"
    {(yyval)=makeType((yyvsp[(1) - (1)]));}
    break;

  case 40:
#line 90 "parse.y"
    {(yyval)=current_id;current_level++;}
    break;

  case 41:
#line 91 "parse.y"
    {checkForwardReference();(yyval)=setTypeField((yyvsp[(2) - (6)]),(yyvsp[(5) - (6)])); current_level--;current_id=(yyvsp[(4) - (6)]);}
    break;

  case 42:
#line 92 "parse.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),ID_STRUCT);}
    break;

  case 43:
#line 95 "parse.y"
    {(yyval)=T_STRUCT;}
    break;

  case 44:
#line 96 "parse.y"
    {(yyval)=T_UNION;}
    break;

  case 45:
#line 99 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 46:
#line 100 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 47:
#line 103 "parse.y"
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]));}
    break;

  case 48:
#line 106 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 49:
#line 107 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 50:
#line 110 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 51:
#line 113 "parse.y"
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[(2) - (2)]),ID_ENUM);}
    break;

  case 52:
#line 114 "parse.y"
    {(yyval)=setTypeField((yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));}
    break;

  case 53:
#line 115 "parse.y"
    {(yyval)=makeType(T_ENUM);}
    break;

  case 54:
#line 116 "parse.y"
    {(yyval)=setTypeField((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));}
    break;

  case 55:
#line 117 "parse.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[(2) - (2)]),ID_ENUM);}
    break;

  case 56:
#line 120 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 57:
#line 121 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 58:
#line 124 "parse.y"
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[(1) - (1)])),ID_ENUM_LITERAL);}
    break;

  case 59:
#line 125 "parse.y"
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[(1) - (1)])),ID_ENUM_LITERAL);}
    break;

  case 60:
#line 126 "parse.y"
    {(yyval)=setDeclaratorInit((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));}
    break;

  case 61:
#line 129 "parse.y"
    {(yyval)=setDeclaratorElementType((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));}
    break;

  case 62:
#line 130 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 63:
#line 133 "parse.y"
    {(yyval)=makeType(T_POINTER);}
    break;

  case 64:
#line 134 "parse.y"
    {(yyval)=setTypeElementType((yyvsp[(2) - (2)]),makeType(T_POINTER));}
    break;

  case 65:
#line 137 "parse.y"
    {(yyval)=makeIdentifier((yyvsp[(1) - (1)]));}
    break;

  case 66:
#line 138 "parse.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 67:
#line 140 "parse.y"
    {(yyval)=setDeclaratorElementType((yyvsp[(1) - (4)]),setTypeExpr(makeType(T_ARRAY),(yyvsp[(3) - (4)])));}
    break;

  case 68:
#line 141 "parse.y"
    {(yyval)=current_id;current_level++;}
    break;

  case 69:
#line 143 "parse.y"
    {checkForwardReference();current_id=(yyvsp[(3) - (5)]);current_level--; (yyval)=setDeclaratorElementType((yyvsp[(1) - (5)]),setTypeField(makeType(T_FUNC),(yyvsp[(4) - (5)])));}
    break;

  case 70:
#line 146 "parse.y"
    {(yyval)=NIL;}
    break;

  case 71:
#line 147 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 72:
#line 150 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 73:
#line 151 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
    break;

  case 74:
#line 154 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 75:
#line 155 "parse.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 76:
#line 158 "parse.y"
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));}
    break;

  case 77:
#line 159 "parse.y"
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[(2) - (2)])),(yyvsp[(1) - (2)]));}
    break;

  case 78:
#line 162 "parse.y"
    {(yyval)=NIL;}
    break;

  case 79:
#line 163 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 80:
#line 166 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 81:
#line 167 "parse.y"
    {(yyval)=makeType(T_POINTER);}
    break;

  case 82:
#line 168 "parse.y"
    {(yyval)=setTypeElementType((yyvsp[(2) - (2)]),makeType(T_POINTER));}
    break;

  case 83:
#line 171 "parse.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 84:
#line 172 "parse.y"
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[(2) - (3)]));}
    break;

  case 85:
#line 173 "parse.y"
    {(yyval)=setTypeElementType((yyvsp[(1) - (4)]),setTypeExpr(makeType(T_ARRAY),(yyvsp[(3) - (4)])));}
    break;

  case 86:
#line 174 "parse.y"
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[(2) - (3)]));}
    break;

  case 87:
#line 175 "parse.y"
    {(yyval)=setTypeElementType((yyvsp[(1) - (4)]),setTypeExpr(makeType(T_FUNC),(yyvsp[(3) - (4)])));}
    break;

  case 88:
#line 178 "parse.y"
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
    break;

  case 89:
#line 179 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 90:
#line 182 "parse.y"
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[(1) - (1)]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
    break;

  case 91:
#line 183 "parse.y"
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 92:
#line 186 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 93:
#line 187 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 94:
#line 188 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 95:
#line 189 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 96:
#line 190 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 97:
#line 191 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 98:
#line 194 "parse.y"
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[(2) - (4)]),NIL,(yyvsp[(4) - (4)]));}
    break;

  case 99:
#line 195 "parse.y"
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[(3) - (3)]),NIL);}
    break;

  case 100:
#line 198 "parse.y"
    {(yyval)=current_id;current_level++;}
    break;

  case 101:
#line 200 "parse.y"
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[(3) - (5)]),NIL,(yyvsp[(4) - (5)])); current_id=(yyvsp[(2) - (5)]); current_level--;}
    break;

  case 102:
#line 203 "parse.y"
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
    break;

  case 103:
#line 204 "parse.y"
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[(1) - (2)]),NIL);}
    break;

  case 104:
#line 207 "parse.y"
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));}
    break;

  case 105:
#line 208 "parse.y"
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)]));}
    break;

  case 106:
#line 209 "parse.y"
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));}
    break;

  case 107:
#line 212 "parse.y"
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));}
    break;

  case 108:
#line 213 "parse.y"
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[(2) - (7)]),NIL,(yyvsp[(5) - (7)]));}
    break;

  case 109:
#line 214 "parse.y"
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));}
    break;

  case 110:
#line 217 "parse.y"
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));}
    break;

  case 111:
#line 220 "parse.y"
    {(yyval)=NIL;}
    break;

  case 112:
#line 221 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 113:
#line 224 "parse.y"
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[(2) - (3)]),NIL);}
    break;

  case 114:
#line 225 "parse.y"
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
    break;

  case 115:
#line 226 "parse.y"
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
    break;

  case 116:
#line 229 "parse.y"
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
    break;

  case 117:
#line 230 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 118:
#line 233 "parse.y"
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[(1) - (1)]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
    break;

  case 119:
#line 234 "parse.y"
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 120:
#line 237 "parse.y"
    {(yyval)=NIL;}
    break;

  case 121:
#line 238 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 122:
#line 241 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 123:
#line 244 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 124:
#line 247 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 125:
#line 250 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 126:
#line 251 "parse.y"
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 127:
#line 254 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 128:
#line 257 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 129:
#line 258 "parse.y"
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 130:
#line 261 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 131:
#line 262 "parse.y"
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 132:
#line 265 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 133:
#line 268 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 134:
#line 271 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 135:
#line 274 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 136:
#line 275 "parse.y"
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 137:
#line 276 "parse.y"
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 138:
#line 279 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 139:
#line 280 "parse.y"
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 140:
#line 281 "parse.y"
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 141:
#line 282 "parse.y"
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 142:
#line 283 "parse.y"
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 143:
#line 286 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 144:
#line 289 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 145:
#line 290 "parse.y"
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 146:
#line 291 "parse.y"
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 147:
#line 294 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 148:
#line 295 "parse.y"
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 149:
#line 296 "parse.y"
    {(yyval)= makeNode(N_EXP_DIV,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 150:
#line 297 "parse.y"
    {(yyval)= makeNode(N_EXP_MOD,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 151:
#line 300 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 152:
#line 301 "parse.y"
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[(2) - (4)]),NIL,(yyvsp[(4) - (4)]));}
    break;

  case 153:
#line 304 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 154:
#line 305 "parse.y"
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 155:
#line 306 "parse.y"
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 156:
#line 307 "parse.y"
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 157:
#line 308 "parse.y"
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 158:
#line 309 "parse.y"
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 159:
#line 310 "parse.y"
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 160:
#line 311 "parse.y"
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 161:
#line 312 "parse.y"
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[(2) - (2)]),NIL);}
    break;

  case 162:
#line 313 "parse.y"
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[(3) - (4)]),NIL);}
    break;

  case 163:
#line 316 "parse.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 164:
#line 317 "parse.y"
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[(1) - (4)]),NIL,(yyvsp[(3) - (4)]));}
    break;

  case 165:
#line 318 "parse.y"
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[(1) - (4)]),NIL,(yyvsp[(3) - (4)]));}
    break;

  case 166:
#line 319 "parse.y"
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 167:
#line 320 "parse.y"
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));}
    break;

  case 168:
#line 321 "parse.y"
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[(1) - (2)]),NIL);}
    break;

  case 169:
#line 322 "parse.y"
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[(1) - (2)]),NIL);}
    break;

  case 170:
#line 325 "parse.y"
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[(1) - (1)])),NIL);}
    break;

  case 171:
#line 326 "parse.y"
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[(1) - (1)]),NIL);}
    break;

  case 172:
#line 327 "parse.y"
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[(1) - (1)]),NIL);}
    break;

  case 173:
#line 328 "parse.y"
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[(1) - (1)]),NIL);}
    break;

  case 174:
#line 329 "parse.y"
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[(1) - (1)]),NIL);}
    break;

  case 175:
#line 330 "parse.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 176:
#line 333 "parse.y"
    {(yyval)=setTypeNameSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));}
    break;


/* Line 1267 of yacc.c.  */
#line 2638 "y.tab.c"
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


#line 336 "parse.y"


extern char *yytext;
yyerror(char *s) {
	syntax_err++;
	printf("line %d: %s near %s \n", line_no, s,yytext);
	exit(1);
}
