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
     INTEGER = 258,
     FLOAT = 259,
     OPERATORS = 260,
     IDENTIFIERS = 261,
     STRINGS = 262,
     KEYWORD = 263,
     SYMBOL = 264,
     OPEN_PARENTHESIS = 265,
     CLOSE_PARENTHESIS = 266,
     OPEN_BRACE = 267,
     CLOSE_BRACE = 268,
     END = 269,
     EOP = 270,
     UNKNOWN_TOKEN = 271,
     DELIMITER = 272,
     OPEN_BRACKET = 273,
     CLOSE_BRACKET = 274
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define FLOAT 259
#define OPERATORS 260
#define IDENTIFIERS 261
#define STRINGS 262
#define KEYWORD 263
#define SYMBOL 264
#define OPEN_PARENTHESIS 265
#define CLOSE_PARENTHESIS 266
#define OPEN_BRACE 267
#define CLOSE_BRACE 268
#define END 269
#define EOP 270
#define UNKNOWN_TOKEN 271
#define DELIMITER 272
#define OPEN_BRACKET 273
#define CLOSE_BRACKET 274




/* Copy the first part of user declarations.  */
#line 19 "syntax_analyzer.y"

/* Orismoi kai dhlwseis glwssas C. Otidhpote exei na kanei me orismo h arxikopoihsh
metablhtwn & synarthsewn, arxeia header kai dhlwseis #define mpainei se auto to shmeio */
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>
        #include <string.h>
        extern char *yytext;
        extern void yyerror(char *);
        extern int yylex(void);
        void print_report(void);
        FILE *yyin;

        extern int line; // Μετρητής γραμμών κώδικα
        // Μετρητές για μέτρηση των κομμάτων
        int var_com = 0, val_com = 0, val_arr_com = 0, val_ass_com = 0;
        char* func_arg;
        int errflag=0; // Μετρητής σφαλμάτων
        int cor_words; // μετρήτης σωστών λέξεων (flex)
        int cor_expr = 0;
        int inc_words = 0;
        int inc_expr = 0;


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
typedef union YYSTYPE
#line 44 "syntax_analyzer.y"
{
    int ival;
    double dval;
    char *sval;
}
/* Line 193 of yacc.c.  */
#line 164 "syntax_analyzer.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 177 "syntax_analyzer.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   532

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNRULES -- Number of states.  */
#define YYNSTATES  280

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    22,    20,     2,    21,     2,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    43,
      47,    50,    52,    54,    56,    58,    62,    66,    70,    74,
      76,    78,    82,    84,    88,    92,    96,   100,   105,   109,
     111,   115,   117,   121,   123,   127,   129,   133,   135,   139,
     143,   147,   151,   155,   159,   163,   167,   171,   175,   179,
     183,   187,   191,   195,   199,   203,   207,   211,   215,   219,
     223,   227,   231,   235,   239,   242,   247,   252,   256,   262,
     268,   273,   278,   282,   286,   290,   294,   298,   302,   306,
     310,   314,   318,   322,   326,   330,   334,   338,   342,   346,
     350,   354,   358,   362,   367,   372,   377,   382,   387,   392,
     397,   399,   401,   403,   408,   413,   418,   423,   428,   432,
     434,   438,   445,   452,   460,   467,   474,   482,   486,   491,
     496,   502,   504,   507,   510,   514,   517,   520,   523,   525,
     527,   531,   535,   539,   542,   545,   550,   555,   560,   564,
     568,   574,   580,   584,   589,   592,   596,   606
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    -1,    26,    27,    -1,    14,    -1,    39,
      14,    -1,    46,    14,    -1,    47,    14,    -1,    53,    14,
      -1,    55,    -1,    59,    -1,    61,    -1,    15,    -1,    16,
      -1,     8,    -1,     5,    -1,    28,    -1,    29,    -1,    33,
      31,    33,    -1,    32,    31,    33,    -1,    31,    33,    -1,
       3,    -1,     4,    -1,    32,    -1,     6,    -1,    34,    31,
      33,    -1,    33,    31,    34,    -1,    34,    31,    34,    -1,
      32,    31,    34,    -1,     7,    -1,     3,    -1,     3,     9,
      37,    -1,     4,    -1,     4,     9,    37,    -1,    12,    40,
      13,    -1,    12,    37,    13,    -1,    12,    38,    13,    -1,
      34,    12,     3,    13,    -1,    39,    31,    39,    -1,    36,
      -1,    36,     9,    40,    -1,    33,    -1,    33,     9,    41,
      -1,    34,    -1,    34,     9,    42,    -1,    39,    -1,    39,
       9,    43,    -1,    35,    -1,    35,     9,    44,    -1,    39,
       9,    33,    -1,    39,     9,    36,    -1,    39,     9,    34,
      -1,    39,     9,    35,    -1,    34,     9,    33,    -1,    34,
       9,    39,    -1,    34,     9,    36,    -1,    34,     9,    35,
      -1,    36,     9,    33,    -1,    36,     9,    34,    -1,    36,
       9,    39,    -1,    36,     9,    35,    -1,    33,     9,    36,
      -1,    33,     9,    34,    -1,    33,     9,    39,    -1,    33,
       9,    35,    -1,    35,     9,    36,    -1,    35,     9,    34,
      -1,    35,     9,    39,    -1,    35,     9,    33,    -1,    45,
       9,    33,    -1,    45,     9,    36,    -1,    45,     9,    34,
      -1,    45,     9,    39,    -1,    45,     9,    35,    -1,    30,
      34,    -1,    30,    34,    31,    33,    -1,    30,    34,    31,
      34,    -1,    30,    30,    34,    -1,    30,    30,    34,    31,
      33,    -1,    30,    30,    34,    31,    34,    -1,    30,    34,
      31,    39,    -1,    30,    34,    31,    35,    -1,    42,    31,
      41,    -1,    42,    31,    43,    -1,    42,    31,    42,    -1,
      42,    31,    40,    -1,    42,    31,    44,    -1,    42,    31,
      45,    -1,    34,     9,    33,    -1,    33,     9,    34,    -1,
      36,     9,    33,    -1,    33,     9,    36,    -1,    33,     9,
      33,    -1,    49,     9,    34,    -1,    49,     9,    36,    -1,
      49,     9,    33,    -1,    48,     9,    34,    -1,    48,     9,
      36,    -1,    48,     9,    33,    -1,    34,     9,    34,    -1,
      36,     9,    36,    -1,    36,     9,    34,    -1,    34,     9,
      36,    -1,    30,    10,    34,    11,    -1,    30,    10,    39,
      11,    -1,    30,    10,    36,    11,    -1,    30,    10,    49,
      11,    -1,    30,    10,    50,    11,    -1,    30,    10,    51,
      11,    -1,    30,    10,    48,    11,    -1,    50,    -1,    51,
      -1,    52,    -1,    34,    10,    34,    11,    -1,    34,    10,
      33,    11,    -1,    34,    10,    36,    11,    -1,    34,    10,
      49,    11,    -1,    34,    10,    48,    11,    -1,    34,    10,
      11,    -1,    46,    -1,    46,     9,    54,    -1,    30,    34,
      10,    54,    11,    17,    -1,    30,    34,    10,    54,    11,
      56,    -1,    30,    34,    10,    54,    11,    14,    56,    -1,
      30,    34,    10,    30,    11,    17,    -1,    30,    34,    10,
      30,    11,    56,    -1,    30,    34,    10,    30,    11,    14,
      56,    -1,    18,    58,    19,    -1,    18,    14,    58,    19,
      -1,    18,    58,    14,    19,    -1,    18,    14,    58,    14,
      19,    -1,    56,    -1,    14,    56,    -1,    56,    14,    -1,
      14,    56,    14,    -1,    53,    17,    -1,    47,    17,    -1,
      46,    17,    -1,    59,    -1,    61,    -1,    58,    53,    17,
      -1,    58,    47,    17,    -1,    58,    46,    17,    -1,    58,
      59,    -1,    58,    61,    -1,    58,    14,    53,    17,    -1,
      58,    14,    47,    17,    -1,    58,    14,    46,    17,    -1,
      58,    14,    59,    -1,    58,    14,    61,    -1,    30,    10,
      33,    11,    57,    -1,    30,    10,    35,    11,    57,    -1,
      59,    30,    57,    -1,    59,    14,    30,    57,    -1,    34,
      31,    -1,    34,    31,    33,    -1,    30,    10,    60,    17,
      32,    17,    60,    11,    57,    -1,    30,    10,    60,    17,
      35,    17,    60,    11,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    74,    77,    78,    79,    80,    81,
      82,    83,    85,    86,    89,    92,    96,   116,   140,   160,
     182,   191,   192,   193,   197,   201,   202,   203,   204,   207,
     211,   212,   215,   216,   220,   221,   222,   223,   224,   229,
     230,   233,   234,   237,   238,   241,   242,   245,   246,   250,
     251,   252,   253,   255,   256,   257,   258,   260,   261,   262,
     263,   265,   266,   267,   268,   270,   271,   272,   273,   275,
     276,   277,   278,   279,   285,   287,   288,   290,   291,   292,
     294,   296,   301,   302,   303,   304,   305,   306,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   325,
     326,   327,   328,   332,   333,   334,   338,   342,   343,   344,
     349,   350,   351,   353,   354,   355,   356,   357,   358,   362,
     363,   368,   369,   370,   372,   373,   374,   379,   380,   381,
     382,   386,   387,   388,   389,   393,   394,   395,   396,   397,
     399,   400,   401,   402,   403,   405,   406,   407,   408,   409,
     414,   416,   417,   418,   422,   423,   427,   428
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "OPERATORS",
  "IDENTIFIERS", "STRINGS", "KEYWORD", "SYMBOL", "OPEN_PARENTHESIS",
  "CLOSE_PARENTHESIS", "OPEN_BRACE", "CLOSE_BRACE", "END", "EOP",
  "UNKNOWN_TOKEN", "DELIMITER", "OPEN_BRACKET", "CLOSE_BRACKET", "'+'",
  "'-'", "'*'", "'/'", "'='", "$accept", "program", "valid", "keyword",
  "operator", "keyword_val", "oper_val", "expr", "num", "var", "var_oper",
  "str", "help_int", "help_float", "arr", "help_str", "help_num",
  "help_var", "help_arr", "help_var_oper", "help_assign", "declaration",
  "assignment", "help_3args", "help_2args", "scan_len_print", "cmp_print",
  "print", "func_call", "arguments", "func_decl", "body", "cond_body",
  "all", "if_while_grammar", "help_for", "for_grammar", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      43,    45,    42,    47,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    28,    29,    30,    31,    32,    32,
      32,    33,    33,    33,    34,    35,    35,    35,    35,    36,
      37,    37,    38,    38,    39,    39,    39,    39,    39,    40,
      40,    41,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    46,    46,    46,    46,    46,    46,
      46,    46,    47,    47,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    49,    50,    50,    50,    51,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    56,    56,    56,
      56,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    60,    60,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       1,     3,     1,     3,     3,     3,     3,     4,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     4,     4,     3,     5,     5,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     4,     4,     4,     4,     4,     3,     1,
       3,     6,     6,     7,     6,     6,     7,     3,     4,     4,
       5,     1,     2,     2,     3,     2,     2,     2,     1,     1,
       3,     3,     3,     2,     2,     4,     4,     4,     3,     3,
       5,     5,     3,     4,     2,     3,     9,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    24,    14,     0,     4,    12,    13,     3,
      16,     0,    43,     0,     0,     0,     0,   110,   111,   112,
       0,     9,    10,    11,    30,    32,    29,    39,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    15,     5,    17,
       0,     0,     6,     7,     8,     0,     0,     0,     0,     0,
      35,    36,    34,    21,    22,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,    43,    44,   118,    23,     0,     0,     0,     0,     0,
       0,     0,    38,    41,    43,    47,    39,    45,    85,    82,
      84,    83,    86,    87,     0,     0,     0,   131,   152,    31,
      33,    40,     0,    20,     0,     0,     0,     0,     0,   103,
     154,     0,     0,   105,   104,     0,   109,     0,   106,   107,
     108,     0,     0,     0,   119,     0,    75,    76,    81,    80,
       0,   114,     0,   113,   115,   117,   116,    37,     0,     0,
       0,     0,     0,     0,     0,   153,   132,     0,     0,    43,
       0,     0,     0,     0,   138,   139,   133,     0,     0,     0,
      19,    28,    92,    89,    91,   150,    18,    26,    88,    99,
     102,    25,    27,   151,    90,   101,   100,    98,    96,    97,
      95,    93,    94,     0,     0,     0,     0,    78,    79,     0,
      74,     0,     0,    41,    62,    64,    61,    63,    42,    53,
      43,    56,    55,    54,    25,    68,    66,    47,    65,    67,
      48,    57,    58,    60,    59,    49,    51,    52,    50,    45,
      46,    69,    71,    73,    70,    72,   134,     0,   137,   136,
     135,     0,   127,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   124,   125,     0,   120,     0,   121,   122,
       0,     0,     0,     0,   128,   129,     0,     0,     0,   148,
     149,   142,   141,   140,     0,     0,     0,   126,   123,    41,
     130,   147,   146,   145,   154,     0,     0,   155,   156,   157
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    39,   148,    56,    74,   160,   149,
     207,    27,    28,    29,    62,   101,   198,    14,   220,   210,
      93,   124,   151,    63,    64,    17,    18,    19,   152,   125,
      21,    97,    98,   153,   154,    67,   155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
     -72,    77,   -72,   -72,   -72,   159,   -72,   -72,   -72,   -72,
     -72,   205,   273,     4,    31,    -2,    33,   -72,   -72,   -72,
      42,   -72,    68,   -72,    57,    69,   -72,    97,   117,   125,
     143,    95,   194,   132,   194,   360,   162,   -72,   -72,   -72,
      82,   300,   -72,   -72,   -72,   199,   171,   224,   224,   223,
     -72,   -72,   -72,   -72,   -72,   226,   294,    31,    28,    75,
     241,   106,    99,   186,   279,   244,   247,   264,    31,   199,
     140,   283,   -72,   -72,    31,   114,   284,   299,   316,   320,
     289,   314,    31,   220,    17,   321,   324,   248,   -72,   -72,
     -72,   -72,   -72,   336,   171,   337,    51,   343,   -72,   -72,
     -72,   -72,   176,    31,   310,   332,   171,   310,   332,   -72,
     310,   171,   332,   -72,   -72,   332,   -72,   332,   -72,   -72,
     -72,   310,   310,   116,   349,   348,    31,    63,   -72,    31,
     294,   -72,   294,   -72,   -72,   -72,   -72,   -72,   300,   300,
     310,   300,   300,   300,   300,   -72,   354,   334,   205,    86,
     352,   353,   355,     5,    68,   -72,   -72,   266,   339,   362,
      31,   -72,    31,   -72,   -72,   -72,    31,   -72,    31,   -72,
     -72,    10,   -72,   -72,    31,   -72,   -72,    31,   -72,   -72,
      31,   -72,   -72,    37,    31,    31,   357,    31,   -72,   161,
      31,   199,   249,   256,    63,   -72,   -72,    31,   -72,    31,
     100,   -72,   -72,    31,    31,    31,    63,   366,   -72,    31,
     -72,    31,    63,   -72,    31,    31,    63,   -72,   -72,   267,
     -72,    31,    63,   -72,   -72,    31,   -72,    44,   -72,   -72,
     -72,    24,   -72,   359,   367,   368,    68,   -72,   210,   210,
     194,   194,   337,   -72,   -72,   334,   -72,   337,   -72,   -72,
     294,   310,    82,    45,   -72,   -72,   369,   371,   372,    68,
     -72,   -72,   -72,   -72,    31,   379,   380,   -72,   -72,   256,
     -72,   -72,   -72,   -72,   294,   171,   171,    31,   -72,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   -72,   -72,     3,   -13,   -10,   179,   239,
      -3,   293,   197,   -72,    80,     0,   351,   -31,   356,   358,
     -72,     1,     6,   361,   -29,   363,   373,   -72,     7,   202,
     -72,   -16,   -71,   253,    15,   112,    16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -156
