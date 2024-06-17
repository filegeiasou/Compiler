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
#define YYLAST   553

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

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
      28,    31,    34,    36,    38,    40,    42,    44,    46,    48,
      50,    52,    56,    60,    63,    65,    67,    69,    71,    75,
      79,    83,    87,    89,    91,    95,    97,   101,   105,   109,
     113,   118,   122,   124,   128,   130,   134,   136,   140,   142,
     146,   148,   152,   156,   160,   164,   168,   172,   176,   180,
     184,   188,   192,   196,   200,   204,   208,   212,   216,   220,
     224,   228,   232,   236,   240,   244,   248,   252,   255,   260,
     265,   270,   276,   280,   286,   292,   298,   303,   308,   314,
     318,   322,   326,   330,   334,   338,   342,   346,   350,   354,
     358,   362,   366,   370,   374,   378,   382,   386,   390,   394,
     398,   403,   408,   413,   418,   423,   428,   433,   439,   441,
     443,   445,   450,   455,   460,   465,   470,   474,   476,   480,
     487,   494,   502,   510,   517,   524,   532,   536,   541,   546,
     552,   554,   557,   560,   564,   567,   570,   573,   575,   577,
     581,   585,   589,   592,   595,   600,   605,   610,   614,   618,
     624,   630,   634,   639,   642,   646,   656
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    -1,    26,    27,    -1,    26,     1,    14,
      -1,    14,    -1,    46,    17,    14,    -1,    47,    17,    14,
      -1,    53,    17,    14,    -1,    46,    17,    -1,    47,    17,
      -1,    53,    17,    -1,    55,    -1,    59,    -1,    61,    -1,
      15,    -1,    16,    -1,     8,    -1,     5,    -1,    28,    -1,
      29,    -1,    33,    31,    33,    -1,    32,    31,    33,    -1,
      31,    33,    -1,     3,    -1,     4,    -1,    32,    -1,     6,
      -1,    34,    31,    33,    -1,    33,    31,    34,    -1,    34,
      31,    34,    -1,    32,    31,    34,    -1,     7,    -1,     3,
      -1,     3,     9,    37,    -1,     4,    -1,     4,     9,    38,
      -1,    12,    37,    13,    -1,    12,    38,    13,    -1,    12,
      40,    13,    -1,    34,    12,     3,    13,    -1,    39,    31,
      39,    -1,    36,    -1,    36,     9,    40,    -1,    33,    -1,
      33,     9,    41,    -1,    34,    -1,    34,     9,    42,    -1,
      39,    -1,    39,     9,    43,    -1,    35,    -1,    35,     9,
      44,    -1,    39,     9,    33,    -1,    39,     9,    36,    -1,
      39,     9,    34,    -1,    39,     9,    35,    -1,    34,     9,
      33,    -1,    34,     9,    39,    -1,    34,     9,    36,    -1,
      34,     9,    35,    -1,    36,     9,    33,    -1,    36,     9,
      34,    -1,    36,     9,    39,    -1,    36,     9,    35,    -1,
      33,     9,    36,    -1,    33,     9,    34,    -1,    33,     9,
      39,    -1,    33,     9,    35,    -1,    35,     9,    36,    -1,
      35,     9,    34,    -1,    35,     9,    39,    -1,    35,     9,
      33,    -1,    45,     9,    33,    -1,    45,     9,    36,    -1,
      45,     9,    34,    -1,    45,     9,    39,    -1,    45,     9,
      35,    -1,    30,    34,    -1,    30,    34,    31,     3,    -1,
      30,    34,    31,     4,    -1,    30,    34,    31,    34,    -1,
      30,    34,    31,    34,    29,    -1,    30,    30,    34,    -1,
      30,    30,    34,    31,     3,    -1,    30,    30,    34,    31,
       4,    -1,    30,    30,    34,    31,    34,    -1,    30,    34,
      31,    39,    -1,    30,    34,    31,    35,    -1,    30,    30,
      34,    31,    35,    -1,    42,    31,    41,    -1,    42,    31,
      43,    -1,    42,    31,    42,    -1,    42,    31,    40,    -1,
      42,    31,    44,    -1,    42,    31,    45,    -1,    34,     9,
      33,    -1,    33,     9,    34,    -1,    36,     9,    33,    -1,
      33,     9,    36,    -1,    33,     9,    33,    -1,    49,     9,
      34,    -1,    49,     9,    36,    -1,    49,     9,    33,    -1,
      48,     9,    34,    -1,    48,     9,    36,    -1,    48,     9,
      33,    -1,    34,     9,    34,    -1,    36,     9,    36,    -1,
      36,     9,    34,    -1,    34,     9,    36,    -1,    30,    10,
      34,    11,    -1,    30,    10,    39,    11,    -1,    30,    10,
      36,    11,    -1,    30,    10,    49,    11,    -1,    30,    10,
      50,    11,    -1,    30,    10,    51,    11,    -1,    30,    10,
      48,    11,    -1,    30,    10,    30,    34,    11,    -1,    50,
      -1,    51,    -1,    52,    -1,    34,    10,    34,    11,    -1,
      34,    10,    33,    11,    -1,    34,    10,    36,    11,    -1,
      34,    10,    49,    11,    -1,    34,    10,    48,    11,    -1,
      34,    10,    11,    -1,    46,    -1,    46,     9,    54,    -1,
      30,    34,    10,    54,    11,    17,    -1,    30,    34,    10,
      54,    11,    56,    -1,    30,    34,    10,    54,    11,    14,
      56,    -1,    30,    33,    34,    10,    54,    11,    17,    -1,
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
      35,    17,    60,    11,    57,    -1,    30,    10,    60,    17,
      32,    17,    60,    11,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    98,    99,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   116,   120,   125,
     150,   175,   195,   217,   227,   228,   229,   234,   239,   240,
     241,   242,   247,   253,   254,   257,   258,   263,   264,   265,
     266,   267,   280,   281,   284,   285,   288,   289,   292,   293,
     296,   297,   306,   307,   308,   309,   311,   312,   313,   314,
     316,   317,   318,   319,   321,   322,   323,   324,   326,   327,
     328,   329,   331,   332,   333,   334,   335,   342,   346,   347,
     348,   349,   356,   357,   358,   359,   365,   372,   373,   379,
     380,   394,   395,   396,   397,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   419,   420,   421,   422,
     433,   434,   440,   446,   451,   452,   453,   454,   470,   471,
     472,   476,   477,   478,   479,   480,   481,   487,   488,   497,
     498,   499,   500,   503,   504,   505,   510,   511,   512,   513,
     518,   519,   520,   521,   526,   527,   528,   529,   530,   532,
     533,   534,   535,   536,   538,   539,   540,   541,   542,   551,
     556,   561,   562,   568,   569,   574,   575
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
      27,    27,    27,    27,    27,    27,    27,    28,    29,    30,
      31,    32,    32,    32,    33,    33,    33,    34,    35,    35,
      35,    35,    36,    37,    37,    38,    38,    39,    39,    39,
      39,    39,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      50,    50,    50,    51,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    60,    60,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     1,     3,     3,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     1,     1,     1,     1,     3,     3,
       3,     3,     1,     1,     3,     1,     3,     3,     3,     3,
       4,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     4,
       4,     5,     3,     5,     5,     5,     4,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     4,     4,     4,     4,     4,     5,     1,     1,
       1,     4,     4,     4,     4,     4,     3,     1,     3,     6,
       6,     7,     7,     6,     6,     7,     3,     4,     4,     5,
       1,     2,     2,     3,     2,     2,     2,     1,     1,     3,
       3,     3,     2,     2,     4,     4,     4,     3,     3,     5,
       5,     3,     4,     2,     3,     9,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    27,    17,     5,    15,    16,     3,
      19,     0,    46,     0,     0,     0,   118,   119,   120,     0,
      12,    13,    14,     4,    24,    25,    18,     0,    20,     0,
       0,    26,     0,    77,     0,     0,     0,     9,    10,    11,
       0,     0,    32,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    23,     0,     0,
       0,     0,     0,    46,    47,   126,     0,     0,     0,     0,
       0,    44,    46,    50,    42,    48,    92,    89,    91,    90,
      93,    94,     6,     7,     8,     0,     0,     0,   140,   161,
      33,    35,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,   163,     0,     0,   112,   111,
       0,     0,   116,     0,   113,   114,   115,     0,     0,    22,
      21,     0,     0,   127,     0,    78,    79,     0,    80,    87,
      86,   122,   121,   123,   125,   124,     0,     0,     0,     0,
       0,     0,     0,   162,   141,     0,     0,     0,     0,     0,
       0,   147,   148,   142,     0,     0,     0,    37,    38,    39,
       0,     0,     0,   117,    31,    99,    96,    98,   159,    29,
      95,   106,   109,     0,    28,    30,   160,    97,   108,   107,
       0,    41,   105,   103,   104,   102,   100,   101,     0,     0,
       0,    83,    84,    85,    88,     0,     0,     0,    77,     0,
       0,    20,    44,    65,    67,    64,    66,    45,    56,    46,
      59,    58,    57,    28,    71,    69,    50,    68,    70,    51,
      60,    61,    63,    62,    43,    52,    54,    55,    53,    48,
      49,    72,    74,    76,    73,    75,   143,     0,   146,   145,
     144,     0,   136,     0,     0,     0,   152,   153,    34,    36,
       0,     0,    40,     0,     0,     0,     0,   133,   134,   128,
       0,   129,   130,     0,     0,     0,     0,   137,   138,     0,
       0,     0,   157,   158,   151,   150,   149,     0,     0,     0,
     132,   135,   131,    44,   139,   156,   155,   154,   163,     0,
       0,   164,   166,   165
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    28,   146,    30,    31,   127,    12,
     216,    92,    93,    94,    50,   224,   207,    13,   230,   219,
      81,   123,   148,    51,    52,    16,    17,    18,   149,   124,
      20,    88,    89,   150,   151,    55,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
    -121,    69,  -121,    27,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,   323,   256,    59,    34,    56,  -121,  -121,  -121,    91,
    -121,     0,  -121,  -121,  -121,  -121,  -121,   134,  -121,   113,
     286,    59,   313,   161,   113,   298,   106,    78,   115,   130,
     162,    58,  -121,    24,   122,    59,   149,    86,   171,    90,
      89,   195,   200,   192,   214,   236,    59,    59,   286,   286,
     235,   162,   228,   253,  -121,  -121,   239,   227,   264,   276,
     297,   168,    33,   270,   312,   189,  -121,  -121,  -121,  -121,
    -121,   316,  -121,  -121,  -121,    58,   331,    72,   337,  -121,
     321,   344,   353,   350,   358,   359,    75,   362,   341,   352,
      58,   341,   352,  -121,   371,   341,    58,   352,  -121,  -121,
     141,   352,  -121,   352,  -121,  -121,  -121,   341,   364,    59,
      59,   162,   137,   366,   365,   374,   376,    59,    -2,  -121,
      59,  -121,  -121,  -121,  -121,  -121,   106,   106,   341,   106,
     106,   106,   106,  -121,   377,   304,   218,   368,   375,   379,
       3,     0,  -121,  -121,   385,   390,   393,  -121,  -121,  -121,
     271,   305,   386,  -121,  -121,    59,  -121,  -121,  -121,  -121,
      59,  -121,  -121,   389,    18,  -121,  -121,    59,  -121,  -121,
     391,    59,    59,  -121,  -121,    59,  -121,  -121,    19,    59,
     387,   374,   376,    59,  -121,   304,   396,   145,    59,   162,
     170,    79,   212,    -2,  -121,  -121,    59,  -121,    59,   111,
    -121,  -121,    59,    59,    59,    -2,   399,  -121,    59,  -121,
      59,    -2,  -121,    59,  -121,    59,    -2,  -121,  -121,   230,
    -121,    59,    -2,  -121,  -121,    59,  -121,    46,  -121,  -121,
    -121,     7,  -121,   392,   394,   395,     0,  -121,  -121,  -121,
     328,   328,  -121,   113,   113,   397,   331,  -121,  -121,  -121,
     331,  -121,  -121,   286,   341,   141,    55,  -121,  -121,   398,
     400,   401,     0,  -121,  -121,  -121,  -121,    59,   402,   405,
    -121,  -121,  -121,   212,  -121,  -121,  -121,  -121,   286,    58,
      58,    59,  -121,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,  -121,   292,    28,   -13,   -15,   156,   288,
     224,   241,   267,   268,    -6,    14,   403,   -32,   404,   406,
    -121,     6,     5,   408,   -30,   409,   410,  -121,    15,  -120,
    -121,   -19,   -60,   277,    47,    85,    70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -165
