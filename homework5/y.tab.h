/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    TYPE_IDENTIFIER = 259,
    INTEGER_CONSTANT = 260,
    FLOAT_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    PLUSPLUS = 264,
    MINUSMINUS = 265,
    ARROW = 266,
    LSS = 267,
    GTR = 268,
    LEQ = 269,
    GEQ = 270,
    EQL = 271,
    NEQ = 272,
    AMPAMP = 273,
    BARBAR = 274,
    DOTDOTDOT = 275,
    LP = 276,
    RP = 277,
    LB = 278,
    RB = 279,
    LR = 280,
    RR = 281,
    COLON = 282,
    PERIOD = 283,
    COMMA = 284,
    EXCL = 285,
    STAR = 286,
    SLASH = 287,
    PERCENT = 288,
    AMP = 289,
    SEMICOLON = 290,
    PLUS = 291,
    MINUS = 292,
    ASSIGN = 293,
    AUTO_SYM = 294,
    BREAK_SYM = 295,
    CASE_SYM = 296,
    CONTINUE_SYM = 297,
    DEFAULT_SYM = 298,
    DO_SYM = 299,
    ELSE_SYM = 300,
    ENUM_SYM = 301,
    FOR_SYM = 302,
    IF_SYM = 303,
    RETURN_SYM = 304,
    SIZEOF_SYM = 305,
    STATIC_SYM = 306,
    STRUCT_SYM = 307,
    SWITCH_SYM = 308,
    TYPEDEF_SYM = 309,
    UNION_SYM = 310,
    WHILE_SYM = 311
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define INTEGER_CONSTANT 260
#define FLOAT_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUSPLUS 264
#define MINUSMINUS 265
#define ARROW 266
#define LSS 267
#define GTR 268
#define LEQ 269
#define GEQ 270
#define EQL 271
#define NEQ 272
#define AMPAMP 273
#define BARBAR 274
#define DOTDOTDOT 275
#define LP 276
#define RP 277
#define LB 278
#define RB 279
#define LR 280
#define RR 281
#define COLON 282
#define PERIOD 283
#define COMMA 284
#define EXCL 285
#define STAR 286
#define SLASH 287
#define PERCENT 288
#define AMP 289
#define SEMICOLON 290
#define PLUS 291
#define MINUS 292
#define ASSIGN 293
#define AUTO_SYM 294
#define BREAK_SYM 295
#define CASE_SYM 296
#define CONTINUE_SYM 297
#define DEFAULT_SYM 298
#define DO_SYM 299
#define ELSE_SYM 300
#define ENUM_SYM 301
#define FOR_SYM 302
#define IF_SYM 303
#define RETURN_SYM 304
#define SIZEOF_SYM 305
#define STATIC_SYM 306
#define STRUCT_SYM 307
#define SWITCH_SYM 308
#define TYPEDEF_SYM 309
#define UNION_SYM 310
#define WHILE_SYM 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