static const yytype_int16 yytable[] =
{
      40,    41,    15,    72,    11,    30,    79,    16,    20,    37,
      90,     3,    42,     4,    32,    37,    22,    23,    38,   231,
      70,    57,    37,   145,   232,    46,   139,  -155,    60,    36,
       3,    57,     4,    37,    55,   165,    37,   105,    85,   106,
     173,    88,    37,   255,   104,   107,   110,    43,    94,    40,
       3,     3,     4,     4,   240,   122,    44,     3,   253,     4,
      57,   130,   132,   254,   270,   147,    47,   128,    37,    40,
     107,   140,   123,   159,    40,    36,     4,     2,    48,   146,
      37,    13,    45,     3,   108,     4,   109,    36,     3,     5,
     132,     6,     7,     8,     5,    34,    35,   150,    53,    54,
      37,     3,    26,     4,    37,    37,    49,     5,    72,    34,
     114,   183,    36,   107,   140,   112,    40,   113,   186,    37,
      82,    87,     3,   105,     4,   131,    32,   189,    57,    57,
      50,    57,    57,    57,    57,   195,   201,    37,    51,   213,
     217,   223,    69,    53,    54,    37,     3,   132,   150,   132,
     129,    32,     5,   132,   233,   132,    52,    46,   132,   234,
     235,   132,    24,    25,   132,    80,    26,   132,   236,   237,
     104,   107,   140,   244,   132,   242,   249,    70,   243,    96,
     107,   140,     3,    26,    40,    95,   107,   140,     5,    96,
      40,   132,   107,   140,   245,   115,    40,   116,   107,   140,
       3,    40,   107,   140,   278,   279,    40,     4,   107,   140,
      58,     3,    40,     4,    75,    31,     3,    26,   197,   203,
      83,   209,   214,   219,   225,    37,   267,    24,   233,   138,
      26,   268,   256,   234,   235,   103,   102,   257,   258,    46,
      12,    57,   236,   237,    99,   100,   259,   260,    32,   126,
      33,   274,   111,    37,   256,   119,   132,   143,   120,   257,
     258,    37,    46,   247,   132,   250,   248,    96,   259,   260,
      59,    68,    37,    71,    76,   238,   252,   109,    36,    81,
      84,   121,    34,    35,   162,    36,   166,   168,   117,   171,
     118,   174,    34,   108,   177,   133,   180,    53,    54,    37,
     184,   187,   137,    53,    54,    37,     3,    26,   112,   127,
     134,   166,     5,    53,    54,    37,     3,   193,   199,   204,
     205,   211,   215,   221,    61,   115,    36,   135,    77,   117,
     141,   136,   219,   142,    86,    53,    54,    37,     3,    26,
       3,   157,     4,   161,   163,   144,   167,   169,   239,   172,
     113,   175,   265,   266,   178,    96,   181,   156,   191,   192,
     185,   188,   190,    53,    54,    37,     3,    26,   226,   228,
     229,    73,   230,   118,   241,   251,   261,   194,   200,   172,
     206,   212,   216,   222,   262,   263,   271,   190,   272,   273,
     275,   276,    89,   246,    65,   158,    78,    91,   164,    92,
     227,   170,     0,     0,    66,   176,     0,     0,   179,     0,
     182,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
     184,   196,   202,     0,   208,     0,   218,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   277,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   175,   264,
     264,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     185,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   176
};

