/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
