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
#line 43 "syntax_analyzer.y"


        // Including all the necessary C libraries
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>
        #include <string.h>
        
        // Definition of function and variables required for the program.
        extern char *yytext;
        extern FILE *yyout;
        extern int yyerror(const char *);
        extern int yylex(void);
        void print_report(void);
        extern FILE *yyin;

        extern int line; // line counter
        // Counters for the comma (,) symbol (defined as SYMBOL in the lexer)
        int var_com = 0, val_com = 0, val_arr_com = 0, val_ass_com = 0;
        int errflag = 0;   // error counter
        extern int cor_words;  // correct word counter (flex)
        int cor_expr = 0;      // correct expressions counter
        extern int inc_words;  // incorrect words counter
        int inc_expr=0;        // incorrect expressions counter
        int par_warn=0;


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
#line 71 "syntax_analyzer.y"
{
    int ival;
    double dval;
    char *sval;
}
/* Line 193 of yacc.c.  */
#line 167 "syntax_analyzer.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 180 "syntax_analyzer.tab.c"

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
#define YYLAST   575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

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
       0,     0,     3,     4,     7,    11,    13,    17,    21,    25,
      28,    31,    33,    35,    37,    39,    41,    43,    45,    47,
      49,    53,    57,    60,    62,    64,    66,    68,    72,    76,
      80,    84,    86,    88,    92,    94,    98,   102,   106,   110,
     115,   119,   121,   125,   127,   131,   133,   137,   139,   143,
     145,   149,   153,   157,   161,   165,   169,   173,   177,   181,
     185,   189,   193,   197,   201,   205,   209,   213,   217,   221,
     225,   229,   233,   237,   241,   245,   249,   252,   257,   262,
     267,   273,   277,   283,   289,   295,   300,   305,   309,   313,
     317,   321,   325,   329,   333,   337,   341,   345,   349,   353,
     357,   361,   365,   369,   373,   377,   381,   385,   389,   394,
     399,   404,   409,   414,   419,   424,   430,   432,   434,   436,
     441,   446,   451,   456,   461,   465,   467,   471,   478,   485,
     493,   501,   508,   515,   523,   527,   532,   537,   543,   545,
     548,   551,   555,   558,   561,   564,   566,   568,   572,   576,
     580,   583,   586,   591,   596,   601,   605,   609,   615,   621,
     625,   630,   633,   637,   647
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    -1,    26,    27,    -1,    26,     1,    14,
      -1,    14,    -1,    46,    17,    14,    -1,    47,    17,    14,
      -1,    53,    17,    14,    -1,    46,    17,    -1,    47,    17,
      -1,    55,    -1,    59,    -1,    61,    -1,    15,    -1,    16,
      -1,     8,    -1,     5,    -1,    28,    -1,    29,    -1,    33,
      31,    33,    -1,    32,    31,    33,    -1,    31,    33,    -1,
       3,    -1,     4,    -1,    32,    -1,     6,    -1,    34,    31,
      33,    -1,    33,    31,    34,    -1,    34,    31,    34,    -1,
      32,    31,    34,    -1,     7,    -1,     3,    -1,     3,     9,
      37,    -1,     4,    -1,     4,     9,    38,    -1,    12,    37,
      13,    -1,    12,    38,    13,    -1,    12,    40,    13,    -1,
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
      34,    -1,    30,    34,    31,     3,    -1,    30,    34,    31,
       4,    -1,    30,    34,    31,    34,    -1,    30,    34,    31,
      34,    29,    -1,    30,    30,    34,    -1,    30,    30,    34,
      31,     3,    -1,    30,    30,    34,    31,     4,    -1,    30,
      30,    34,    31,    34,    -1,    30,    34,    31,    39,    -1,
      30,    34,    31,    35,    -1,    42,    31,    41,    -1,    42,
      31,    43,    -1,    42,    31,    42,    -1,    42,    31,    40,
      -1,    42,    31,    44,    -1,    42,    31,    45,    -1,    34,
       9,    33,    -1,    33,     9,    34,    -1,    36,     9,    33,
      -1,    33,     9,    36,    -1,    33,     9,    33,    -1,    49,
       9,    34,    -1,    49,     9,    36,    -1,    49,     9,    33,
      -1,    48,     9,    34,    -1,    48,     9,    36,    -1,    48,
       9,    33,    -1,    34,     9,    34,    -1,    36,     9,    36,
      -1,    36,     9,    34,    -1,    34,     9,    36,    -1,    30,
      10,    34,    11,    -1,    30,    10,    39,    11,    -1,    30,
      10,    36,    11,    -1,    30,    10,    49,    11,    -1,    30,
      10,    50,    11,    -1,    30,    10,    51,    11,    -1,    30,
      10,    48,    11,    -1,    30,    10,    30,    34,    11,    -1,
      50,    -1,    51,    -1,    52,    -1,    34,    10,    34,    11,
      -1,    34,    10,    33,    11,    -1,    34,    10,    36,    11,
      -1,    34,    10,    49,    11,    -1,    34,    10,    48,    11,
      -1,    34,    10,    11,    -1,    46,    -1,    46,     9,    54,
      -1,    30,    34,    10,    54,    11,    17,    -1,    30,    34,
      10,    54,    11,    56,    -1,    30,    34,    10,    54,    11,
      14,    56,    -1,    30,    33,    34,    10,    54,    11,    17,
      -1,    30,    34,    10,    30,    11,    17,    -1,    30,    34,
      10,    30,    11,    56,    -1,    30,    34,    10,    30,    11,
      14,    56,    -1,    18,    58,    19,    -1,    18,    14,    58,
      19,    -1,    18,    58,    14,    19,    -1,    18,    14,    58,
      14,    19,    -1,    56,    -1,    14,    56,    -1,    56,    14,
      -1,    14,    56,    14,    -1,    53,    17,    -1,    47,    17,
      -1,    46,    17,    -1,    59,    -1,    61,    -1,    58,    53,
      17,    -1,    58,    47,    17,    -1,    58,    46,    17,    -1,
      58,    59,    -1,    58,    61,    -1,    58,    14,    53,    17,
      -1,    58,    14,    47,    17,    -1,    58,    14,    46,    17,
      -1,    58,    14,    59,    -1,    58,    14,    61,    -1,    30,
      10,    33,    11,    57,    -1,    30,    10,    35,    11,    57,
      -1,    59,    30,    57,    -1,    59,    14,    30,    57,    -1,
      34,    31,    -1,    34,    31,    33,    -1,    30,    10,    60,
      17,    35,    17,    60,    11,    57,    -1,    30,    10,    60,
      17,    32,    17,    60,    11,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    98,    99,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   115,   119,   124,   149,
     174,   194,   216,   226,   227,   228,   233,   238,   239,   240,
     241,   246,   252,   253,   256,   257,   262,   263,   264,   265,
     266,   279,   280,   283,   284,   287,   288,   291,   292,   295,
     296,   305,   306,   307,   308,   310,   311,   312,   313,   315,
     316,   317,   318,   320,   321,   322,   323,   325,   326,   327,
     328,   330,   331,   332,   333,   334,   341,   345,   346,   347,
     348,   355,   356,   357,   358,   364,   371,   377,   378,   392,
     393,   394,   395,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   417,   418,   419,   420,   431,   432,
     438,   444,   449,   450,   451,   452,   468,   469,   470,   474,
     475,   476,   477,   478,   479,   485,   486,   495,   496,   497,
     498,   501,   502,   503,   508,   509,   510,   511,   516,   517,
     518,   519,   524,   525,   526,   527,   528,   530,   531,   532,
     533,   534,   536,   537,   538,   539,   540,   549,   554,   559,
     560,   566,   567,   572,   573
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
       0,    25,    26,    26,    26,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    28,    29,    30,    31,
      32,    32,    32,    33,    33,    33,    34,    35,    35,    35,
      35,    36,    37,    37,    38,    38,    39,    39,    39,    39,
      39,    40,    40,    41,    41,    42,    42,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    47,    47,    47,
      47,    47,    47,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    49,    49,    49,    49,    50,    50,
      50,    51,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    60,    60,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     1,     3,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     1,     3,     1,     3,     3,     3,     3,     4,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     4,     4,     4,
       5,     3,     5,     5,     5,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       4,     4,     4,     4,     4,     5,     1,     1,     1,     4,
       4,     4,     4,     4,     3,     1,     3,     6,     6,     7,
       7,     6,     6,     7,     3,     4,     4,     5,     1,     2,
       2,     3,     2,     2,     2,     1,     1,     3,     3,     3,
       2,     2,     4,     4,     4,     3,     3,     5,     5,     3,
       4,     2,     3,     9,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    26,    16,     5,    14,    15,     3,
      18,     0,    45,     0,     0,     0,   116,   117,   118,     0,
      11,    12,    13,     4,    23,    24,    17,     0,    19,     0,
       0,    25,     0,    76,     0,     0,     0,     9,    10,     0,
       0,     0,    31,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    22,     0,     0,
       0,     0,     0,    45,    46,   124,     0,     0,     0,     0,
       0,    43,    45,    49,    41,    47,    90,    87,    89,    88,
      91,    92,     6,     7,     8,     0,     0,     0,   138,   159,
      32,    34,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   161,     0,     0,   110,   109,
       0,     0,   114,     0,   111,   112,   113,     0,     0,    21,
      20,     0,     0,   125,     0,    77,    78,     0,    79,    86,
      85,   120,   119,   121,   123,   122,     0,     0,     0,     0,
       0,     0,     0,   160,   139,     0,     0,     0,     0,     0,
       0,   145,   146,   140,     0,     0,     0,    36,    37,    38,
       0,     0,     0,   115,    30,    97,    94,    96,   157,    28,
      93,   104,   107,     0,    27,    29,   158,    95,   106,   105,
       0,    40,   103,   101,   102,   100,    98,    99,     0,     0,
       0,    82,    83,    84,     0,     0,     0,    76,     0,     0,
      19,    43,    64,    66,    63,    65,    44,    55,    45,    58,
      57,    56,    27,    70,    68,    49,    67,    69,    50,    59,
      60,    62,    61,    42,    51,    53,    54,    52,    47,    48,
      71,    73,    75,    72,    74,   141,     0,   144,   143,   142,
       0,   134,     0,     0,     0,   150,   151,    33,    35,     0,
       0,    39,     0,     0,     0,     0,   131,   132,   126,     0,
     127,   128,     0,     0,     0,     0,   135,   136,     0,     0,
       0,   155,   156,   149,   148,   147,     0,     0,     0,   130,
     133,   129,    43,   137,   154,   153,   152,   161,     0,     0,
     162,   164,   163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    28,   146,    30,    31,   127,    12,
     215,    92,    93,    94,    50,   223,   206,    13,   229,   218,
      81,   123,   148,    51,    52,    16,    17,    18,   149,   124,
      20,    88,    89,   150,   151,    55,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
    -119,    60,  -119,    -2,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,   134,    79,    21,    47,    84,  -119,  -119,  -119,    93,
    -119,    13,  -119,  -119,  -119,  -119,  -119,    78,  -119,   164,
     328,    21,   191,     6,   164,    92,    66,   105,   129,   146,
     197,    49,  -119,   117,   250,    21,   172,   154,   179,    39,
     100,    68,   137,   199,   205,   217,    21,    21,   328,   328,
     252,   197,    88,   258,  -119,  -119,   182,   280,   299,   326,
     327,   285,   104,   283,   296,   292,  -119,  -119,  -119,  -119,
    -119,   332,  -119,  -119,  -119,    49,   316,    41,   315,  -119,
     334,   335,   336,   337,   338,   340,   213,   344,   320,   311,
      49,   320,   311,  -119,   346,   320,    49,   311,  -119,  -119,
     161,   311,  -119,   311,  -119,  -119,  -119,   320,   324,    21,
      21,   197,   218,   347,   348,   352,   353,    21,   142,  -119,
      21,  -119,  -119,  -119,  -119,  -119,    66,    66,   320,    66,
      66,    66,    66,  -119,   349,   253,   264,   345,   350,   351,
       9,    13,  -119,  -119,   361,   362,   358,  -119,  -119,  -119,
     267,   331,   359,  -119,  -119,    21,  -119,  -119,  -119,  -119,
      21,  -119,  -119,   356,    37,  -119,  -119,    21,  -119,  -119,
     368,    21,    21,  -119,  -119,    21,  -119,  -119,    40,    21,
     354,  -119,  -119,  -119,   253,   363,   221,    21,   197,   236,
      -3,   293,   142,  -119,  -119,    21,  -119,    21,   120,  -119,
    -119,    21,    21,    21,   142,   372,  -119,    21,  -119,    21,
     142,  -119,    21,  -119,    21,   142,  -119,  -119,   298,  -119,
      21,   142,  -119,  -119,    21,  -119,    32,  -119,  -119,  -119,
      16,  -119,   366,   369,   374,    13,  -119,  -119,  -119,   313,
     313,  -119,   164,   164,   375,   316,  -119,  -119,  -119,   316,
    -119,  -119,   328,   320,   161,    33,  -119,  -119,   376,   381,
     386,    13,  -119,  -119,  -119,  -119,    21,   378,   393,  -119,
    -119,  -119,   293,  -119,  -119,  -119,  -119,   328,    49,    49,
      21,  -119,  -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,   257,   101,   -13,    91,   144,   277,
     260,   325,   251,   254,    -6,   113,   371,   -29,   384,   389,
    -119,     0,     1,   373,   -31,   383,   385,  -119,     8,  -118,
    -119,   -73,   -75,   266,    28,    95,    35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -163