static const yytype_int16 yytable[] =
{
      36,   196,    64,    26,    78,    70,    15,    14,     5,     4,
     104,     5,    45,     4,    40,     5,    19,   241,    58,    59,
      62,    45,   242,    26,    26,   143,   268,    90,    91,    11,
      75,    42,    98,   101,   105,  -164,   253,   110,    26,    29,
     168,    23,   137,   118,    59,   104,   176,    45,    21,    41,
      76,    37,     4,    59,     5,    44,   130,    95,   101,   138,
     266,     4,   110,     5,    26,   267,   162,   144,    85,     2,
       3,    22,    86,    38,   284,     4,    87,     5,     4,   259,
       5,     4,    42,     6,     7,     8,   145,    43,   -81,   122,
     -81,    26,    82,   147,    26,   102,   -81,   103,   104,   107,
     109,   108,   188,    45,   181,    64,    59,    59,    39,    24,
      25,    26,     4,    42,   101,   138,    26,   110,    43,     4,
      34,    45,    45,   104,    45,    45,    45,    45,     4,    83,
     206,   212,    96,   218,   223,   229,   235,    24,    25,    26,
       4,    42,     5,     4,    84,     5,    43,     4,   197,   195,
      29,   147,    59,    43,    26,   244,   243,    59,    99,   256,
     100,    59,   257,    87,    59,   245,    26,    32,   110,    59,
       5,    61,    59,    26,    29,    98,   138,   136,   258,    41,
     138,   262,   106,    46,   260,    62,    57,   261,    87,   101,
     138,    66,    71,   110,    26,   101,   138,   246,   141,   110,
      59,   101,   138,   115,   111,   110,   112,   101,   138,   113,
     110,   114,   101,   138,   119,   120,   110,    26,   101,   138,
     247,   263,   110,    29,     4,   116,     5,   195,    27,   292,
     293,   125,   126,    26,     4,    26,   102,   281,   132,   265,
      43,   282,   244,   243,    26,   121,   270,   269,    99,    45,
     131,    48,   245,   117,   119,   165,   271,   120,   170,   229,
      73,   174,    34,   177,   288,    34,    35,   182,    49,   185,
      59,   270,   269,   107,    41,   133,    68,    74,    59,   139,
     250,   271,   103,   104,   246,   111,   129,   134,   272,    24,
      25,    26,   202,   208,   213,   214,   220,   225,   231,    33,
      41,    24,    25,    26,     4,    42,   113,   247,   135,    65,
       4,   273,     5,   272,   251,    47,   108,    56,    26,     4,
      60,   140,    63,    67,    72,   142,    24,    25,    26,     4,
     154,     5,    97,    27,     4,    42,   273,   161,   278,   279,
     167,   190,   194,   172,    24,    25,    26,     4,   179,    87,
     128,   153,   184,   155,   187,    24,    25,    26,     4,    42,
     204,   210,   156,   157,   222,   227,   233,   191,   192,    26,
       4,   158,   159,   163,   173,   199,   200,   205,   211,   -24,
     217,   -25,   228,   234,   160,   238,   164,   166,    90,   169,
     171,   236,   239,   175,    91,   178,   240,   114,   180,   183,
      42,   186,   252,   104,   254,   189,   193,   255,   264,   274,
     198,   275,   276,   289,   280,   285,   290,   286,   287,   283,
     201,   248,   237,   249,   203,   209,   175,   215,   221,   226,
     232,     0,     0,     0,   198,     0,    53,    54,     0,    77,
      79,     0,    80,    69,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,   172,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   178,
       0,   277,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   180
};

