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
     INTEGER = 258,
     FLOAT = 259,
     OPERATORS = 260,
     DELIMITER = 261,
     STRINGS = 262,
     IDENTIFIERS = 263,
     KEYWORD = 264,
     SYMBOL = 265,
     OPEN_BRACKET = 266,
     CLOSE_BRACKET = 267,
     OPEN_PARENTHESIS = 268,
     CLOSE_PARENTHESIS = 269,
     OPEN_BRACE = 270,
     CLOSE_BRACE = 271,
     UNKNOWN_TOKEN = 272,
     END = 273
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define FLOAT 259
#define OPERATORS 260
#define DELIMITER 261
#define STRINGS 262
#define IDENTIFIERS 263
#define KEYWORD 264
#define SYMBOL 265
#define OPEN_BRACKET 266
#define CLOSE_BRACKET 267
#define OPEN_PARENTHESIS 268
#define CLOSE_PARENTHESIS 269
#define OPEN_BRACE 270
#define CLOSE_BRACE 271
#define UNKNOWN_TOKEN 272
#define END 273




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 32 "simple-code.y"
{
    double dval;
    char *sval;
}
/* Line 1529 of yacc.c.  */
#line 90 "simple-code.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