static const yytype_int16 yytable[] =
{
      36,    14,    15,   195,    70,    64,   -80,    78,   -80,    19,
     143,    26,    23,   144,   -80,     4,    61,     5,    58,    59,
      62,     5,     4,   240,     5,   168,    26,    40,   241,    21,
      75,   176,    98,   101,   105,   267,    22,   110,     4,     4,
       5,     5,    26,   118,    59,    26,   265,     4,   107,     5,
     108,   266,   283,    59,  -162,   145,   130,   252,   101,   138,
       2,     3,   110,    86,    37,   162,     4,    87,     5,    24,
      25,    26,     4,    42,     6,     7,     8,   111,    43,   112,
     258,    24,    25,    26,     4,    42,     5,   147,    34,    35,
      43,   125,   126,    26,     4,    24,    25,    26,     4,    42,
      43,    38,    11,    65,   181,    26,    59,    59,    64,    26,
      39,   109,    29,   137,   101,   138,   104,   110,    45,    82,
      90,    91,    41,   257,    42,    26,   261,    45,    44,    34,
     205,   211,   104,   217,   222,   228,   234,    24,    25,    26,
       4,    85,     5,    83,    27,   147,   113,    26,   114,    76,
     242,   243,    59,    45,   104,    32,    95,    59,   244,    26,
      84,    59,   122,   102,    59,   103,   104,     4,   110,    59,
       4,    46,    59,    43,    57,    98,   138,    26,   245,    66,
      71,    99,   280,   100,    62,   246,   281,    26,   101,   138,
     106,    99,   110,   131,   101,   138,    26,     4,   110,    59,
     101,   138,   119,   120,   110,     5,   101,   138,   188,   110,
     115,   101,   138,   291,   292,   110,   116,   101,   138,     4,
      42,   110,   194,    29,     4,    43,     5,    45,    45,   196,
      45,    45,    45,    45,   117,   255,   242,   243,   256,    87,
     268,   269,   119,   165,   244,   120,   170,    29,   270,   174,
     259,   177,    41,   260,    87,   182,     4,   185,   228,     4,
      96,     5,   121,   287,   245,   268,   269,    34,   271,    59,
       4,   246,     5,   270,    27,   272,   249,    59,   103,   104,
     201,   207,   212,   213,   219,   224,   230,    48,    33,   102,
      26,   132,   139,   271,   136,    29,    73,    26,    26,   194,
     272,   141,   262,    26,    47,   140,    56,   264,   107,    60,
     133,    63,    67,    72,    24,    25,    26,     4,    42,     4,
      42,    97,   129,    24,    25,    26,     4,   191,   192,   153,
       4,    24,    25,    26,    87,   111,   113,   134,   135,   128,
     250,   142,   108,   154,   155,   156,    41,   277,   278,   173,
     157,   158,    49,   159,    45,   163,   198,   -23,   -24,   199,
      68,    74,   237,   235,    90,    42,    91,   238,   239,   251,
     114,   253,    41,   160,   254,   164,   166,   190,   169,   171,
     104,   263,   175,   273,   178,   200,   274,   180,   183,   288,
     186,   275,   279,   284,   189,   193,   203,   209,   285,   197,
     221,   226,   232,   286,   289,   247,   282,    77,    69,   248,
      53,   236,    54,   202,   208,   175,   214,   220,   225,   231,
      79,   161,     0,   197,   167,    80,     0,   172,     0,     0,
       0,   290,   179,     0,     0,     0,   184,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   210,     0,   216,     0,   227,   233,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   178,     0,   276,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   179
};

