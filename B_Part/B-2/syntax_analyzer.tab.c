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
     DELIMITER = 264,
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
#define IDENTIFIERS 261
#define STRINGS 262
#define KEYWORD 263
#define DELIMITER 264
#define SYMBOL 265
#define OPEN_BRACKET 266
#define CLOSE_BRACKET 267
#define OPEN_PARENTHESIS 268
#define CLOSE_PARENTHESIS 269
#define OPEN_BRACE 270
#define CLOSE_BRACE 271
#define UNKNOWN_TOKEN 272
#define END 273




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
        extern int line; // Μετρητής γραμμών κώδικα

        // Μετρητές για μέτρηση των κομμάτων
        int var_com = 0, val_com = 0, val_arr_com = 0, val_ass_com = 0;

        int errflag=0; // Μετρητής σφαλμάτων
        extern int cor_words; // μετρήτης σωστών λέξεων (flex)
        int cor_expr = 0;
        int inc_words = 0;
        int inc_expr = 0;
        FILE *yyin;


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
#line 43 "syntax_analyzer.y"
{
    int ival;
    double dval;
    char *sval;
}
/* Line 193 of yacc.c.  */
#line 161 "syntax_analyzer.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 174 "syntax_analyzer.tab.c"

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
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    21,    19,     2,    20,     2,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    21,
      24,    26,    28,    30,    32,    36,    40,    43,    45,    47,
      49,    51,    55,    59,    64,    68,    70,    74,    76,    80,
      82,    86,    88,    92,    96,   100,   104,   108,   112,   116,
     120,   124,   128,   132,   136,   140,   144,   148,   152,   156,
     159,   164,   168,   174,   179,   183,   187,   191,   195,   199,
     203,   207,   211,   215,   219,   223,   227,   231,   235,   239,
     243,   247,   251,   255,   260,   265,   270,   275,   280,   285,
     290,   292,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      25,     0,    -1,    -1,    25,    26,    -1,    18,    -1,    32,
      18,    -1,    28,    18,    -1,    40,    18,    -1,    41,    18,
      -1,    47,    18,    -1,     8,    -1,     5,    -1,    27,    -1,
      28,    -1,    32,    30,    32,    -1,    31,    30,    32,    -1,
      30,    32,    -1,     3,    -1,     4,    -1,    31,    -1,     6,
      -1,    15,    35,    16,    -1,    15,    36,    16,    -1,    33,
      15,     3,    16,    -1,    34,    30,    34,    -1,     7,    -1,
       7,    10,    35,    -1,    32,    -1,    32,    10,    36,    -1,
      33,    -1,    33,    10,    37,    -1,    34,    -1,    34,    10,
      38,    -1,    34,    10,    32,    -1,    34,    10,     7,    -1,
      34,    10,    33,    -1,    33,    10,    32,    -1,    33,    10,
      34,    -1,    33,    10,     7,    -1,     7,    10,    32,    -1,
       7,    10,    33,    -1,     7,    10,    34,    -1,    32,    10,
       7,    -1,    32,    10,    33,    -1,    32,    10,    34,    -1,
      39,    10,    32,    -1,    39,    10,     7,    -1,    39,    10,
      33,    -1,    39,    10,    34,    -1,    29,    33,    -1,    29,
      33,    30,    32,    -1,    29,    29,    33,    -1,    29,    29,
      33,    30,    32,    -1,    29,    33,    30,    34,    -1,    37,
      30,    36,    -1,    37,    30,    38,    -1,    37,    30,    37,
      -1,    37,    30,    35,    -1,    37,    30,    39,    -1,    33,
      10,    32,    -1,    32,    10,    33,    -1,     7,    10,    32,
      -1,    32,    10,     7,    -1,    43,    10,    33,    -1,    43,
      10,     7,    -1,    43,    10,    32,    -1,    42,    10,    33,
      -1,    42,    10,     7,    -1,    42,    10,    32,    -1,    33,
      10,    33,    -1,     7,    10,     7,    -1,     7,    10,    33,
      -1,    33,    10,     7,    -1,    29,    13,    33,    14,    -1,
      29,    13,    34,    14,    -1,    29,    13,     7,    14,    -1,
      29,    13,    43,    14,    -1,    29,    13,    44,    14,    -1,
      29,    13,    45,    14,    -1,    29,    13,    42,    14,    -1,
      44,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    75,    76,    77,    78,    79,    80,
      83,    86,    90,   108,   150,   172,   194,   207,   208,   209,
     213,   218,   219,   220,   221,   226,   227,   230,   231,   234,
     235,   238,   239,   243,   244,   245,   247,   248,   249,   251,
     252,   253,   255,   256,   257,   259,   260,   261,   262,   267,
     268,   269,   270,   271,   276,   277,   278,   279,   280,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   297,
     298,   299,   300,   304,   305,   306,   310,   314,   315,   316,
     320,   321,   322
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "OPERATORS",
  "IDENTIFIERS", "STRINGS", "KEYWORD", "DELIMITER", "SYMBOL",
  "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS",
  "OPEN_BRACE", "CLOSE_BRACE", "UNKNOWN_TOKEN", "END", "'+'", "'-'", "'*'",
  "'/'", "'='", "$accept", "program", "line", "keyword", "operator",
  "keyword_val", "oper_val", "expr", "num", "var", "arr", "help_str",
  "help_num", "help_var", "help_arr", "help_assign", "declaration",
  "assignment", "help_print", "help_cmp", "scan_len_print", "cmp_print",
  "print", "func_call", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    43,
      45,    42,    47,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    26,    26,    26,
      27,    28,    29,    30,    31,    31,    31,    32,    32,    32,
      33,    34,    34,    34,    34,    35,    35,    36,    36,    37,
      37,    38,    38,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    40,
      40,    40,    40,    40,    41,    41,    41,    41,    41,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    43,
      43,    43,    43,    44,    44,    44,    45,    46,    46,    46,
      47,    47,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     3,     3,     2,     1,     1,     1,
       1,     3,     3,     4,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       4,     3,     5,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    17,    18,    11,    20,    10,     4,     3,
      12,    13,     0,     0,    19,     0,    29,     0,     0,     0,
      80,    81,    82,     0,     6,     0,     0,    49,    13,    16,
       0,     5,     0,     0,     0,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
      15,    14,    30,    25,    27,    29,    31,    57,    54,    56,
      55,    58,     0,    75,    25,    27,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,    79,     0,    76,    77,
      78,     0,    50,     0,    53,     0,     0,     0,     0,     0,
      70,    61,    71,     0,     0,    21,    22,     0,     0,     0,
      62,    60,    72,    59,    69,     0,    24,    67,    68,    66,
      64,    65,    63,    52,    39,    40,    41,    26,    42,    43,
      44,    28,    38,    36,    29,    37,    34,    33,    35,    31,
      32,    46,    45,    47,    48,     0,     0,    23,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    28,    12,    13,    14,    65,    83,
      43,   117,   121,    52,   130,    61,    18,    19,    44,    45,
      20,    21,    22,    23
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -13
static const yytype_int16 yypact[] =
{
     -13,     4,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,    -5,    10,   122,    15,     1,    18,    15,    22,    25,
     -13,   -13,   -13,    37,   -13,    42,    50,    15,   -13,    15,
     122,   -13,   122,    50,   143,   -13,   -13,   -13,    27,   167,
      58,    49,    67,    16,    48,   147,    59,    66,    15,    60,
      15,    15,   -13,    73,    85,    82,    93,   -13,   -13,   -13,
     -13,    79,   221,   -13,    90,   109,   124,   140,    45,   100,
     229,   -13,   135,   -13,    20,   234,   -13,   239,   -13,   -13,
     -13,   122,    15,   144,    15,   148,   161,   198,   203,   216,
     -13,    15,   -13,   155,   122,   -13,   -13,   165,    95,   166,
     -13,   -13,   -13,    15,   -13,   153,    15,   -13,    15,   -13,
     -13,    15,   -13,    15,    15,   144,    15,   -13,   -13,   144,
      15,   -13,   -13,    15,   106,    15,   -13,    15,   144,   118,
     -13,   -13,    15,   144,    15,   171,   177,   -13,    20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -13,   -13,   -13,   -13,   184,     2,   -12,   -13,   111,    -1,
      44,   103,   105,     0,   156,   -13,   -13,   -13,   -13,   119,
     164,   168,   -13,   -13
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      16,    17,    30,    32,     2,    34,     5,     3,     4,     5,
       6,    27,     7,    24,    26,    49,     6,    32,     7,    31,
       5,     5,     8,    25,    42,    48,     6,    40,    33,    32,
      73,    74,    16,    55,    59,    39,    81,    62,    32,    32,
      35,    63,    32,    36,    74,     3,     4,     5,     6,    38,
       7,     6,    97,    32,     5,    37,     6,    39,    75,    69,
      39,    92,    76,     3,     4,     5,     6,    98,   101,   104,
      32,    68,    74,    79,   109,    39,   112,    70,    56,    32,
      80,    71,    72,    85,   115,   119,   124,   128,   133,    89,
       5,    32,    87,    84,    74,    86,    32,    72,     5,    32,
      93,    32,    32,    88,    74,   136,     6,   100,    74,    71,
      72,    32,    15,    74,     5,    32,    33,    74,   106,    94,
      32,    72,    74,     5,    29,     3,     4,     5,   138,   116,
     120,   125,   129,   134,    92,   104,    41,    57,   105,    58,
      95,    50,    66,    51,    67,    54,     3,     4,     5,     6,
      53,     3,     4,     5,     6,    64,    96,    77,    39,    72,
      82,    78,    64,    39,     3,     4,     5,     6,   118,   137,
       3,     4,     5,    91,    64,   135,    39,     6,    90,    63,
      78,   103,   129,     6,   102,    11,   108,    99,   111,    46,
      60,     0,   113,    47,     0,     0,   114,     0,   123,   127,
     132,     3,     4,     5,     6,   122,     3,     4,     5,     6,
     126,     0,     0,    39,     0,     0,     0,     0,    39,     3,
       4,     5,     6,   131,     3,     4,     5,     6,    90,     0,
       0,    39,     3,     4,     5,     6,   102,     3,     4,     5,
       6,   107,     3,     4,     5,     6,   110
};