static const yytype_int16 yycheck[] =
{
      13,    14,     1,    34,     1,     5,    35,     1,     1,     5,
      41,     6,    14,     8,    11,     5,     1,     1,    14,    14,
      33,    31,     5,    94,    19,    22,     9,    17,    31,    12,
       6,    41,     8,     5,    31,   106,     5,     9,    41,    11,
     111,    41,     5,    19,    57,    58,    59,    14,    45,    62,
       6,     6,     8,     8,    17,    68,    14,     6,    14,     8,
      70,    74,    75,    19,    19,    14,     9,    70,     5,    82,
      83,    84,    69,   102,    87,    12,     8,     0,     9,    95,
       5,     1,    14,     6,     9,     8,    11,    12,     6,    12,
     103,    14,    15,    16,    12,     9,    10,    96,     3,     4,
       5,     6,     7,     8,     5,     5,     9,    12,   139,     9,
      11,   121,    12,   126,   127,     9,   129,    11,   121,     5,
      40,    41,     6,     9,     8,    11,   123,    11,   138,   139,
      13,   141,   142,   143,   144,   138,   139,     5,    13,   142,
     143,   144,    10,     3,     4,     5,     6,   160,   147,   162,
      70,   148,    12,   166,   153,   168,    13,   154,   171,   153,
     153,   174,     3,     4,   177,     3,     7,   180,   153,   153,
     183,   184,   185,   189,   187,    14,   192,   190,    17,    18,
     193,   194,     6,     7,   197,    14,   199,   200,    12,    18,
     203,   204,   205,   206,   191,     9,   209,    11,   211,   212,
       6,   214,   215,   216,   275,   276,   219,     8,   221,   222,
      31,     6,   225,     8,    35,    10,     6,     7,   138,   139,
      41,   141,   142,   143,   144,     5,   242,     3,   227,     9,
       7,   247,   231,   227,   227,    56,    10,   231,   231,   236,
       1,   251,   227,   227,    47,    48,   231,   231,   245,    70,
      11,   264,    11,     5,   253,    11,   269,     9,    11,   253,
     253,     5,   259,    14,   277,     9,    17,    18,   253,   253,
      31,    32,     5,    34,    35,     9,     9,    11,    12,    40,
      41,    17,     9,    10,   105,    12,   107,   108,     9,   110,
      11,   112,     9,     9,   115,    11,   117,     3,     4,     5,
     121,   122,    13,     3,     4,     5,     6,     7,     9,    70,
      11,   132,    12,     3,     4,     5,     6,   138,   139,   140,
     141,   142,   143,   144,    31,     9,    12,    11,    35,     9,
       9,    11,   252,     9,    41,     3,     4,     5,     6,     7,
       6,   102,     8,   104,   105,     9,   107,   108,     9,   110,
      11,   112,   240,   241,   115,    18,   117,    14,     9,    11,
     121,   122,   123,     3,     4,     5,     6,     7,    14,    17,
      17,    11,    17,    11,    17,     9,    17,   138,   139,   140,
     141,   142,   143,   144,    17,    17,    17,   148,    17,    17,
      11,    11,    41,   191,    31,   102,    35,    41,   105,    41,
     147,   108,    -1,    -1,    31,   112,    -1,    -1,   115,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,
     251,   138,   139,    -1,   141,    -1,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   239
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     6,     8,    12,    14,    15,    16,    27,
      28,    30,    34,    39,    42,    46,    47,    50,    51,    52,
      53,    55,    59,    61,     3,     4,     7,    36,    37,    38,
      40,    10,    30,    34,     9,    10,    12,     5,    14,    29,
      31,    31,    14,    14,    14,    14,    30,     9,     9,     9,
      13,    13,    13,     3,     4,    30,    31,    32,    33,    34,
      35,    36,    39,    48,    49,    50,    51,    60,    34,    10,
      31,    34,    42,    11,    32,    33,    34,    36,    48,    49,
       3,    34,    39,    33,    34,    35,    36,    39,    40,    41,
      42,    43,    44,    45,    30,    14,    18,    56,    57,    37,
      37,    40,    10,    33,    31,     9,    11,    31,     9,    11,
      31,    11,     9,    11,    11,     9,    11,     9,    11,    11,
      11,    17,    31,    30,    46,    54,    33,    34,    35,    39,
      31,    11,    31,    11,    11,    11,    11,    13,     9,     9,
      31,     9,     9,     9,     9,    57,    56,    14,    30,    34,
      46,    47,    53,    58,    59,    61,    14,    34,    36,    49,
      33,    34,    33,    34,    36,    57,    33,    34,    33,    34,
      36,    33,    34,    57,    33,    34,    36,    33,    34,    36,
      33,    34,    36,    32,    33,    34,    35,    33,    34,    11,
      34,     9,    11,    33,    34,    35,    36,    39,    41,    33,
      34,    35,    36,    39,    33,    33,    34,    35,    36,    39,
      44,    33,    34,    35,    39,    33,    34,    35,    36,    39,
      43,    33,    34,    35,    36,    39,    14,    58,    17,    17,
      17,    14,    19,    46,    47,    53,    59,    61,     9,     9,
      17,    17,    14,    17,    56,    30,    54,    14,    17,    56,
       9,     9,     9,    14,    19,    19,    46,    47,    53,    59,
      61,    17,    17,    17,    34,    60,    60,    56,    56,    33,
      19,    17,    17,    17,    31,    11,    11,    33,    57,    57
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
        case 5:
#line 77 "syntax_analyzer.y"
    {printf("Valid array\n");;}
    break;

  case 6:
#line 78 "syntax_analyzer.y"
    {printf("Valid declaration\n");;}
    break;

  case 7:
#line 79 "syntax_analyzer.y"
    {printf("Valid assignment\n");;}
    break;

  case 8:
#line 80 "syntax_analyzer.y"
    {printf("Valid function call\n");;}
    break;

  case 9:
#line 81 "syntax_analyzer.y"
    {printf("Valid function declaration\n");;}
    break;

  case 10:
#line 82 "syntax_analyzer.y"
    {printf("Valid if/while statement\n");;}
    break;

  case 11:
#line 83 "syntax_analyzer.y"
    {printf("Valid for statement\n");;}
    break;

  case 12:
#line 85 "syntax_analyzer.y"
    { print_report(); ;}
    break;

  case 13:
#line 86 "syntax_analyzer.y"
    {inc_words++;;}
    break;

  case 14:
#line 89 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 15:
#line 92 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 16:
#line 96 "syntax_analyzer.y"
    {
        // for type of variables
        if(!strcmp((yyvsp[(1) - (1)].sval), "int") || !strcmp((yyvsp[(1) - (1)].sval), "float") || !strcmp((yyvsp[(1) - (1)].sval), "double")) (yyval.ival) = 1;    
        if(!strcmp((yyvsp[(1) - (1)].sval), "const") || !strcmp((yyvsp[(1) - (1)].sval), "long")) (yyval.ival) = 2;
        // for functions
        if(!strcmp((yyvsp[(1) - (1)].sval), "scan")) (yyval.ival) = 3;
        if(!strcmp((yyvsp[(1) - (1)].sval), "len")) (yyval.ival) = 4;
        if(!strcmp((yyvsp[(1) - (1)].sval), "cmp")) (yyval.ival) = 5;
        if(!strcmp((yyvsp[(1) - (1)].sval), "print")) (yyval.ival) = 6;
        if(!strcmp((yyvsp[(1) - (1)].sval), "func")) (yyval.ival) = 7;
        // for conditionals
        if(!strcmp((yyvsp[(1) - (1)].sval), "if")) (yyval.ival) = 8;
        if(!strcmp((yyvsp[(1) - (1)].sval), "else")) (yyval.ival) = 9;
        if(!strcmp((yyvsp[(1) - (1)].sval), "while")) (yyval.ival) = 10;
        if(!strcmp((yyvsp[(1) - (1)].sval), "for")) (yyval.ival) = 11;
        if(!strcmp((yyvsp[(1) - (1)].sval), "void")) (yyval.ival) = 12;
    ;}
    break;

  case 17:
#line 116 "syntax_analyzer.y"
    { 
        if(!strcmp((yyvsp[(1) - (1)].sval), "+")) (yyval.ival) = 1;
        if(!strcmp((yyvsp[(1) - (1)].sval), "-")) (yyval.ival) = 2;
        if(!strcmp((yyvsp[(1) - (1)].sval), "*")) (yyval.ival) = 3;
        if(!strcmp((yyvsp[(1) - (1)].sval), "/")) (yyval.ival) = 4;
        if (!strcmp((yyvsp[(1) - (1)].sval), "==")) (yyval.ival) = 5;
        if (!strcmp((yyvsp[(1) - (1)].sval), "!=")) (yyval.ival) = 6;
        if (!strcmp((yyvsp[(1) - (1)].sval), ">")) (yyval.ival) = 7;
        if (!strcmp((yyvsp[(1) - (1)].sval), "<")) (yyval.ival) = 8;
        if (!strcmp((yyvsp[(1) - (1)].sval), ">=")) (yyval.ival) = 9;
        if (!strcmp((yyvsp[(1) - (1)].sval), "<=")) (yyval.ival) = 10;  
        if(!strcmp((yyvsp[(1) - (1)].sval), "%")) (yyval.ival) = 11;
        if(!strcmp((yyvsp[(1) - (1)].sval), "=")) (yyval.ival) = 12;
        if (!strcmp((yyvsp[(1) - (1)].sval), "+=")) (yyval.ival) = 13;
        if (!strcmp((yyvsp[(1) - (1)].sval), "-=")) (yyval.ival) = 14;
        if (!strcmp((yyvsp[(1) - (1)].sval), "*=")) (yyval.ival) = 15;
        if (!strcmp((yyvsp[(1) - (1)].sval), "/=")) (yyval.ival) = 16;
        if (!strcmp((yyvsp[(1) - (1)].sval), "++")) (yyval.ival) = 17;
        if (!strcmp((yyvsp[(1) - (1)].sval), "--")) (yyval.ival) = 18;
        if (!strcmp((yyvsp[(1) - (1)].sval), "&")) (yyval.ival) = 19;
    ;}
    break;

  case 18:
#line 140 "syntax_analyzer.y"
    {
        switch((yyvsp[(2) - (3)].ival)) {
            case 1: (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); break;
            case 2: (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); break;
            case 3: (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); break;
            case 4: (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); break;
            case 5: (yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); break;
            case 6: (yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); break;
            case 7: (yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); break;
            case 8: (yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); break;
            case 9: (yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); break;
            case 10: (yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); break;
            case 11: (yyval.dval) = (int)(yyvsp[(1) - (3)].dval) % (int)(yyvsp[(3) - (3)].dval); break;
            case 12: (yyval.dval) = (yyvsp[(3) - (3)].dval); break;
            case 13: (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); break;
            case 14: (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); break;
            case 15: (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); break;
            case 16: (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); break;
        }
    ;}
    break;

  case 19:
#line 160 "syntax_analyzer.y"
    {
        switch((yyvsp[(2) - (3)].ival)) {
            case 1: (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); break;
            case 2: (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); break;
            case 3: (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); break;
            case 4: (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); break;
            case 5: (yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); break;
            case 6: (yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); break;
            case 7: (yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); break;
            case 8: (yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); break;
            case 9: (yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); break;
            case 10: (yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); break;
            case 11: (yyval.dval) = (int)(yyvsp[(1) - (3)].dval) % (int)(yyvsp[(3) - (3)].dval); break;
            case 12: (yyval.dval) = (yyvsp[(3) - (3)].dval); break;
            case 13: (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); break;
            case 14: (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); break;
            case 15: (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); break;
            case 16: (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); break;
            case 17: (yyval.dval) = (yyvsp[(1) - (3)].dval) + 1; break;
            case 18: (yyval.dval) = (yyvsp[(1) - (3)].dval) - 1; break;
        }
    ;}
    break;

  case 20:
#line 182 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
            //case 19: $$ = $2; break;
        }
    ;}
    break;

  case 21:
#line 191 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 22:
#line 192 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 23:
#line 193 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 24:
#line 197 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 25:
#line 201 "syntax_analyzer.y"
    {;}
    break;

  case 26:
#line 202 "syntax_analyzer.y"
    {;}
    break;

  case 27:
#line 203 "syntax_analyzer.y"
    {;}
    break;

  case 28:
#line 204 "syntax_analyzer.y"
    {;}
    break;

  case 29:
#line 207 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 31:
#line 212 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 33:
#line 216 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 34:
#line 220 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0;;}
    break;

  case 35:
#line 221 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 36:
#line 222 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 37:
#line 223 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 38:
#line 224 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid arr"); (yyval.ival) = 4; val_com=0;;}
    break;

  case 40:
#line 230 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 42:
#line 234 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 44:
#line 238 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 46:
#line 242 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 48:
#line 246 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 49:
#line 250 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 50:
#line 251 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 51:
#line 252 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 52:
#line 253 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 53:
#line 255 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 54:
#line 256 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 55:
#line 257 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 56:
#line 258 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 57:
#line 260 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 58:
#line 261 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 59:
#line 262 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 60:
#line 263 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 61:
#line 265 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 62:
#line 266 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 63:
#line 267 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 64:
#line 268 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 65:
#line 270 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 66:
#line 271 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 67:
#line 272 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 68:
#line 273 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 69:
#line 275 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 70:
#line 276 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 71:
#line 277 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 72:
#line 278 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 73:
#line 279 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 74:
#line 285 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 75:
#line 287 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 76:
#line 288 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 77:
#line 290 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 78:
#line 291 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 79:
#line 292 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 80:
#line 294 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12 ) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 81:
#line 296 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 82:
#line 301 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)  yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 83:
#line 302 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || val_arr_com) yyerror("Invalid assignment"); var_com = 0; val_arr_com = 0; cor_expr++;;}
    break;

  case 84:
#line 303 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 85:
#line 304 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 86:
#line 305 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 87:
#line 306 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); var_com = 0; val_ass_com = 0; cor_expr++;;}
    break;

  case 103:
#line 332 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 104:
#line 333 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 4) yyerror("Invalid function call");;}
    break;

  case 105:
#line 334 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 106:
#line 338 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 107:
#line 342 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call");;}
    break;

  case 108:
#line 343 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call");;}
    break;

  case 109:
#line 344 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 110:
#line 349 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 111:
#line 350 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 112:
#line 351 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 113:
#line 353 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 114:
#line 354 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 115:
#line 355 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 116:
#line 356 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 117:
#line 357 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 118:
#line 358 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 121:
#line 368 "syntax_analyzer.y"
    {if((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 122:
#line 369 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++; ;}
    break;

  case 123:
#line 370 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (7)].sval); cor_expr++;;}
    break;

  case 124:
#line 372 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 125:
#line 373 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 126:
#line 374 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7 || (yyvsp[(4) - (7)].ival) != 12) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (7)].sval); cor_expr++;;}
    break;

  case 132:
#line 387 "syntax_analyzer.y"
    {printf("1C");;}
    break;

  case 133:
#line 388 "syntax_analyzer.y"
    {printf("2C");;}
    break;

  case 134:
#line 389 "syntax_analyzer.y"
    {printf("3C");;}
    break;

  case 138:
#line 396 "syntax_analyzer.y"
    {printf("111111");;}
    break;

  case 139:
#line 397 "syntax_analyzer.y"
    {printf("222222");;}
    break;

  case 143:
#line 402 "syntax_analyzer.y"
    {printf("33333");;}
    break;

  case 144:
#line 403 "syntax_analyzer.y"
    {printf("44444");;}
    break;

  case 148:
#line 408 "syntax_analyzer.y"
    {printf("55555");;}
    break;

  case 149:
#line 409 "syntax_analyzer.y"
    {printf("66666");;}
    break;

  case 150:
#line 414 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); (yyval.ival) = (yyvsp[(1) - (5)].ival); cor_expr++;;}
    break;

  case 151:
#line 416 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); (yyval.ival) = (yyvsp[(1) - (5)].ival); cor_expr++;;}
    break;

  case 152:
#line 417 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 9 || (yyvsp[(1) - (3)].ival) != 8) yyerror("Invalid if/while statement"); cor_expr++;;}
    break;

  case 153:
#line 418 "syntax_analyzer.y"
    {if ((yyvsp[(3) - (4)].ival) != 9 || (yyvsp[(1) - (4)].ival) != 8) yyerror("Invalid if/while statement"); cor_expr++;;}
    break;

  case 154:
#line 422 "syntax_analyzer.y"
    {if((yyvsp[(2) - (2)].ival) != 17 && (yyvsp[(2) - (2)].ival) != 18) yyerror("Invalid --/++ operator"); cor_expr++;;}
    break;

  case 155:
#line 423 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 156:
#line 427 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); cor_expr++;;}
    break;

  case 157:
#line 428 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); cor_expr++;;}
    break;


/* Line 1267 of yacc.c.  */
#line 2339 "syntax_analyzer.tab.c"
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


#line 431 "syntax_analyzer.y"

/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
}

void print_report() {
    printf("-------Report:-------\n");
    printf("Correct Words: %d\n", cor_words);
    printf("Correct Expressions: %d\n", cor_expr);
    printf("Incorrect Words: %d\n", inc_words);
    printf("Incorrect Expressions: %d\n", inc_expr);
}

/* H synarthsh main pou apotelei kai to shmeio ekkinhshs tou programmatos.
   Sthn sygkekrimenh periptwsh apla kalei thn synarthsh yyparse tou Bison
   gia na ksekinhsei h syntaktikh analysh. */
int main(int argc,char **argv) {

    if(argc == 2)
	    yyin=fopen(argv[1],"r");
	else
		yyin=stdin;
	int parse = yyparse();   

    if (parse == 0)
        fprintf(stderr, "Successful parsing.\n");  
    else
        fprintf(stderr, "Error found.\n");
    return 0;
}