static const yytype_int16 yycheck[] =
{
      13,     1,     1,   121,    35,    34,     9,    36,    11,     1,
      85,     5,    14,    86,    17,     6,    10,     8,    31,    32,
      33,     8,     6,    14,     8,   100,     5,    14,    19,     1,
      36,   106,    45,    46,    47,    19,     1,    50,     6,     6,
       8,     8,     5,    56,    57,     5,    14,     6,     9,     8,
      11,    19,    19,    66,    17,    14,    62,    17,    71,    72,
       0,     1,    75,    14,    17,    96,     6,    18,     8,     3,
       4,     5,     6,     7,    14,    15,    16,     9,    12,    11,
     198,     3,     4,     5,     6,     7,     8,    87,     9,    10,
      12,     3,     4,     5,     6,     3,     4,     5,     6,     7,
      12,    17,     1,    11,   110,     5,   119,   120,   137,     5,
      17,    11,    11,     9,   127,   128,    12,   130,    27,    14,
       3,     4,    21,   196,     7,     5,   199,    36,    27,     9,
     136,   137,    12,   139,   140,   141,   142,     3,     4,     5,
       6,    40,     8,    14,    10,   145,     9,     5,    11,    36,
     150,   150,   165,    62,    12,    11,    43,   170,   150,     5,
      14,   174,    61,     9,   177,    11,    12,     6,   181,   182,
       6,    27,   185,    12,    30,   188,   189,     5,   150,    35,
      36,     9,   255,    11,   197,   150,   259,     5,   201,   202,
      11,     9,   205,    11,   207,   208,     5,     6,   211,   212,
     213,   214,    58,    59,   217,     8,   219,   220,   117,   222,
      11,   224,   225,   288,   289,   228,    11,   230,   231,     6,
       7,   234,   121,   122,     6,    12,     8,   136,   137,    11,
     139,   140,   141,   142,    17,    14,   236,   236,    17,    18,
     240,   240,    98,    99,   236,   101,   102,   146,   240,   105,
      14,   107,   151,    17,    18,   111,     6,   113,   264,     6,
      10,     8,    10,   276,   236,   265,   265,     9,   240,   282,
       6,   236,     8,   265,    10,   240,     9,   290,    11,    12,
     136,   137,   138,   139,   140,   141,   142,    27,    11,     9,
       5,    11,     9,   265,     9,   194,    36,     5,     5,   198,
     265,     9,     9,     5,    27,     9,    29,     9,     9,    32,
      11,    34,    35,    36,     3,     4,     5,     6,     7,     6,
       7,    44,    62,     3,     4,     5,     6,     3,     4,    14,
       6,     3,     4,     5,    18,     9,     9,    11,    11,    62,
       9,     9,    11,     9,     9,     9,   245,   252,   253,     3,
      13,    13,    27,    13,   263,    11,     9,     5,     5,    11,
      35,    36,    17,    14,     3,     7,     4,    17,    17,    13,
      11,    17,   271,    96,    11,    98,    99,   117,   101,   102,
      12,     9,   105,    17,   107,   128,    17,   110,   111,    11,
     113,    17,    17,    17,   117,   118,   136,   137,    17,   122,
     140,   141,   142,    17,    11,   154,   262,    36,    35,   155,
      27,   145,    27,   136,   137,   138,   139,   140,   141,   142,
      36,    96,    -1,   146,    99,    36,    -1,   102,    -1,    -1,
      -1,   287,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,    -1,   139,    -1,   141,   142,    -1,    -1,
      -1,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,   250,    -1,   252,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     263,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,   250
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     1,     6,     8,    14,    15,    16,    27,
      28,    30,    34,    42,    46,    47,    50,    51,    52,    53,
      55,    59,    61,    14,     3,     4,     5,    10,    29,    30,
      31,    32,    33,    34,     9,    10,    31,    17,    17,    17,
      14,    30,     7,    12,    30,    32,    33,    34,    35,    36,
      39,    48,    49,    50,    51,    60,    34,    33,    31,    31,
      34,    10,    31,    34,    42,    11,    33,    34,    36,    48,
      49,    33,    34,    35,    36,    39,    40,    41,    42,    43,
      44,    45,    14,    14,    14,    30,    14,    18,    56,    57,
       3,     4,    36,    37,    38,    40,    10,    34,    31,     9,
      11,    31,     9,    11,    12,    31,    11,     9,    11,    11,
      31,     9,    11,     9,    11,    11,    11,    17,    31,    33,
      33,    10,    30,    46,    54,     3,     4,    33,    34,    35,
      39,    11,    11,    11,    11,    11,     9,     9,    31,     9,
       9,     9,     9,    57,    56,    14,    30,    46,    47,    53,
      58,    59,    61,    14,     9,     9,     9,    13,    13,    13,
      34,    36,    49,    11,    34,    33,    34,    36,    57,    34,
      33,    34,    36,     3,    33,    34,    57,    33,    34,    36,
      34,    39,    33,    34,    36,    33,    34,    36,    32,    34,
      35,     3,     4,    34,    30,    54,    11,    34,     9,    11,
      29,    33,    34,    35,    36,    39,    41,    33,    34,    35,
      36,    39,    33,    33,    34,    35,    36,    39,    44,    33,
      34,    35,    39,    40,    33,    34,    35,    36,    39,    43,
      33,    34,    35,    36,    39,    14,    58,    17,    17,    17,
      14,    19,    46,    47,    53,    59,    61,    37,    38,     9,
       9,    13,    17,    17,    11,    14,    17,    56,    54,    14,
      17,    56,     9,     9,     9,    14,    19,    19,    46,    47,
      53,    59,    61,    17,    17,    17,    34,    60,    60,    17,
      56,    56,    33,    19,    17,    17,    17,    31,    11,    11,
      33,    57,    57
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
        case 4:
#line 99 "syntax_analyzer.y"
    {inc_expr++; yyerrok;;}
    break;

  case 14:
#line 111 "syntax_analyzer.y"
    { print_report();;}
    break;

  case 16:
#line 115 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 17:
#line 119 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 18:
#line 124 "syntax_analyzer.y"
    {
        // regarding the type of variables.
        if(!strcmp((yyvsp[(1) - (1)].sval), "int") )  (yyval.ival) = 1;   
        if(!strcmp((yyvsp[(1) - (1)].sval), "float")  || !strcmp((yyvsp[(1) - (1)].sval), "double")) (yyval.ival) = 13;
        if(!strcmp((yyvsp[(1) - (1)].sval), "const")  || !strcmp((yyvsp[(1) - (1)].sval), "long"))   (yyval.ival) = 2; // these regard the keyword the is before the type and they are assigned a different value
        
        // for functions
        if(!strcmp((yyvsp[(1) - (1)].sval), "scan"))  (yyval.ival) = 3;
        if(!strcmp((yyvsp[(1) - (1)].sval), "len"))   (yyval.ival) = 4;
        if(!strcmp((yyvsp[(1) - (1)].sval), "cmp"))   (yyval.ival) = 5;
        if(!strcmp((yyvsp[(1) - (1)].sval), "print")) (yyval.ival) = 6;
        if(!strcmp((yyvsp[(1) - (1)].sval), "func"))  (yyval.ival) = 7;
        
        // for conditionals
        if(!strcmp((yyvsp[(1) - (1)].sval), "if"))    (yyval.ival) = 8;
        if(!strcmp((yyvsp[(1) - (1)].sval), "else"))  (yyval.ival) = 9;
        if(!strcmp((yyvsp[(1) - (1)].sval), "while")) (yyval.ival) = 10;
        if(!strcmp((yyvsp[(1) - (1)].sval), "for"))   (yyval.ival) = 11;
        if(!strcmp((yyvsp[(1) - (1)].sval), "void"))  (yyval.ival) = 12;
    ;}
    break;

  case 19:
#line 149 "syntax_analyzer.y"
    { 
        if (!strcmp((yyvsp[(1) - (1)].sval), "+"))  (yyval.ival) = 1;
        if (!strcmp((yyvsp[(1) - (1)].sval), "-"))  (yyval.ival) = 2;
        if (!strcmp((yyvsp[(1) - (1)].sval), "*"))  (yyval.ival) = 3;
        if (!strcmp((yyvsp[(1) - (1)].sval), "/"))  (yyval.ival) = 4;
        if (!strcmp((yyvsp[(1) - (1)].sval), "==")) (yyval.ival) = 5;
        if (!strcmp((yyvsp[(1) - (1)].sval), "!=")) (yyval.ival) = 6;
        if (!strcmp((yyvsp[(1) - (1)].sval), ">"))  (yyval.ival) = 7;
        if (!strcmp((yyvsp[(1) - (1)].sval), "<"))  (yyval.ival) = 8;
        if (!strcmp((yyvsp[(1) - (1)].sval), ">=")) (yyval.ival) = 9;
        if (!strcmp((yyvsp[(1) - (1)].sval), "<=")) (yyval.ival) = 10;  
        if (!strcmp((yyvsp[(1) - (1)].sval), "%"))  (yyval.ival) = 11;
        if (!strcmp((yyvsp[(1) - (1)].sval), "="))  (yyval.ival) = 12;
        if (!strcmp((yyvsp[(1) - (1)].sval), "+=")) (yyval.ival) = 13;
        if (!strcmp((yyvsp[(1) - (1)].sval), "-=")) (yyval.ival) = 14;
        if (!strcmp((yyvsp[(1) - (1)].sval), "*=")) (yyval.ival) = 15;
        if (!strcmp((yyvsp[(1) - (1)].sval), "/=")) (yyval.ival) = 16;
        if (!strcmp((yyvsp[(1) - (1)].sval), "++")) (yyval.ival) = 17;
        if (!strcmp((yyvsp[(1) - (1)].sval), "--")) (yyval.ival) = 18;
        if (!strcmp((yyvsp[(1) - (1)].sval), "&"))  (yyval.ival) = 19;
    ;}
    break;

  case 20:
#line 174 "syntax_analyzer.y"
    {
        switch((yyvsp[(2) - (3)].ival)) {
            case 1:  (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); break;
            case 2:  (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); break;
            case 3:  (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); break;
            case 4:  (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); break;
            case 5:  (yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); break;
            case 6:  (yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); break;
            case 7:  (yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); break;
            case 8:  (yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); break;
            case 9:  (yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); break;
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

  case 21:
#line 194 "syntax_analyzer.y"
    {
        switch((yyvsp[(2) - (3)].ival)) {
            case 1:  (yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); break;
            case 2:  (yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); break;
            case 3:  (yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); break;
            case 4:  (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); break;
            case 5:  (yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); break;
            case 6:  (yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); break;
            case 7:  (yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); break;
            case 8:  (yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); break;
            case 9:  (yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); break;
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

  case 22:
#line 216 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
            //case 19: $$ = $2; break;
        }
    ;}
    break;

  case 23:
#line 226 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext);;}
    break;

  case 24:
#line 227 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext);;}
    break;

  case 25:
#line 228 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 26:
#line 233 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 27:
#line 238 "syntax_analyzer.y"
    {;}
    break;

  case 28:
#line 239 "syntax_analyzer.y"
    {;}
    break;

  case 29:
#line 240 "syntax_analyzer.y"
    {;}
    break;

  case 30:
#line 241 "syntax_analyzer.y"
    {;}
    break;

  case 31:
#line 246 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 33:
#line 253 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 35:
#line 257 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 36:
#line 262 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0; ;}
    break;

  case 37:
#line 263 "syntax_analyzer.y"
    { (yyval.ival) = 13; val_com=0;;}
    break;

  case 38:
#line 264 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 39:
#line 265 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 40:
#line 266 "syntax_analyzer.y"
    {
        if((yyvsp[(2) - (3)].ival) == 2)
        {
            printf("Warning:Concat failed keeping first array\n");
            par_warn++; inc_expr++;
        }
        else if ((yyvsp[(2) - (3)].ival) != 1) 
            yyerror("Invalid arr"); 
        (yyval.ival) = 4; val_com=0;;}
    break;

  case 42:
#line 280 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 44:
#line 284 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 46:
#line 288 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 48:
#line 292 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 50:
#line 296 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 51:
#line 305 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 52:
#line 306 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 53:
#line 307 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 54:
#line 308 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 55:
#line 310 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 56:
#line 311 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 57:
#line 312 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 58:
#line 313 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 59:
#line 315 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 60:
#line 316 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 61:
#line 317 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 62:
#line 318 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 63:
#line 320 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 64:
#line 321 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 65:
#line 322 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 66:
#line 323 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 67:
#line 325 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 68:
#line 326 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 69:
#line 327 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 70:
#line 328 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 71:
#line 330 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 72:
#line 331 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 73:
#line 332 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 74:
#line 333 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 75:
#line 334 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 76:
#line 341 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1 && (yyvsp[(1) - (2)].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 77:
#line 345 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 78:
#line 346 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 79:
#line 347 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 80:
#line 348 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 1 && (yyvsp[(1) - (5)].ival) != 13 || (yyvsp[(3) - (5)].ival) != 12 ) yyerror("Invalid declaration type"); else {par_warn++; inc_expr++; printf("Warning: Unknown token found in expression\n");};}
    break;

  case 81:
#line 355 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1 && (yyvsp[(2) - (3)].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 82:
#line 356 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 && (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 83:
#line 357 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 84:
#line 358 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 && (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 85:
#line 364 "syntax_analyzer.y"
    {
        if((yyvsp[(1) - (4)].ival) != (yyvsp[(4) - (4)].ival)) // same type of array and variable
            yyerror("Invalid declaration type");  
        else if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 86:
#line 371 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 87:
#line 377 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 88:
#line 378 "syntax_analyzer.y"
    {
        if((yyvsp[(2) - (3)].ival) == 12 && var_com < val_arr_com) 
        {
            printf("Warning: Remaining elements not assigned\n"); 
            par_warn++; inc_expr++;
        }
        else if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_arr_com) 
            yyerror("Invalid assignment"); 
        else 
        {
            cor_expr++;
            printf("Valid assignment\n");
        }
        var_com = 0; val_arr_com = 0; ;}
    break;

  case 89:
#line 392 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 90:
#line 393 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 91:
#line 394 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 92:
#line 395 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_ass_com = 0; ;}
    break;

  case 108:
#line 431 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 109:
#line 432 "syntax_analyzer.y"
    { 
        if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call\n"); 
        else if ((yyvsp[(1) - (4)].ival) == 4 && (yyvsp[(3) - (4)].ival) == 3) yyerror("Invalid function call\n");
        else if ((yyvsp[(1) - (4)].ival) == 6 && (yyvsp[(3) - (4)].ival) != 3) yyerror("Invalid function call\n"); 
        else {printf("Valid Function call\n"); cor_expr++;}
    ;}
    break;

  case 110:
#line 438 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 111:
#line 444 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 112:
#line 449 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 113:
#line 450 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 114:
#line 451 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 115:
#line 452 "syntax_analyzer.y"
    { 
        if ((yyvsp[(1) - (5)].ival) != 3 && (yyvsp[(1) - (5)].ival) != 4 && (yyvsp[(1) - (5)].ival) != 6)
            yyerror("Invalid function call"); 
        else if((yyvsp[(3) - (5)].ival) == 4 || (yyvsp[(3) - (5)].ival) == 5)
        {
            printf("Warning: Len/cmp not used correctly \n"); par_warn++; inc_expr++;
        }
        else 
        {
            printf("Warning: Invalid Keyword found in print\n"); par_warn++; inc_expr++;
        }
        ;}
    break;

  case 119:
#line 474 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 120:
#line 475 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 121:
#line 476 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 122:
#line 477 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 123:
#line 478 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 124:
#line 479 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 127:
#line 495 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 128:
#line 496 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 129:
#line 497 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 130:
#line 498 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); else {par_warn++; inc_expr++; printf("Warning: Number found in func declaration\n");} ;}
    break;

  case 131:
#line 501 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 132:
#line 502 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 133:
#line 503 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7 || (yyvsp[(4) - (7)].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 157:
#line 549 "syntax_analyzer.y"
    {
    if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[(1) - (5)].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[(1) - (5)].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[(1) - (5)].ival);;}
    break;

  case 158:
#line 554 "syntax_analyzer.y"
    {
    if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[(1) - (5)].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[(1) - (5)].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[(1) - (5)].ival);;}
    break;

  case 159:
#line 559 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 9 || (yyvsp[(1) - (3)].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n"); cor_expr++;};}
    break;

  case 160:
#line 560 "syntax_analyzer.y"
    {if ((yyvsp[(3) - (4)].ival) != 9 || (yyvsp[(1) - (4)].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n");cor_expr++;};}
    break;

  case 161:
#line 566 "syntax_analyzer.y"
    {if((yyvsp[(2) - (2)].ival) != 17 && (yyvsp[(2) - (2)].ival) != 18) yyerror("Invalid --/++ operator"); else cor_expr++;;}
    break;

  case 162:
#line 567 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 163:
#line 572 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");};}
    break;

  case 164:
#line 573 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");};}
    break;


/* Line 1267 of yacc.c.  */
#line 2343 "syntax_analyzer.tab.c"
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


#line 576 "syntax_analyzer.y"


// Function that prints a report containing several details about the result of the syntax analyzer
// and what it identified.
void print_report() {
    printf("-------Report:-------\n");
    printf("Correct Words: %d\n", cor_words);
    printf("Correct Expressions: %d\n", cor_expr);
    printf("Incorrect Words: %d\n", inc_words);
    printf("Incorrect Expressions: %d\n", inc_expr);
}

/* The yyerror function is used for the reporting of any errors. It is called by yyparse
   whenever there is a syntax error. It prints an error message to the terminal and then exits. */
int yyerror (const char *msg)
{
    fprintf(yyout, "\tLine %d at lexeme '%s' : %s\n",line, yytext, msg); 
    errflag++;
    return 0;
}

// The main function checks if the arguments given are correct.
// If the number of arguments given is 2 then the program received the input from a txt file.
// If not, then it just takes the input from the user through the terminal.
// Then the function calls the yyparse() method, that basically connects the syntax analyzer
// and the lexer. It breaks the input into tokens that we have defined on the lexical analyzer.
int main(int argc, char **argv) {

    if(argc == 2)
        yyin = fopen(argv[1], "r"); // open the text file given as input
    else
        yyin = stdin; // get input from the user's terminal

    int parse = yyparse();
    if (errflag == 0 && parse == 0)
    {
        fprintf(stderr, "Successful parsing.\n");
        if (par_warn>0)
            fprintf(stderr,"%d Warning(s) detected.\n",par_warn);
    }
    else
    {
        fprintf(stderr, "\t\tBison -> PARSING FAILED with (%d syntax error(s) and %d warning(s)).\n",errflag,par_warn);
    }
    return 0;
}
