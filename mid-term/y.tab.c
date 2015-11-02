/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20141128

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parse.y"

#include "type.h"
#include "syntax.h"

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

#line 32 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IF_PREC 257
#define ELSE_SYM 258
#define IDENTIFIER 259
#define TYPE_IDENTIFIER 260
#define FLOAT_CONSTANT 261
#define INTEGER_CONSTANT 262
#define CHARACTER_CONSTANT 263
#define STRING_LITERAL 264
#define PLUS 265
#define MINUS 266
#define PLUSPLUS 267
#define MINUSMINUS 268
#define BAR 269
#define AMP 270
#define BARBAR 271
#define AMPAMP 272
#define ARROW 273
#define SEMICOLON 274
#define LSS 275
#define GTR 276
#define LEQ 277
#define GEQ 278
#define EQL 279
#define NEQ 280
#define DOTDOTDOT 281
#define LP 282
#define RP 283
#define LB 284
#define RB 285
#define LR 286
#define RR 287
#define PERIOD 288
#define COMMA 289
#define EXCL 290
#define STAR 291
#define SLASH 292
#define PERCENT 293
#define ASSIGN 294
#define COLON 295
#define QUESTION 296
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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    8,    3,    9,    3,   10,
   10,   11,   11,    4,    5,    5,    5,    5,   14,   14,
   14,   12,   12,   15,   15,   16,   16,   17,   17,   19,
   19,   13,   13,   13,   23,   25,   20,   26,   27,   20,
   20,   22,   22,   24,   24,   28,   29,   29,   30,   31,
   21,   33,   21,   21,   32,   32,   34,   35,   34,    6,
    6,   37,   37,   38,   38,   38,   41,   38,   40,   40,
   42,   42,   43,   43,   44,   44,   45,   45,   46,   46,
   46,   47,   47,   47,   47,   47,   48,   48,   49,   49,
   50,   50,   50,   50,   50,   50,   51,   51,   56,    7,
   52,   52,   53,   53,   53,   54,   54,   54,   57,   58,
   58,   55,   55,   55,   59,   59,   60,   60,   39,   39,
   18,   36,   62,   61,   61,   63,   63,   65,   65,   66,
   66,   67,   68,   69,   70,   70,   70,   71,   71,   71,
   71,   71,   72,   73,   73,   73,   74,   74,   74,   74,
   75,   75,   64,   64,   64,   64,   64,   64,   64,   64,
   64,   64,   77,   77,   77,   77,   77,   77,   77,   78,
   78,   78,   78,   78,   78,   76,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    1,    0,    4,    0,    3,    0,
    1,    1,    2,    3,    1,    1,    2,    2,    1,    1,
    1,    0,    1,    1,    3,    1,    3,    1,    3,    1,
    3,    1,    1,    1,    0,    0,    7,    0,    0,    6,
    2,    1,    1,    1,    2,    3,    1,    3,    1,    0,
    6,    0,    5,    2,    1,    3,    1,    0,    4,    2,
    1,    1,    2,    1,    3,    4,    0,    5,    0,    1,
    1,    3,    1,    3,    2,    2,    0,    1,    1,    1,
    2,    3,    3,    4,    3,    4,    0,    1,    1,    2,
    1,    1,    1,    1,    1,    1,    4,    3,    0,    5,
    1,    2,    5,    7,    5,    5,    7,    5,    5,    0,
    1,    3,    2,    2,    0,    1,    1,    3,    0,    1,
    1,    1,    1,    1,    3,    1,    5,    1,    3,    1,
    3,    1,    1,    1,    1,    3,    3,    1,    3,    3,
    3,    3,    1,    1,    3,    3,    1,    3,    3,    3,
    1,    4,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    4,    1,    4,    4,    3,    3,    2,    2,    1,
    1,    1,    1,    1,    3,    2,
};
static const YYINT yydefred[] = {                         0,
   64,   34,    0,    0,   19,   20,   21,   42,    0,   43,
    0,    0,    2,    4,    5,    0,    8,    0,    0,   32,
   33,    0,    0,    0,    0,   63,    0,    0,    3,    0,
    0,    0,   24,    0,   17,   18,    0,    0,    0,   67,
    0,   65,    0,    0,    0,    0,   14,    0,   99,    9,
    0,   39,    0,  170,  172,  171,  173,  174,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  120,  121,    0,
  123,  122,  124,    0,    0,    0,  130,  132,  133,    0,
    0,  138,    0,    0,  147,    0,  163,    0,    0,    0,
   55,    0,   27,   28,    7,    0,   25,    0,   36,    0,
    0,    0,   70,    0,   73,  151,  160,  159,    0,  154,
  155,  156,    0,    0,    0,  158,  157,    0,  161,   66,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  168,  169,    0,    0,    0,
    0,    0,    0,   53,    0,   30,    0,   12,    0,    0,
    0,    0,    0,    0,   44,    0,    0,   75,    0,   76,
   78,    0,   68,    0,    0,    0,  176,  175,    0,    0,
  125,    0,    0,  131,    0,    0,  139,  140,  141,  142,
    0,    0,  148,  149,  150,  167,    0,    0,  117,    0,
  166,   51,    0,   56,   29,    0,  101,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   92,    0,    0,
    0,   89,   91,   93,   94,   95,   96,   13,    0,   49,
    0,   47,   40,   45,    0,    0,    0,    0,    0,    0,
   72,   74,  152,  162,    0,  165,    0,  164,   59,   31,
    0,    0,    0,    0,  113,  114,  111,    0,    0,    0,
    0,  102,  100,   90,   37,   46,    0,   85,   82,   83,
    0,    0,  127,  118,    0,    0,    0,    0,    0,  112,
    0,    0,   98,   48,   86,   84,    0,    0,    0,    0,
    0,    0,   97,    0,  106,    0,  108,    0,  105,    0,
    0,    0,  104,  107,  109,
};
static const YYINT yydgoto[] = {                         11,
   12,   13,   14,   15,  101,   17,  208,   46,   34,  150,
  151,   31,   18,   19,   32,   33,   93,   68,  147,   20,
   21,   22,   51,  154,  152,   38,  100,  155,  221,  222,
   43,   90,   28,   91,  143,  209,   23,   24,   70,  225,
   53,  103,  104,  105,  160,  161,  162,  210,  211,  212,
  213,  214,  215,  216,  217,   98,  268,  248,  187,  188,
   71,   72,   73,   74,   75,   76,   77,   78,   79,   80,
   81,   82,   83,   84,   85,  115,   86,   87,
};
static const YYINT yysindex[] = {                        15,
    0,    0, -241, -268,    0,    0,    0,    0, -232,    0,
    0,   15,    0,    0,    0, -241,    0, -127, -127,    0,
    0, -229, -249, -169, -236,    0,    0, -221,    0, -225,
 -202, -213,    0, -205,    0,    0,    0, -201, -169,    0,
  294,    0, -191, -160,  284, -205,    0, -241,    0,    0,
 -176,    0, -127,    0,    0,    0,    0,    0,  294,  294,
  336,  336,  294,  180,  294,  294,  346,    0,    0, -171,
    0,    0,    0, -150, -257, -121,    0,    0,    0, -177,
   58,    0,  -87, -144,    0,  221,    0, -160,    0,  -74,
    0,  284,    0,    0,    0, -225,    0, -127,    0, -163,
 -242,  -86,    0, -128,    0,    0,    0,    0,  294,    0,
    0,    0, -262,  -79,  -75,    0,    0,  180,    0,    0,
  294,  294,  294,  294,  294,  294,  294,  294,  294,  294,
  294,  294,  294,  294,  294,    0,    0,  -50,  294,  294,
  -41,  -62,  -57,    0, -160,    0,  -58,    0, -241,  147,
 -127, -163, -241, -209,    0,  -65,  294,    0, -238,    0,
    0, -122,    0,  359,  -21,  -17,    0,    0,  294,  -55,
    0, -121,  -44,    0,   58,   58,    0,    0,    0,    0,
 -144, -144,    0,    0,    0,    0,  -12,  -34,    0,  -23,
    0,    0,  294,    0,    0,  284,    0,  -16,   -1,  147,
    1,   11,   34,  294,   27,  294,   25,    0,   36,   35,
  147,    0,    0,    0,    0,    0,    0,    0,  -80,    0,
 -246,    0,    0,    0,   38,   42,   45, -122, -127,  294,
    0,    0,    0,    0,  294,    0,  294,    0,    0,    0,
  294,  294,   26,  294,    0,    0,    0,   64,  294,   68,
  147,    0,    0,    0,    0,    0, -241,    0,    0,    0,
   81,   55,    0,    0,   82,   84,   70,   85,   95,    0,
   87,  147,    0,    0,    0,    0,  147,  147,  294,  147,
  294,  147,    0,  113,    0,   89,    0,   99,    0,  147,
  101,  294,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0, -196,    0,    0,    0,    0, -201,    0,
    0,  377,    0,    0,    0,  106,    0,  102,  202,    0,
    0,  103,    0, -131,    0,    0,  213,    0,    0, -178,
    0,  107,    0,    0,    0,    0,  241,    0,   43,    0,
  105,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  104,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  430,  -99,  614,    0,    0,    0,  358,
  559,    0,  540,  462,    0,  398,    0,    0, -214,    0,
    0,    0,    0,    0,    0, -207,    0,  -18,    0,    0,
 -147,    0,    0,  109,    0,    0,    0,    0,    0,    0,
    0,    0,  112,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  124,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  106,  129,
   37,    0,    0,    0,    0,  104,  105,    0, -102,    0,
    0,  -91,    0,    0,  104,  135,    0,    0,    0,    0,
    0,  631,    0,    0,  578,  597,    0,    0,    0,    0,
  488,  514,    0,    0,    0,    0,    0,  136,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  114,    0,    0,    0,    0,    0,    0,
  133,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -90,  104,  105,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  114,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  114,    0,    0,   92,    0,    0,    0,    0,    0,    0,
    0,  139,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  411,    0,  -83,   71,   -3,  -10,    0,    0,    0,
    0,    0,  -88,    0,    0,  376,  -84,  -40,    0,    0,
    0,    0,    0,  273,    0,    0,    0, -145,    0,  169,
    0,  339,    0,  283,    0,  -39,    3,  -20, -153,  -52,
    0,    0,    0,  266,  318,  -56, -140,    0,    0,  -66,
    0,    0,    0,    0,    0,    0,    0, -233,    0,    0,
 -105,    0,  197,   -5,    0,  312,  311,    0,    0,    0,
   57,  130,    0,   69,  -28,  345,    0,    0,
};
#define YYTABLESIZE 927
static const YYINT yytable[] = {                         25,
  102,   69,   39,  227,   94,   69,   26,  146,  224,    1,
  269,  153,   30,  122,  148,  171,    1,    1,  228,  165,
    1,  157,    4,   50,  114,  228,   27,  256,    4,   37,
  107,  108,    3,  189,  112,   95,  116,  117,  123,  156,
    3,  157,  257,  156,   96,  157,   42,  288,    4,    4,
    2,   94,   69,  106,  106,  110,  111,  106,  295,  106,
  106,  119,   62,  153,   44,  153,   26,  218,   45,  114,
   16,   47,   57,  224,   57,   48,  262,  223,  114,   58,
   49,   26,   16,  173,   52,   62,   62,   62,   35,   36,
    8,    9,   62,   10,   88,   26,    2,  158,   89,  226,
  190,  125,  126,  159,  183,  184,  185,    6,  226,   99,
   26,  240,   40,  120,   41,  166,  106,   69,  106,  106,
  106,  106,  106,  106,  106,  106,  106,  106,  106,  106,
  153,  264,    2,  243,  113,   77,    8,    9,   39,   10,
  233,   77,   61,  121,  254,   96,  133,  134,  135,  220,
  124,   61,   25,  239,   61,   94,   69,   61,  159,  229,
  164,  230,   61,  106,  247,  250,   69,  166,  149,    5,
    6,    7,    8,    9,  126,   10,  261,  131,  132,    2,
   80,  175,  176,  126,  273,  126,   80,  126,  113,  126,
   69,   79,   81,    1,    2,  126,  163,   79,   81,  181,
  182,  265,  266,  168,  247,  283,  255,  169,  186,  271,
  284,  285,  144,  287,  145,  289,  156,  191,  157,    8,
    9,  149,   10,  293,  192,    4,  145,  234,  195,  106,
  196,    5,    6,    7,    8,    9,  193,   10,    2,  286,
   10,  247,   10,   10,   10,   10,   10,   10,   10,   10,
  235,   10,  247,  220,  237,   10,  177,  178,  179,  180,
  165,  238,  157,   10,  165,  241,  157,   10,   10,    4,
  236,   10,   10,    1,    2,    5,    6,    7,    8,    9,
  242,   10,  244,   10,  245,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   11,    3,   11,   11,   11,
   11,   11,   11,   11,   11,    4,   11,  246,  249,  252,
   11,    5,    6,    7,    8,    9,   60,   10,   11,  251,
  258,  253,   11,   11,  259,   60,   11,   11,   60,  260,
  267,   60,  127,  128,  129,  130,   60,  270,   11,  276,
   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,
  103,  279,  103,  103,  103,  103,  103,  103,  103,  103,
   15,  103,  272,  275,  277,  103,  278,  280,  281,  282,
  290,  291,  292,  103,  294,   15,    1,  103,  103,   22,
   23,  103,  103,   15,   15,   15,   69,  110,   38,  119,
   15,   71,   15,  103,   77,  103,  103,  103,  103,  103,
  103,  103,  103,  103,  103,   54,  115,   55,   56,   57,
   58,   59,   60,   61,   62,   87,   63,   80,  116,   88,
  197,  110,   29,   97,  219,  274,  142,  194,   64,  232,
  167,  263,   49,  172,  174,    0,   65,   66,   54,    2,
   55,   56,   57,   58,   59,   60,   61,   62,   67,   63,
  198,  199,  200,  201,  202,  203,  204,  205,  206,  207,
   16,   64,  170,    0,    0,    0,    0,    0,    0,   65,
   66,   54,   54,    0,    0,   16,    5,    6,    7,    8,
    9,   67,   10,   16,   16,   16,   54,  136,  137,    0,
   16,    0,   16,  138,   54,   54,   54,    0,   50,   41,
   41,   54,  139,   54,  140,    0,    0,    0,  141,   54,
   54,   54,   54,   54,   41,   54,    0,    0,    0,    0,
    0,    0,   41,   41,   41,    0,   35,    0,    0,   41,
    0,   41,    0,    0,    0,    0,    0,   41,   41,   41,
   41,   41,   54,   41,   55,   56,   57,   58,   59,   60,
   61,   62,   54,   63,   55,   56,   57,   58,   59,   60,
   61,   62,    0,   63,    0,   64,    0,    0,    0,   92,
    0,    0,    0,   65,   66,   64,    0,    0,    0,    0,
    0,    0,    0,   65,   66,   67,    0,    0,    0,    0,
    0,    0,    0,    0,   54,   67,   55,   56,   57,   58,
   59,   60,   61,   62,   54,   63,   55,   56,   57,   58,
   59,   60,   61,   62,    0,   63,    0,  109,    2,    0,
    0,    0,    0,    0,    0,   65,   66,  118,  134,  134,
    0,  134,    0,    0,    0,   65,   66,   67,    0,  231,
  134,    0,  134,    0,  134,    0,  134,   67,    0,    0,
    0,    0,  134,  134,    0,    5,    6,    7,    8,    9,
    0,   10,  153,  153,    0,    0,    0,    0,  153,  153,
    0,  153,  153,  153,  153,  153,  153,  153,    0,    0,
  153,    0,  153,    0,  153,    0,  153,    0,  153,  153,
  153,  153,  153,  153,  151,  151,    0,    0,    0,    0,
  151,  151,    0,  151,  151,  151,  151,  151,  151,  151,
    0,    0,  151,    0,  151,    0,  151,    0,  151,    0,
  151,  151,  151,    0,  151,  151,  144,  144,    0,    0,
    0,    0,  144,  144,    0,  144,  144,  144,  144,  144,
  144,  144,    0,    0,  144,    0,  144,    0,  144,    0,
  144,    0,  145,  145,    0,    0,  144,  144,  145,  145,
    0,  145,  145,  145,  145,  145,  145,  145,    0,    0,
  145,    0,  145,    0,  145,    0,  145,    0,  146,  146,
    0,    0,  145,  145,  146,  146,    0,  146,  146,  146,
  146,  146,  146,  146,    0,    0,  146,    0,  146,    0,
  146,    0,  146,    0,    0,    0,    0,    0,  146,  146,
  143,  143,    0,  143,  143,  143,  143,  143,  143,  143,
    0,    0,  143,    0,  143,    0,  143,    0,  143,  135,
  135,    0,  135,    0,  143,  143,    0,  135,  135,    0,
    0,  135,    0,  135,    0,  135,    0,  135,  136,  136,
    0,  136,    0,  135,  135,    0,  136,  136,    0,    0,
  136,    0,  136,    0,  136,    0,  136,  137,  137,    0,
  137,    0,  136,  136,    0,  137,  137,    0,    0,  137,
    0,  137,    0,  137,  128,  137,    0,  128,    0,    0,
    0,  137,  137,    0,    0,    0,  128,    0,  128,    0,
  128,  129,  128,    0,  129,    0,    0,    0,  128,  128,
    0,    0,    0,  129,    0,  129,    0,  129,    0,  129,
    0,    0,    0,    0,    0,  129,  129,
};
static const YYINT yycheck[] = {                          3,
   53,   41,   23,  157,   45,   45,    4,   92,  154,  259,
  244,  100,   16,  271,   98,  121,  259,  259,  159,  282,
  259,  284,  291,   34,   64,  166,  259,  274,  291,  259,
   59,   60,  282,  139,   63,   46,   65,   66,  296,  282,
  282,  284,  289,  282,   48,  284,  283,  281,  291,  291,
  260,   92,   92,   59,   60,   61,   62,   63,  292,   65,
   66,   67,  259,  152,  286,  154,  274,  151,  294,  109,
    0,  274,  287,  219,  289,  289,  230,  287,  118,  294,
  286,  289,   12,  123,  286,  282,  283,  284,   18,   19,
  300,  301,  289,  303,  286,  274,  260,  101,  259,  156,
  140,  279,  280,  101,  133,  134,  135,  286,  165,  286,
  289,  196,  282,  285,  284,  113,  122,  157,  124,  125,
  126,  127,  128,  129,  130,  131,  132,  133,  134,  135,
  219,  237,  260,  200,   64,  283,  300,  301,  159,  303,
  169,  289,  274,  294,  211,  149,  291,  292,  293,  153,
  272,  283,  156,  193,  286,  196,  196,  289,  156,  282,
  289,  284,  294,  169,  204,  206,  206,  165,   98,  297,
  298,  299,  300,  301,  274,  303,  229,  265,  266,  260,
  283,  125,  126,  283,  251,  285,  289,  287,  118,  289,
  230,  283,  283,  259,  260,  295,  283,  289,  289,  131,
  132,  241,  242,  283,  244,  272,  287,  283,  259,  249,
  277,  278,  287,  280,  289,  282,  282,  259,  284,  300,
  301,  151,  303,  290,  287,  291,  289,  283,  287,  235,
  289,  297,  298,  299,  300,  301,  294,  303,  260,  279,
  259,  281,  261,  262,  263,  264,  265,  266,  267,  268,
  295,  270,  292,  257,  289,  274,  127,  128,  129,  130,
  282,  285,  284,  282,  282,  282,  284,  286,  287,  291,
  283,  290,  291,  259,  260,  297,  298,  299,  300,  301,
  282,  303,  282,  302,  274,  304,  305,  306,  307,  308,
  309,  310,  311,  312,  313,  259,  282,  261,  262,  263,
  264,  265,  266,  267,  268,  291,  270,  274,  282,  274,
  274,  297,  298,  299,  300,  301,  274,  303,  282,  295,
  283,  287,  286,  287,  283,  283,  290,  291,  286,  285,
  305,  289,  275,  276,  277,  278,  294,  274,  302,  285,
  304,  305,  306,  307,  308,  309,  310,  311,  312,  313,
  259,  282,  261,  262,  263,  264,  265,  266,  267,  268,
  259,  270,  295,  283,  283,  274,  283,  283,  274,  283,
  258,  283,  274,  282,  274,  274,    0,  286,  287,  274,
  274,  290,  291,  282,  283,  284,  283,  274,  286,  285,
  289,  283,  291,  302,  283,  304,  305,  306,  307,  308,
  309,  310,  311,  312,  313,  259,  283,  261,  262,  263,
  264,  265,  266,  267,  268,  287,  270,  283,  283,  287,
  274,  283,   12,   48,  152,  257,   88,  145,  282,  164,
  113,  235,  286,  122,  124,   -1,  290,  291,  259,  260,
  261,  262,  263,  264,  265,  266,  267,  268,  302,  270,
  304,  305,  306,  307,  308,  309,  310,  311,  312,  313,
  259,  282,  118,   -1,   -1,   -1,   -1,   -1,   -1,  290,
  291,  259,  260,   -1,   -1,  274,  297,  298,  299,  300,
  301,  302,  303,  282,  283,  284,  274,  267,  268,   -1,
  289,   -1,  291,  273,  282,  283,  284,   -1,  286,  259,
  260,  289,  282,  291,  284,   -1,   -1,   -1,  288,  297,
  298,  299,  300,  301,  274,  303,   -1,   -1,   -1,   -1,
   -1,   -1,  282,  283,  284,   -1,  286,   -1,   -1,  289,
   -1,  291,   -1,   -1,   -1,   -1,   -1,  297,  298,  299,
  300,  301,  259,  303,  261,  262,  263,  264,  265,  266,
  267,  268,  259,  270,  261,  262,  263,  264,  265,  266,
  267,  268,   -1,  270,   -1,  282,   -1,   -1,   -1,  286,
   -1,   -1,   -1,  290,  291,  282,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  290,  291,  302,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  259,  302,  261,  262,  263,  264,
  265,  266,  267,  268,  259,  270,  261,  262,  263,  264,
  265,  266,  267,  268,   -1,  270,   -1,  282,  260,   -1,
   -1,   -1,   -1,   -1,   -1,  290,  291,  282,  271,  272,
   -1,  274,   -1,   -1,   -1,  290,  291,  302,   -1,  281,
  283,   -1,  285,   -1,  287,   -1,  289,  302,   -1,   -1,
   -1,   -1,  295,  296,   -1,  297,  298,  299,  300,  301,
   -1,  303,  265,  266,   -1,   -1,   -1,   -1,  271,  272,
   -1,  274,  275,  276,  277,  278,  279,  280,   -1,   -1,
  283,   -1,  285,   -1,  287,   -1,  289,   -1,  291,  292,
  293,  294,  295,  296,  265,  266,   -1,   -1,   -1,   -1,
  271,  272,   -1,  274,  275,  276,  277,  278,  279,  280,
   -1,   -1,  283,   -1,  285,   -1,  287,   -1,  289,   -1,
  291,  292,  293,   -1,  295,  296,  265,  266,   -1,   -1,
   -1,   -1,  271,  272,   -1,  274,  275,  276,  277,  278,
  279,  280,   -1,   -1,  283,   -1,  285,   -1,  287,   -1,
  289,   -1,  265,  266,   -1,   -1,  295,  296,  271,  272,
   -1,  274,  275,  276,  277,  278,  279,  280,   -1,   -1,
  283,   -1,  285,   -1,  287,   -1,  289,   -1,  265,  266,
   -1,   -1,  295,  296,  271,  272,   -1,  274,  275,  276,
  277,  278,  279,  280,   -1,   -1,  283,   -1,  285,   -1,
  287,   -1,  289,   -1,   -1,   -1,   -1,   -1,  295,  296,
  271,  272,   -1,  274,  275,  276,  277,  278,  279,  280,
   -1,   -1,  283,   -1,  285,   -1,  287,   -1,  289,  271,
  272,   -1,  274,   -1,  295,  296,   -1,  279,  280,   -1,
   -1,  283,   -1,  285,   -1,  287,   -1,  289,  271,  272,
   -1,  274,   -1,  295,  296,   -1,  279,  280,   -1,   -1,
  283,   -1,  285,   -1,  287,   -1,  289,  271,  272,   -1,
  274,   -1,  295,  296,   -1,  279,  280,   -1,   -1,  283,
   -1,  285,   -1,  287,  271,  289,   -1,  274,   -1,   -1,
   -1,  295,  296,   -1,   -1,   -1,  283,   -1,  285,   -1,
  287,  271,  289,   -1,  274,   -1,   -1,   -1,  295,  296,
   -1,   -1,   -1,  283,   -1,  285,   -1,  287,   -1,  289,
   -1,   -1,   -1,   -1,   -1,  295,  296,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 313
#define YYUNDFTOKEN 394
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IF_PREC","ELSE_SYM","IDENTIFIER",
"TYPE_IDENTIFIER","FLOAT_CONSTANT","INTEGER_CONSTANT","CHARACTER_CONSTANT",
"STRING_LITERAL","PLUS","MINUS","PLUSPLUS","MINUSMINUS","BAR","AMP","BARBAR",
"AMPAMP","ARROW","SEMICOLON","LSS","GTR","LEQ","GEQ","EQL","NEQ","DOTDOTDOT",
"LP","RP","LB","RB","LR","RR","PERIOD","COMMA","EXCL","STAR","SLASH","PERCENT",
"ASSIGN","COLON","QUESTION","AUTO_SYM","STATIC_SYM","TYPEDEF_SYM","STRUCT_SYM",
"ENUM_SYM","SIZEOF_SYM","UNION_SYM","IF_SYM","WHILE_SYM","DO_SYM","FOR_SYM",
"CONTINUE_SYM","BREAK_SYM","RETURN_SYM","SWITCH_SYM","CASE_SYM","DEFAULT_SYM",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : translation_unit",
"translation_unit : external_declaration",
"translation_unit : translation_unit external_declaration",
"external_declaration : function_definition",
"external_declaration : declaration",
"$$1 :",
"function_definition : declaration_specifiers declarator $$1 compound_statement",
"$$2 :",
"function_definition : declarator $$2 compound_statement",
"declaration_list_opt :",
"declaration_list_opt : declaration_list",
"declaration_list : declaration",
"declaration_list : declaration_list declaration",
"declaration : declaration_specifiers init_declarator_list_opt SEMICOLON",
"declaration_specifiers : type_specifier",
"declaration_specifiers : storage_class_specifier",
"declaration_specifiers : type_specifier declaration_specifiers",
"declaration_specifiers : storage_class_specifier declaration_specifiers",
"storage_class_specifier : AUTO_SYM",
"storage_class_specifier : STATIC_SYM",
"storage_class_specifier : TYPEDEF_SYM",
"init_declarator_list_opt :",
"init_declarator_list_opt : init_declarator_list",
"init_declarator_list : init_declarator",
"init_declarator_list : init_declarator_list COMMA init_declarator",
"init_declarator : declarator",
"init_declarator : declarator ASSIGN initializer",
"initializer : constant_expression",
"initializer : LR initializer_list RR",
"initializer_list : initializer",
"initializer_list : initializer_list COMMA initializer",
"type_specifier : struct_type_specifier",
"type_specifier : enum_type_specifier",
"type_specifier : TYPE_IDENTIFIER",
"$$3 :",
"$$4 :",
"struct_type_specifier : struct_or_union IDENTIFIER $$3 LR $$4 struct_declaration_list RR",
"$$5 :",
"$$6 :",
"struct_type_specifier : struct_or_union $$5 LR $$6 struct_declaration_list RR",
"struct_type_specifier : struct_or_union IDENTIFIER",
"struct_or_union : STRUCT_SYM",
"struct_or_union : UNION_SYM",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : type_specifier struct_declarator_list SEMICOLON",
"struct_declarator_list : struct_declarator",
"struct_declarator_list : struct_declarator_list COMMA struct_declarator",
"struct_declarator : declarator",
"$$7 :",
"enum_type_specifier : ENUM_SYM IDENTIFIER $$7 LR enumerator_list RR",
"$$8 :",
"enum_type_specifier : ENUM_SYM $$8 LR enumerator_list RR",
"enum_type_specifier : ENUM_SYM IDENTIFIER",
"enumerator_list : enumerator",
"enumerator_list : enumerator_list COMMA enumerator",
"enumerator : IDENTIFIER",
"$$9 :",
"enumerator : IDENTIFIER $$9 ASSIGN expression",
"declarator : pointer direct_declarator",
"declarator : direct_declarator",
"pointer : STAR",
"pointer : STAR pointer",
"direct_declarator : IDENTIFIER",
"direct_declarator : LP declarator RP",
"direct_declarator : direct_declarator LB constant_expression_opt RB",
"$$10 :",
"direct_declarator : direct_declarator LP $$10 parameter_type_list_opt RP",
"parameter_type_list_opt :",
"parameter_type_list_opt : parameter_type_list",
"parameter_type_list : parameter_list",
"parameter_type_list : parameter_list COMMA DOTDOTDOT",
"parameter_list : parameter_declaration",
"parameter_list : parameter_list COMMA parameter_declaration",
"parameter_declaration : declaration_specifiers declarator",
"parameter_declaration : declaration_specifiers abstract_declarator_opt",
"abstract_declarator_opt :",
"abstract_declarator_opt : abstract_declarator",
"abstract_declarator : direct_abstract_declarator",
"abstract_declarator : pointer",
"abstract_declarator : pointer direct_abstract_declarator",
"direct_abstract_declarator : LP abstract_declarator RP",
"direct_abstract_declarator : LB constant_expression_opt RB",
"direct_abstract_declarator : direct_abstract_declarator LB constant_expression_opt RB",
"direct_abstract_declarator : LP parameter_type_list_opt RP",
"direct_abstract_declarator : direct_abstract_declarator LP parameter_type_list_opt RP",
"statement_list_opt :",
"statement_list_opt : statement_list",
"statement_list : statement",
"statement_list : statement_list statement",
"statement : labeled_statement",
"statement : compound_statement",
"statement : expression_statement",
"statement : selection_statement",
"statement : iteration_statement",
"statement : jump_statement",
"labeled_statement : CASE_SYM constant_expression COLON statement",
"labeled_statement : DEFAULT_SYM COLON statement",
"$$11 :",
"compound_statement : LR $$11 declaration_list_opt statement_list_opt RR",
"expression_statement : SEMICOLON",
"expression_statement : expression SEMICOLON",
"selection_statement : IF_SYM LP expression RP statement",
"selection_statement : IF_SYM LP expression RP statement ELSE_SYM statement",
"selection_statement : SWITCH_SYM LP expression RP statement",
"iteration_statement : WHILE_SYM LP expression RP statement",
"iteration_statement : DO_SYM statement WHILE_SYM LP expression RP SEMICOLON",
"iteration_statement : FOR_SYM LP for_expression RP statement",
"for_expression : expression_opt SEMICOLON expression_opt SEMICOLON expression_opt",
"expression_opt :",
"expression_opt : expression",
"jump_statement : RETURN_SYM expression_opt SEMICOLON",
"jump_statement : CONTINUE_SYM SEMICOLON",
"jump_statement : BREAK_SYM SEMICOLON",
"arg_expression_list_opt :",
"arg_expression_list_opt : arg_expression_list",
"arg_expression_list : assignment_expression",
"arg_expression_list : arg_expression_list COMMA assignment_expression",
"constant_expression_opt :",
"constant_expression_opt : constant_expression",
"constant_expression : expression",
"expression : comma_expression",
"comma_expression : assignment_expression",
"assignment_expression : conditional_expression",
"assignment_expression : unary_expression ASSIGN assignment_expression",
"conditional_expression : logical_or_expression",
"conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression",
"logical_or_expression : logical_and_expression",
"logical_or_expression : logical_or_expression BARBAR logical_and_expression",
"logical_and_expression : bitwise_or_expression",
"logical_and_expression : logical_and_expression AMPAMP bitwise_or_expression",
"bitwise_or_expression : bitwise_xor_expression",
"bitwise_xor_expression : bitwise_and_expression",
"bitwise_and_expression : equality_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQL relational_expression",
"equality_expression : equality_expression NEQ relational_expression",
"relational_expression : shift_expression",
"relational_expression : relational_expression LSS shift_expression",
"relational_expression : relational_expression GTR shift_expression",
"relational_expression : relational_expression LEQ shift_expression",
"relational_expression : relational_expression GEQ shift_expression",
"shift_expression : additive_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression PLUS multiplicative_expression",
"additive_expression : additive_expression MINUS multiplicative_expression",
"multiplicative_expression : cast_expression",
"multiplicative_expression : multiplicative_expression STAR cast_expression",
"multiplicative_expression : multiplicative_expression SLASH cast_expression",
"multiplicative_expression : multiplicative_expression PERCENT cast_expression",
"cast_expression : unary_expression",
"cast_expression : LP type_name RP cast_expression",
"unary_expression : postfix_expression",
"unary_expression : PLUSPLUS unary_expression",
"unary_expression : MINUSMINUS unary_expression",
"unary_expression : AMP cast_expression",
"unary_expression : STAR cast_expression",
"unary_expression : EXCL cast_expression",
"unary_expression : MINUS cast_expression",
"unary_expression : PLUS cast_expression",
"unary_expression : SIZEOF_SYM unary_expression",
"unary_expression : SIZEOF_SYM LP type_name RP",
"postfix_expression : primary_expression",
"postfix_expression : postfix_expression LB expression RB",
"postfix_expression : postfix_expression LP arg_expression_list_opt RP",
"postfix_expression : postfix_expression PERIOD IDENTIFIER",
"postfix_expression : postfix_expression ARROW IDENTIFIER",
"postfix_expression : postfix_expression PLUSPLUS",
"postfix_expression : postfix_expression MINUSMINUS",
"primary_expression : IDENTIFIER",
"primary_expression : INTEGER_CONSTANT",
"primary_expression : FLOAT_CONSTANT",
"primary_expression : CHARACTER_CONSTANT",
"primary_expression : STRING_LITERAL",
"primary_expression : LP expression RP",
"type_name : declaration_specifiers abstract_declarator_opt",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 338 "parse.y"

extern char *yytext;
yyerror(char *s) {
	syntax_err++;
	printf("  line %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}
#line 728 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 23 "parse.y"
	{root=makeNode(N_PROGRAM,NIL,yystack.l_mark[0],NIL); checkForwardReference();}
break;
case 2:
#line 26 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 3:
#line 27 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-1],yystack.l_mark[0]);}
break;
case 4:
#line 30 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 5:
#line 31 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 6:
#line 34 "parse.y"
	{yyval=setFunctionDeclaratorSpecifier(yystack.l_mark[0],yystack.l_mark[-1]);}
break;
case 7:
#line 35 "parse.y"
	{yyval=setFunctionDeclaratorBody(yystack.l_mark[-1],yystack.l_mark[0]);}
break;
case 8:
#line 36 "parse.y"
	{yyval=setFunctionDeclaratorSpecifier(yystack.l_mark[0],makeSpecifier(int_type,0));}
break;
case 9:
#line 37 "parse.y"
	{yyval=setFunctionDeclaratorBody(yystack.l_mark[-1],yystack.l_mark[0]);}
break;
case 10:
#line 40 "parse.y"
	{yyval=NIL;}
break;
case 11:
#line 41 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 12:
#line 44 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 13:
#line 45 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-1],yystack.l_mark[0]);}
break;
case 14:
#line 48 "parse.y"
	{yyval=setDeclaratorListSpecifier(yystack.l_mark[-1],yystack.l_mark[-2]);}
break;
case 15:
#line 51 "parse.y"
	{yyval=makeSpecifier(yystack.l_mark[0],0);}
break;
case 16:
#line 52 "parse.y"
	{yyval=makeSpecifier(0,yystack.l_mark[0]);}
break;
case 17:
#line 53 "parse.y"
	{yyval=updateSpecifier(yystack.l_mark[0],yystack.l_mark[-1],0);}
break;
case 18:
#line 54 "parse.y"
	{yyval=updateSpecifier(yystack.l_mark[0],0,yystack.l_mark[-1]);}
break;
case 19:
#line 57 "parse.y"
	{yyval=S_AUTO;}
break;
case 20:
#line 58 "parse.y"
	{yyval=S_STATIC;}
break;
case 21:
#line 59 "parse.y"
	{yyval=S_TYPEDEF;}
break;
case 22:
#line 62 "parse.y"
	{yyval=makeDummyIdentifier();}
break;
case 23:
#line 63 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 24:
#line 66 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 25:
#line 67 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 26:
#line 70 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 27:
#line 71 "parse.y"
	{yyval=setDeclaratorInit(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 28:
#line 74 "parse.y"
	{yyval=makeNode(N_INIT_LIST_ONE,NIL,yystack.l_mark[0],NIL);}
break;
case 29:
#line 75 "parse.y"
	{yyval=yystack.l_mark[-1];}
break;
case 30:
#line 78 "parse.y"
	{yyval=makeNode(N_INIT_LIST,yystack.l_mark[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
break;
case 31:
#line 79 "parse.y"
	{yyval=makeNodeList(N_INIT_LIST,yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 32:
#line 82 "parse.y"
	{yyval = yystack.l_mark[0];}
break;
case 33:
#line 83 "parse.y"
	{yyval = yystack.l_mark[0];}
break;
case 34:
#line 84 "parse.y"
	{yyval = yystack.l_mark[0];}
break;
case 35:
#line 87 "parse.y"
	{yyval=setTypeStructOrEnumIdentifier(yystack.l_mark[-1],yystack.l_mark[0],ID_STRUCT);}
break;
case 36:
#line 88 "parse.y"
	{ yyval=current_id;current_level++;}
break;
case 37:
#line 89 "parse.y"
	{checkForwardReference();yyval=setTypeField(yystack.l_mark[-4],yystack.l_mark[-1]);current_level--; current_id=yystack.l_mark[-2];}
break;
case 38:
#line 90 "parse.y"
	{yyval=makeType(yystack.l_mark[0]);}
break;
case 39:
#line 90 "parse.y"
	{yyval=current_id;current_level++;}
break;
case 40:
#line 91 "parse.y"
	{checkForwardReference();yyval=setTypeField(yystack.l_mark[-4],yystack.l_mark[-1]); current_level--;current_id=yystack.l_mark[-2];}
break;
case 41:
#line 92 "parse.y"
	{yyval=getTypeOfStructOrEnumRefIdentifier(yystack.l_mark[-1],yystack.l_mark[0],ID_STRUCT);}
break;
case 42:
#line 95 "parse.y"
	{yyval=T_STRUCT;}
break;
case 43:
#line 96 "parse.y"
	{yyval=T_UNION;}
break;
case 44:
#line 99 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 45:
#line 100 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-1],yystack.l_mark[0]);}
break;
case 46:
#line 103 "parse.y"
	{yyval=setStructDeclaratorListSpecifier(yystack.l_mark[-1],yystack.l_mark[-2]);}
break;
case 47:
#line 106 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 48:
#line 107 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 49:
#line 110 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 50:
#line 113 "parse.y"
	{yyval=setTypeStructOrEnumIdentifier(T_ENUM,yystack.l_mark[0],ID_ENUM);}
break;
case 51:
#line 114 "parse.y"
	{yyval=setTypeField(yystack.l_mark[-3],yystack.l_mark[-1]);}
break;
case 52:
#line 115 "parse.y"
	{yyval=makeType(T_ENUM);}
break;
case 53:
#line 116 "parse.y"
	{yyval=setTypeField(yystack.l_mark[-3],yystack.l_mark[-1]);}
break;
case 54:
#line 117 "parse.y"
	{yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yystack.l_mark[0],ID_ENUM);}
break;
case 55:
#line 120 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 56:
#line 121 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 57:
#line 124 "parse.y"
	{yyval=setDeclaratorKind(makeIdentifier(yystack.l_mark[0]),ID_ENUM_LITERAL);}
break;
case 58:
#line 125 "parse.y"
	{yyval=setDeclaratorKind(makeIdentifier(yystack.l_mark[0]),ID_ENUM_LITERAL);}
break;
case 59:
#line 126 "parse.y"
	{yyval=setDeclaratorInit(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 60:
#line 129 "parse.y"
	{yyval=setDeclaratorElementType(yystack.l_mark[0],yystack.l_mark[-1]);}
break;
case 61:
#line 130 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 62:
#line 133 "parse.y"
	{yyval=makeType(T_POINTER);}
break;
case 63:
#line 134 "parse.y"
	{yyval=setTypeElementType(yystack.l_mark[0],makeType(T_POINTER));}
break;
case 64:
#line 137 "parse.y"
	{yyval=makeIdentifier(yystack.l_mark[0]);}
break;
case 65:
#line 138 "parse.y"
	{yyval=yystack.l_mark[-1];}
break;
case 66:
#line 140 "parse.y"
	{yyval=setDeclaratorElementType(yystack.l_mark[-3],setTypeExpr(makeType(T_ARRAY),yystack.l_mark[-1]));}
break;
case 67:
#line 141 "parse.y"
	{yyval=current_id;current_level++;}
break;
case 68:
#line 143 "parse.y"
	{checkForwardReference();current_id=yystack.l_mark[-2];current_level--; yyval=setDeclaratorElementType(yystack.l_mark[-4],setTypeField(makeType(T_FUNC),yystack.l_mark[-1]));}
break;
case 69:
#line 146 "parse.y"
	{yyval=NIL;}
break;
case 70:
#line 147 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 71:
#line 150 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 72:
#line 151 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
break;
case 73:
#line 154 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 74:
#line 155 "parse.y"
	{yyval=linkDeclaratorList(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 75:
#line 158 "parse.y"
	{yyval=setParameterDeclaratorSpecifier(yystack.l_mark[0],yystack.l_mark[-1]);}
break;
case 76:
#line 159 "parse.y"
	{yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),yystack.l_mark[0]),yystack.l_mark[-1]);}
break;
case 77:
#line 162 "parse.y"
	{yyval=NIL;}
break;
case 78:
#line 163 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 79:
#line 166 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 80:
#line 167 "parse.y"
	{yyval=makeType(T_POINTER);}
break;
case 81:
#line 168 "parse.y"
	{yyval=setTypeElementType(yystack.l_mark[0],makeType(T_POINTER));}
break;
case 82:
#line 171 "parse.y"
	{yyval=yystack.l_mark[-1];}
break;
case 83:
#line 172 "parse.y"
	{yyval=setTypeExpr(makeType(T_ARRAY),yystack.l_mark[-1]);}
break;
case 84:
#line 173 "parse.y"
	{yyval=setTypeElementType(yystack.l_mark[-3],setTypeExpr(makeType(T_ARRAY),yystack.l_mark[-1]));}
break;
case 85:
#line 174 "parse.y"
	{yyval=setTypeExpr(makeType(T_FUNC),yystack.l_mark[-1]);}
break;
case 86:
#line 175 "parse.y"
	{yyval=setTypeElementType(yystack.l_mark[-3],setTypeExpr(makeType(T_FUNC),yystack.l_mark[-1]));}
break;
case 87:
#line 178 "parse.y"
	{yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
break;
case 88:
#line 179 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 89:
#line 182 "parse.y"
	{yyval=makeNode(N_STMT_LIST,yystack.l_mark[0],NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
break;
case 90:
#line 183 "parse.y"
	{yyval=makeNodeList(N_STMT_LIST,yystack.l_mark[-1],yystack.l_mark[0]);}
break;
case 91:
#line 186 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 92:
#line 187 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 93:
#line 188 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 94:
#line 189 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 95:
#line 190 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 96:
#line 191 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 97:
#line 194 "parse.y"
	{yyval=makeNode(N_STMT_LABEL_CASE, yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 98:
#line 195 "parse.y"
	{yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yystack.l_mark[0],NIL);}
break;
case 99:
#line 198 "parse.y"
	{yyval=current_id;current_level++;}
break;
case 100:
#line 200 "parse.y"
	{checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND,yystack.l_mark[-2],NIL,yystack.l_mark[-1]); current_id=yystack.l_mark[-3]; current_level--;}
break;
case 101:
#line 203 "parse.y"
	{yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
break;
case 102:
#line 204 "parse.y"
	{yyval=makeNode(N_STMT_EXPRESSION,NIL,yystack.l_mark[-1],NIL);}
break;
case 103:
#line 207 "parse.y"
	{yyval=makeNode(N_STMT_IF,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 104:
#line 208 "parse.y"
	{yyval=makeNode(N_STMT_IF_ELSE,yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 105:
#line 209 "parse.y"
	{yyval=makeNode(N_STMT_SWITCH,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 106:
#line 212 "parse.y"
	{yyval=makeNode(N_STMT_WHILE,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 107:
#line 213 "parse.y"
	{yyval=makeNode(N_STMT_DO,yystack.l_mark[-5],NIL,yystack.l_mark[-2]);}
break;
case 108:
#line 214 "parse.y"
	{yyval=makeNode(N_STMT_FOR,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 109:
#line 217 "parse.y"
	{yyval=makeNode(N_FOR_EXP,yystack.l_mark[-4],yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 110:
#line 220 "parse.y"
	{yyval=NIL;}
break;
case 111:
#line 221 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 112:
#line 224 "parse.y"
	{yyval=makeNode(N_STMT_RETURN,NIL,yystack.l_mark[-1],NIL);}
break;
case 113:
#line 225 "parse.y"
	{yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
break;
case 114:
#line 226 "parse.y"
	{yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
break;
case 115:
#line 229 "parse.y"
	{yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
break;
case 116:
#line 230 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 117:
#line 233 "parse.y"
	{yyval=makeNode(N_ARG_LIST,yystack.l_mark[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
break;
case 118:
#line 234 "parse.y"
	{yyval=makeNodeList(N_ARG_LIST,yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 119:
#line 237 "parse.y"
	{yyval=NIL;}
break;
case 120:
#line 238 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 121:
#line 241 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 122:
#line 244 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 123:
#line 247 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 124:
#line 250 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 125:
#line 251 "parse.y"
	{yyval=makeNode(N_EXP_ASSIGN,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 126:
#line 254 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 127:
#line 255 "parse.y"
	{yyval=makeNode(N_EXP_CONDITIONAL, yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]);}
break;
case 128:
#line 258 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 129:
#line 259 "parse.y"
	{yyval=makeNode(N_EXP_OR,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 130:
#line 262 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 131:
#line 263 "parse.y"
	{yyval=makeNode(N_EXP_AND,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 132:
#line 266 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 133:
#line 269 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 134:
#line 272 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 135:
#line 275 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 136:
#line 276 "parse.y"
	{yyval=makeNode(N_EXP_EQL,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 137:
#line 277 "parse.y"
	{yyval=makeNode(N_EXP_NEQ,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 138:
#line 280 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 139:
#line 281 "parse.y"
	{yyval=makeNode(N_EXP_LSS,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 140:
#line 282 "parse.y"
	{yyval=makeNode(N_EXP_GTR,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 141:
#line 283 "parse.y"
	{yyval=makeNode(N_EXP_LEQ,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 142:
#line 284 "parse.y"
	{yyval=makeNode(N_EXP_GEQ,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 143:
#line 287 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 144:
#line 290 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 145:
#line 291 "parse.y"
	{yyval=makeNode(N_EXP_ADD,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 146:
#line 292 "parse.y"
	{yyval=makeNode(N_EXP_SUB,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 147:
#line 295 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 148:
#line 296 "parse.y"
	{yyval=makeNode(N_EXP_MUL,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 149:
#line 297 "parse.y"
	{yyval= makeNode(N_EXP_DIV,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 150:
#line 298 "parse.y"
	{yyval= makeNode(N_EXP_MOD,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 151:
#line 301 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 152:
#line 302 "parse.y"
	{yyval=makeNode(N_EXP_CAST,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 153:
#line 305 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 154:
#line 306 "parse.y"
	{yyval=makeNode(N_EXP_PRE_INC,NIL,yystack.l_mark[0],NIL);}
break;
case 155:
#line 307 "parse.y"
	{yyval=makeNode(N_EXP_PRE_DEC,NIL,yystack.l_mark[0],NIL);}
break;
case 156:
#line 308 "parse.y"
	{yyval=makeNode(N_EXP_AMP,NIL,yystack.l_mark[0],NIL);}
break;
case 157:
#line 309 "parse.y"
	{yyval=makeNode(N_EXP_STAR,NIL,yystack.l_mark[0],NIL);}
break;
case 158:
#line 310 "parse.y"
	{yyval=makeNode(N_EXP_NOT,NIL,yystack.l_mark[0],NIL);}
break;
case 159:
#line 311 "parse.y"
	{yyval=makeNode(N_EXP_MINUS,NIL,yystack.l_mark[0],NIL);}
break;
case 160:
#line 312 "parse.y"
	{yyval=makeNode(N_EXP_PLUS,NIL,yystack.l_mark[0],NIL);}
break;
case 161:
#line 313 "parse.y"
	{yyval=makeNode(N_EXP_SIZE_EXP,NIL,yystack.l_mark[0],NIL);}
break;
case 162:
#line 314 "parse.y"
	{yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yystack.l_mark[-1],NIL);}
break;
case 163:
#line 317 "parse.y"
	{yyval=yystack.l_mark[0];}
break;
case 164:
#line 318 "parse.y"
	{yyval=makeNode(N_EXP_ARRAY,yystack.l_mark[-3],NIL,yystack.l_mark[-1]);}
break;
case 165:
#line 319 "parse.y"
	{yyval=makeNode(N_EXP_FUNCTION_CALL,yystack.l_mark[-3],NIL,yystack.l_mark[-1]);}
break;
case 166:
#line 320 "parse.y"
	{yyval=makeNode(N_EXP_STRUCT,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 167:
#line 321 "parse.y"
	{yyval=makeNode(N_EXP_ARROW,yystack.l_mark[-2],NIL,yystack.l_mark[0]);}
break;
case 168:
#line 322 "parse.y"
	{yyval=makeNode(N_EXP_POST_INC,NIL,yystack.l_mark[-1],NIL);}
break;
case 169:
#line 323 "parse.y"
	{yyval=makeNode(N_EXP_POST_DEC,NIL,yystack.l_mark[-1],NIL);}
break;
case 170:
#line 326 "parse.y"
	{yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yystack.l_mark[0]),NIL);}
break;
case 171:
#line 327 "parse.y"
	{yyval=makeNode(N_EXP_INT_CONST,NIL,yystack.l_mark[0],NIL);}
break;
case 172:
#line 328 "parse.y"
	{yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yystack.l_mark[0],NIL);}
break;
case 173:
#line 329 "parse.y"
	{yyval=makeNode(N_EXP_CHAR_CONST,NIL,yystack.l_mark[0],NIL);}
break;
case 174:
#line 330 "parse.y"
	{yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yystack.l_mark[0],NIL);}
break;
case 175:
#line 331 "parse.y"
	{yyval=yystack.l_mark[-1];}
break;
case 176:
#line 334 "parse.y"
	{yyval=setTypeNameSpecifier(yystack.l_mark[0],yystack.l_mark[-1]);}
break;
#line 1634 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