static const yytype_int16 yycheck[] =
{
       1,     1,    14,    15,     0,    17,     5,     3,     4,     5,
       6,    12,     8,    18,    12,    27,     6,    29,     8,    18,
       5,     5,    18,    13,    25,    26,     6,    25,    10,    41,
      14,    43,    33,    34,    34,    15,    48,    10,    50,    51,
      18,    14,    54,    18,    56,     3,     4,     5,     6,     7,
       8,     6,     7,    65,     5,    18,     6,    15,    10,    10,
      15,    62,    14,     3,     4,     5,     6,    68,    69,    70,
      82,    13,    84,    14,    75,    15,    77,    10,    34,    91,
      14,    14,    15,    10,    85,    86,    87,    88,    89,    10,
       5,   103,    10,    49,   106,    10,   108,    15,     5,   111,
      10,   113,   114,    10,   116,    10,     6,     7,   120,    14,
      15,   123,     1,   125,     5,   127,    10,   129,    74,    10,
     132,    15,   134,     5,    13,     3,     4,     5,    10,    85,
      86,    87,    88,    89,   135,   136,    25,    34,     3,    34,
      16,    30,    39,    32,    39,    34,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,    16,    10,    15,    15,
      49,    14,     7,    15,     3,     4,     5,     6,     7,    16,
       3,     4,     5,    62,     7,    10,    15,     6,     7,    14,
      14,    70,   138,     6,     7,     1,    75,    68,    77,    25,
      34,    -1,    81,    25,    -1,    -1,    85,    -1,    87,    88,
      89,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    -1,    -1,    15,    -1,    -1,    -1,    -1,    15,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    -1,
      -1,    15,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,     0,     3,     4,     5,     6,     8,    18,    26,
      27,    28,    29,    30,    31,    32,    33,    37,    40,    41,
      44,    45,    46,    47,    18,    13,    29,    33,    28,    32,
      30,    18,    30,    10,    30,    18,    18,    18,     7,    15,
      29,    32,    33,    34,    42,    43,    44,    45,    33,    30,
      32,    32,    37,     7,    32,    33,    34,    35,    36,    37,
      38,    39,    10,    14,     7,    32,    35,    36,    13,    10,
      10,    14,    15,    14,    30,    10,    14,    10,    14,    14,
      14,    30,    32,    33,    34,    10,    10,    10,    10,    10,
       7,    32,    33,    10,    10,    16,    16,     7,    33,    43,
       7,    33,     7,    32,    33,     3,    34,     7,    32,    33,
       7,    32,    33,    32,    32,    33,    34,    35,     7,    33,
      34,    36,     7,    32,    33,    34,     7,    32,    33,    34,
      38,     7,    32,    33,    34,    10,    10,    16,    10
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
#line 76 "syntax_analyzer.y"
    { printf("Result: %f\n", (yyvsp[(1) - (2)].dval)); ;}
    break;

  case 6:
#line 77 "syntax_analyzer.y"
    {printf("Operator: %s\n", (yyvsp[(1) - (2)].sval));;}
    break;

  case 7:
#line 78 "syntax_analyzer.y"
    {printf("Valid declaration\n"); cor_expr++;;}
    break;

  case 8:
#line 79 "syntax_analyzer.y"
    {printf("Valid assignment\n"); cor_expr++;;}
    break;

  case 9:
#line 80 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 10:
#line 83 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 11:
#line 86 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext);;}
    break;

  case 12:
#line 90 "syntax_analyzer.y"
    {
        // for type of variables
        if(!strcmp((yyvsp[(1) - (1)].sval), "int") || !strcmp((yyvsp[(1) - (1)].sval), "float") || !strcmp((yyvsp[(1) - (1)].sval), "const") || !strcmp((yyvsp[(1) - (1)].sval), "double"))
            (yyval.ival) = 1;    
        if(!strcmp((yyvsp[(1) - (1)].sval), "const") || !strcmp((yyvsp[(1) - (1)].sval), "long"))
            (yyval.ival) = 2;
        // for functions
        if(!strcmp((yyvsp[(1) - (1)].sval), "scan"))
            (yyval.ival) = 3;
        if(!strcmp((yyvsp[(1) - (1)].sval), "len"))
            (yyval.ival) = 4;
        if(!strcmp((yyvsp[(1) - (1)].sval), "cmp"))
            (yyval.ival) = 5;
        if(!strcmp((yyvsp[(1) - (1)].sval), "print"))
            (yyval.ival) = 6;
    ;}
    break;

  case 13:
#line 108 "syntax_analyzer.y"
    { 
        if(!strcmp((yyvsp[(1) - (1)].sval), "+"))
            (yyval.ival) = 1;
        if(!strcmp((yyvsp[(1) - (1)].sval), "-"))
            (yyval.ival) = 2;
        if(!strcmp((yyvsp[(1) - (1)].sval), "*"))
            (yyval.ival) = 3;
        if(!strcmp((yyvsp[(1) - (1)].sval), "/"))
            (yyval.ival) = 4;
        if (!strcmp((yyvsp[(1) - (1)].sval), "=="))
            (yyval.ival) = 5;
        if (!strcmp((yyvsp[(1) - (1)].sval), "!="))
           (yyval.ival) = 6;
        if (!strcmp((yyvsp[(1) - (1)].sval), ">"))
            (yyval.ival) = 7;
        if (!strcmp((yyvsp[(1) - (1)].sval), "<"))
            (yyval.ival) = 8;
        if (!strcmp((yyvsp[(1) - (1)].sval), ">="))
            (yyval.ival) = 9;
        if (!strcmp((yyvsp[(1) - (1)].sval), "<="))
            (yyval.ival) = 10;  
        if(!strcmp((yyvsp[(1) - (1)].sval), "%"))
            (yyval.ival) = 11;
        if(!strcmp((yyvsp[(1) - (1)].sval), "="))
            (yyval.ival) = 12;
        if (!strcmp((yyvsp[(1) - (1)].sval), "+="))
            (yyval.ival) = 13;
        if (!strcmp((yyvsp[(1) - (1)].sval), "-="))
            (yyval.ival) = 14;
        if (!strcmp((yyvsp[(1) - (1)].sval), "*="))
            (yyval.ival) = 15;
        if (!strcmp((yyvsp[(1) - (1)].sval), "/="))
            (yyval.ival) = 16;
        if (!strcmp((yyvsp[(1) - (1)].sval), "++"))
            (yyval.ival) = 17;
        if (!strcmp((yyvsp[(1) - (1)].sval), "--"))
            (yyval.ival) = 18;
        if (!strcmp((yyvsp[(1) - (1)].sval), "&"))
            (yyval.ival) = 19;
    ;}
    break;

  case 14:
#line 150 "syntax_analyzer.y"
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

  case 15:
#line 172 "syntax_analyzer.y"
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

  case 16:
#line 194 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
        }
    ;}
    break;

  case 17:
#line 207 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); ;}
    break;

  case 18:
#line 208 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); ;}
    break;

  case 19:
#line 209 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 20:
#line 213 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); ;}
    break;

  case 21:
#line 218 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0;;}
    break;

  case 22:
#line 219 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 23:
#line 220 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 24:
#line 221 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid arr"); (yyval.ival) = 4; val_com=0;;}
    break;

  case 26:
#line 227 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 28:
#line 231 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 30:
#line 235 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 32:
#line 239 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 33:
#line 243 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 34:
#line 244 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 35:
#line 245 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 36:
#line 247 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 37:
#line 248 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 38:
#line 249 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 39:
#line 251 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 40:
#line 252 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 41:
#line 253 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 42:
#line 255 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 43:
#line 256 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 44:
#line 257 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 45:
#line 259 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 46:
#line 260 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 47:
#line 261 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 48:
#line 262 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 49:
#line 267 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1) yyerror("Invalid declaration type");;}
    break;

  case 50:
#line 268 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type");;}
    break;

  case 51:
#line 269 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid declaration type");;}
    break;

  case 52:
#line 270 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type");;}
    break;

  case 53:
#line 271 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12 ) yyerror("Invalid declaration type");;}
    break;

  case 54:
#line 276 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)  yyerror("Invalid assignment1"); var_com = 0; val_com = 0;;}
    break;

  case 55:
#line 277 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || val_arr_com) yyerror("Invalid assignment2"); var_com = 0; val_arr_com = 0;;}
    break;

  case 56:
#line 278 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment3"); var_com = 0; val_com = 0;;}
    break;

  case 57:
#line 279 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment4"); var_com = 0; val_com = 0;;}
    break;

  case 58:
#line 280 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment5"); var_com = 0; val_ass_com = 0;;}
    break;

  case 73:
#line 304 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); printf("SCAN "); (yyval.ival) = (yyvsp[(1) - (4)].ival);;}
    break;

  case 74:
#line 305 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 4) yyerror("Invalid function call"); printf("SCAN "); (yyval.ival) = (yyvsp[(1) - (4)].ival);;}
    break;

  case 75:
#line 306 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); printf("SCAN "); (yyval.ival) = (yyvsp[(1) - (4)].ival);;}
    break;

  case 76:
#line 310 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); (yyval.ival) = (yyvsp[(1) - (4)].ival); printf("CMP ");;}
    break;

  case 77:
#line 314 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call"); else printf("PRINT ");;}
    break;

  case 78:
#line 315 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call"); else printf("PRINT ");;}
    break;

  case 79:
#line 316 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call"); else printf("PRINT ");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1901 "syntax_analyzer.tab.c"
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


#line 336 "syntax_analyzer.y"

/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
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
    {
        fprintf(stderr, "Successful parsing.\n");
        printf("Correct Words: %d\n", cor_words);
        printf("Correct Expressions: %d\n", cor_expr);
        printf("Incorrect Words: %d\n", inc_words);
        printf("Incorrect Expressions: %d\n", inc_expr);
    }
    else
        fprintf(stderr, "Error found.\n");
    return 0;
}