static const yytype_int16 yycheck[] =
{
      13,   121,    34,     5,    36,    35,     1,     1,     8,     6,
      12,     8,    27,     6,    14,     8,     1,    14,    31,    32,
      33,    36,    19,     5,     5,    85,    19,     3,     4,     1,
      36,     7,    45,    46,    47,    17,    17,    50,     5,    11,
     100,    14,     9,    56,    57,    12,   106,    62,     1,    21,
      36,    17,     6,    66,     8,    27,    62,    43,    71,    72,
      14,     6,    75,     8,     5,    19,    96,    86,    40,     0,
       1,     1,    14,    17,    19,     6,    18,     8,     6,   199,
       8,     6,     7,    14,    15,    16,    14,    12,     9,    61,
      11,     5,    14,    87,     5,     9,    17,    11,    12,     9,
      11,    11,   117,   118,   110,   137,   119,   120,    17,     3,
       4,     5,     6,     7,   127,   128,     5,   130,    12,     6,
       9,   136,   137,    12,   139,   140,   141,   142,     6,    14,
     136,   137,    10,   139,   140,   141,   142,     3,     4,     5,
       6,     7,     8,     6,    14,     8,    12,     6,    11,   121,
     122,   145,   165,    12,     5,   150,   150,   170,     9,    14,
      11,   174,    17,    18,   177,   150,     5,    11,   181,   182,
       8,    10,   185,     5,   146,   188,   189,     9,   197,   151,
     193,   200,    11,    27,    14,   198,    30,    17,    18,   202,
     203,    35,    36,   206,     5,   208,   209,   150,     9,   212,
     213,   214,   215,    11,     9,   218,    11,   220,   221,     9,
     223,    11,   225,   226,    58,    59,   229,     5,   231,   232,
     150,     9,   235,   195,     6,    11,     8,   199,    10,   289,
     290,     3,     4,     5,     6,     5,     9,   256,    11,     9,
      12,   260,   237,   237,     5,    10,   241,   241,     9,   264,
      11,    27,   237,    17,    98,    99,   241,   101,   102,   265,
      36,   105,     9,   107,   277,     9,    10,   111,    27,   113,
     283,   266,   266,     9,   246,    11,    35,    36,   291,     9,
       9,   266,    11,    12,   237,     9,    62,    11,   241,     3,
       4,     5,   136,   137,   138,   139,   140,   141,   142,    11,
     272,     3,     4,     5,     6,     7,     9,   237,    11,    11,
       6,   241,     8,   266,     9,    27,    11,    29,     5,     6,
      32,     9,    34,    35,    36,     9,     3,     4,     5,     6,
       9,     8,    44,    10,     6,     7,   266,    96,   253,   254,
      99,   117,   118,   102,     3,     4,     5,     6,   107,    18,
      62,    14,   111,     9,   113,     3,     4,     5,     6,     7,
     136,   137,     9,    13,   140,   141,   142,     3,     4,     5,
       6,    13,    13,    11,     3,     9,    11,   136,   137,     5,
     139,     5,   141,   142,    96,    17,    98,    99,     3,   101,
     102,    14,    17,   105,     4,   107,    17,    11,   110,   111,
       7,   113,    13,    12,    17,   117,   118,    11,     9,    17,
     122,    17,    17,    11,    17,    17,    11,    17,    17,   263,
     128,   154,   145,   155,   136,   137,   138,   139,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,    27,    27,    -1,    36,
      36,    -1,    36,    35,   288,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   250,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,   251,
      -1,   253,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   264,   265
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
      35,     3,     4,    34,    35,    30,    54,    11,    34,     9,
      11,    29,    33,    34,    35,    36,    39,    41,    33,    34,
      35,    36,    39,    33,    33,    34,    35,    36,    39,    44,
      33,    34,    35,    39,    40,    33,    34,    35,    36,    39,
      43,    33,    34,    35,    36,    39,    14,    58,    17,    17,
      17,    14,    19,    46,    47,    53,    59,    61,    37,    38,
       9,     9,    13,    17,    17,    11,    14,    17,    56,    54,
      14,    17,    56,     9,     9,     9,    14,    19,    19,    46,
      47,    53,    59,    61,    17,    17,    17,    34,    60,    60,
      17,    56,    56,    33,    19,    17,    17,    17,    31,    11,
      11,    33,    57,    57
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
    {yyerrok;;}
    break;

  case 15:
#line 112 "syntax_analyzer.y"
    { print_report();;}
    break;

  case 17:
#line 116 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 18:
#line 120 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 19:
#line 125 "syntax_analyzer.y"
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

  case 20:
#line 150 "syntax_analyzer.y"
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

  case 21:
#line 175 "syntax_analyzer.y"
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

  case 22:
#line 195 "syntax_analyzer.y"
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

  case 23:
#line 217 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
            //case 19: $$ = $2; break;
        }
    ;}
    break;

  case 24:
#line 227 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext);;}
    break;

  case 25:
#line 228 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext);;}
    break;

  case 26:
#line 229 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 27:
#line 234 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
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
#line 242 "syntax_analyzer.y"
    {;}
    break;

  case 32:
#line 247 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 34:
#line 254 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 36:
#line 258 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 37:
#line 263 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0; ;}
    break;

  case 38:
#line 264 "syntax_analyzer.y"
    { (yyval.ival) = 13; val_com=0;;}
    break;

  case 39:
#line 265 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 40:
#line 266 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 41:
#line 267 "syntax_analyzer.y"
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

  case 43:
#line 281 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 45:
#line 285 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 47:
#line 289 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 49:
#line 293 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 51:
#line 297 "syntax_analyzer.y"
    {var_com++;;}
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
#line 309 "syntax_analyzer.y"
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
#line 314 "syntax_analyzer.y"
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
#line 319 "syntax_analyzer.y"
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
#line 324 "syntax_analyzer.y"
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
#line 329 "syntax_analyzer.y"
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
#line 335 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 77:
#line 342 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1 && (yyvsp[(1) - (2)].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 78:
#line 346 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 79:
#line 347 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 80:
#line 348 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 81:
#line 349 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 1 && (yyvsp[(1) - (5)].ival) != 13 || (yyvsp[(3) - (5)].ival) != 12 ) yyerror("Invalid declaration type"); else {par_warn++; inc_expr++; printf("Warning: Unknown token found in expression\n");};}
    break;

  case 82:
#line 356 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1 && (yyvsp[(2) - (3)].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 83:
#line 357 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 && (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 84:
#line 358 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 85:
#line 359 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 && (yyvsp[(2) - (5)].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 86:
#line 365 "syntax_analyzer.y"
    {
        if((yyvsp[(1) - (4)].ival) != (yyvsp[(4) - (4)].ival)) // same type of array and variable
            yyerror("Invalid declaration type");  
        else if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 87:
#line 372 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 88:
#line 373 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");};}
    break;

  case 89:
#line 379 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 90:
#line 380 "syntax_analyzer.y"
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

  case 91:
#line 394 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 92:
#line 395 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 93:
#line 396 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; ;}
    break;

  case 94:
#line 397 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_ass_com = 0; ;}
    break;

  case 110:
#line 433 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 111:
#line 434 "syntax_analyzer.y"
    { 
        if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call\n"); 
        else if ((yyvsp[(1) - (4)].ival) == 4 && (yyvsp[(3) - (4)].ival) == 3) yyerror("Invalid function call\n");
        else if ((yyvsp[(1) - (4)].ival) == 6 && (yyvsp[(3) - (4)].ival) != 3) yyerror("Invalid function call\n"); 
        else {printf("Valid Function call\n"); cor_expr++;}
    ;}
    break;

  case 112:
#line 440 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 113:
#line 446 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 114:
#line 451 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 115:
#line 452 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 116:
#line 453 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;};}
    break;

  case 117:
#line 454 "syntax_analyzer.y"
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

  case 125:
#line 480 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 126:
#line 481 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 129:
#line 497 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 130:
#line 498 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 131:
#line 499 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 132:
#line 500 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); else {par_warn++; inc_expr++; printf("Warning: Number found in func declaration\n");} ;}
    break;

  case 133:
#line 503 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 134:
#line 504 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 135:
#line 505 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7 || (yyvsp[(4) - (7)].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");};}
    break;

  case 159:
#line 551 "syntax_analyzer.y"
    {
    if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[(1) - (5)].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[(1) - (5)].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[(1) - (5)].ival);;}
    break;

  case 160:
#line 556 "syntax_analyzer.y"
    {
    if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[(1) - (5)].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[(1) - (5)].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[(1) - (5)].ival);;}
    break;

  case 161:
#line 561 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 9 || (yyvsp[(1) - (3)].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n"); cor_expr++;};}
    break;

  case 162:
#line 562 "syntax_analyzer.y"
    {if ((yyvsp[(3) - (4)].ival) != 9 || (yyvsp[(1) - (4)].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n");cor_expr++;};}
    break;

  case 163:
#line 568 "syntax_analyzer.y"
    {if((yyvsp[(2) - (2)].ival) != 17 && (yyvsp[(2) - (2)].ival) != 18) yyerror("Invalid --/++ operator"); else cor_expr++;;}
    break;

  case 164:
#line 569 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 165:
#line 574 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");};}
    break;

  case 166:
#line 575 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");};}
    break;


/* Line 1267 of yacc.c.  */
#line 2345 "syntax_analyzer.tab.c"
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


#line 578 "syntax_analyzer.y"


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
    inc_expr++;
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
