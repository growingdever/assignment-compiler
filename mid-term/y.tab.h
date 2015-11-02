/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

