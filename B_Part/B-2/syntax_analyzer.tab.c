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
        void print_report(int);
        FILE *yyin;

        extern int line; // Μετρητής γραμμών κώδικα
        // Μετρητές για μέτρηση των κομμάτων
        int var_com = 0, val_com = 0, val_arr_com = 0, val_ass_com = 0;
        char* func_arg;
        int errflag=0; // Μετρητής σφαλμάτων
        extern int cor_words; // μετρήτης σωστών λέξεων (flex)
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
#define YYLAST   359

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

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
      24,    27,    29,    31,    33,    35,    37,    39,    43,    47,
      50,    52,    54,    56,    58,    62,    66,    70,    74,    76,
      80,    84,    89,    93,    95,    99,   101,   105,   107,   111,
     113,   117,   121,   125,   129,   133,   137,   141,   145,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   184,   189,
     193,   199,   204,   208,   212,   216,   220,   224,   228,   232,
     236,   240,   244,   248,   252,   256,   260,   264,   268,   272,
     276,   280,   285,   290,   295,   300,   305,   310,   315,   317,
     319,   321,   326,   328,   332,   339,   346,   354,   358,   363,
     368,   374,   377,   380,   383,   387,   391,   395,   400,   405,
     410,   416,   424,   430
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    -1,    26,    27,    -1,    14,    -1,    43,
      14,    -1,    44,    14,    -1,    50,    14,    -1,    52,    14,
      -1,    55,    14,    -1,    53,    14,    -1,    15,    -1,    16,
      -1,     8,    -1,     5,    -1,    28,    -1,    29,    -1,    33,
      31,    33,    -1,    32,    31,    33,    -1,    31,    33,    -1,
       3,    -1,     4,    -1,    32,    -1,     6,    -1,    34,    31,
      33,    -1,    33,    31,    34,    -1,    34,    31,    34,    -1,
      32,    31,    34,    -1,     7,    -1,    12,    38,    13,    -1,
      12,    39,    13,    -1,    34,    12,     3,    13,    -1,    37,
      31,    37,    -1,    36,    -1,    36,     9,    38,    -1,    33,
      -1,    33,     9,    39,    -1,    34,    -1,    34,     9,    40,
      -1,    37,    -1,    37,     9,    41,    -1,    37,     9,    33,
      -1,    37,     9,    36,    -1,    37,     9,    34,    -1,    34,
       9,    33,    -1,    34,     9,    37,    -1,    34,     9,    36,
      -1,    36,     9,    33,    -1,    36,     9,    34,    -1,    36,
       9,    37,    -1,    33,     9,    36,    -1,    33,     9,    34,
      -1,    33,     9,    37,    -1,    42,     9,    33,    -1,    42,
       9,    36,    -1,    42,     9,    34,    -1,    42,     9,    37,
      -1,    30,    34,    -1,    30,    34,    31,    33,    -1,    30,
      30,    34,    -1,    30,    30,    34,    31,    33,    -1,    30,
      34,    31,    37,    -1,    40,    31,    39,    -1,    40,    31,
      41,    -1,    40,    31,    40,    -1,    40,    31,    38,    -1,
      40,    31,    42,    -1,    34,     9,    33,    -1,    33,     9,
      34,    -1,    36,     9,    33,    -1,    33,     9,    36,    -1,
      46,     9,    34,    -1,    46,     9,    36,    -1,    46,     9,
      33,    -1,    45,     9,    34,    -1,    45,     9,    36,    -1,
      45,     9,    33,    -1,    34,     9,    34,    -1,    36,     9,
      36,    -1,    36,     9,    34,    -1,    34,     9,    36,    -1,
      30,    10,    34,    11,    -1,    30,    10,    37,    11,    -1,
      30,    10,    36,    11,    -1,    30,    10,    46,    11,    -1,
      30,    10,    47,    11,    -1,    30,    10,    48,    11,    -1,
      30,    10,    45,    11,    -1,    47,    -1,    48,    -1,    49,
      -1,    34,    10,    34,    11,    -1,    43,    -1,    43,     9,
      51,    -1,    30,    34,    10,    51,    11,    17,    -1,    30,
      34,    10,    51,    11,    53,    -1,    30,    34,    10,    51,
      11,    14,    53,    -1,    18,    54,    19,    -1,    18,    14,
      54,    19,    -1,    18,    54,    14,    19,    -1,    18,    14,
      54,    14,    19,    -1,    50,    17,    -1,    44,    17,    -1,
      43,    17,    -1,    54,    50,    17,    -1,    54,    44,    17,
      -1,    54,    43,    17,    -1,    54,    14,    50,    17,    -1,
      54,    14,    44,    17,    -1,    54,    14,    43,    17,    -1,
      30,    10,    33,    11,    53,    -1,    30,    10,    33,    11,
      53,    30,    53,    -1,    30,    10,    35,    11,    53,    -1,
      30,    10,    35,    11,    53,    30,    53,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    74,    77,    80,    81,    82,    83,    84,
      85,    86,    87,    90,    93,    97,   112,   135,   157,   179,
     192,   193,   194,   198,   201,   202,   203,   204,   207,   211,
     212,   213,   214,   219,   220,   223,   224,   227,   228,   231,
     232,   236,   237,   238,   240,   241,   242,   244,   245,   246,
     248,   249,   250,   252,   253,   254,   255,   260,   261,   262,
     263,   264,   269,   270,   271,   272,   273,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   290,   291,   292,
     293,   297,   298,   299,   303,   307,   308,   309,   318,   319,
     320,   321,   325,   326,   331,   332,   333,   338,   339,   340,
     341,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     357,   358,   359,   360
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
  "str", "arr", "help_str", "help_num", "help_var", "help_arr",
  "help_assign", "declaration", "assignment", "help_print", "help_cmp",
  "scan_len_print", "cmp_print", "print", "func_call", "arguments",
  "func_decl", "body", "all", "if_grammar", 0
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
      27,    27,    27,    28,    29,    30,    31,    32,    32,    32,
      33,    33,    33,    34,    35,    35,    35,    35,    36,    37,
      37,    37,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    43,    44,    44,    44,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    46,
      46,    47,    47,    47,    48,    49,    49,    49,    50,    50,
      50,    50,    51,    51,    52,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     3,
       3,     4,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     3,
       5,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     1,     1,
       1,     4,     1,     3,     6,     6,     7,     3,     4,     4,
       5,     2,     2,     2,     3,     3,     3,     4,     4,     4,
       5,     7,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    23,    13,     4,    11,    12,     0,     3,
      15,     0,    37,     0,     0,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,    14,    16,     0,     5,     6,     7,
       8,    10,     9,     0,     0,    57,   103,   102,   101,     0,
      97,     0,     0,     0,    20,    21,    28,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,    37,    38,     0,    22,    35,    37,    33,
      39,    65,    62,    64,    63,    66,     0,    98,     0,     0,
      99,     0,     0,     0,   106,   105,   104,    35,    33,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    83,    82,     0,     0,    87,     0,    84,
      85,    86,     0,     0,    92,     0,    58,     0,    61,    91,
       0,     0,     0,     0,     0,     0,     0,   100,   109,   108,
     107,     0,     0,    29,    30,     0,     0,     0,    18,    27,
      68,    70,   110,    17,    25,    67,    77,    80,     0,    24,
      26,   112,    69,    79,    78,    32,    76,    74,    75,    73,
      71,    72,    60,     0,     0,    51,    50,    52,    36,    44,
      37,    46,    45,    47,    48,    49,    34,    41,    43,    42,
      39,    40,    53,    55,    54,    56,     0,     0,     0,    31,
       0,    93,     0,    94,    95,     0,   111,   113,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    35,    24,    59,    76,    97,    12,
      63,    98,    65,   186,   178,    13,   191,    85,    25,    26,
      66,    67,    16,    17,    18,    27,   125,    20,    21,    28,
      22
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
     -86,    50,   -86,   -86,   -86,   -86,   -86,   -86,   113,   -86,
     -86,   150,   101,    54,    41,    48,   -86,   -86,   -86,    67,
     104,   118,   134,    -1,   164,   152,   165,   173,    34,   197,
      10,   123,    10,    10,   -86,   -86,    72,   -86,   -86,   -86,
     -86,   -86,   -86,    38,   197,    54,   -86,   -86,   -86,    64,
     -86,   182,   193,   206,   -86,   -86,   -86,   158,   216,   137,
      54,     6,    97,   208,   172,    58,   228,   233,   222,   225,
      54,   239,   132,   241,   -86,   242,    54,   138,    25,   248,
     184,   -86,   -86,   -86,   -86,   249,    79,   -86,   187,   209,
     -86,   243,   245,   250,   -86,   -86,   -86,   202,   256,   257,
     258,    29,    54,   210,   161,   254,   210,   147,   -86,   270,
     210,   254,   147,   -86,   -86,    61,   147,   -86,   147,   -86,
     -86,   -86,   137,    -1,   266,   265,    54,   267,    54,   -86,
     137,    72,   137,    72,    72,    72,    72,   -86,   -86,   -86,
     -86,   137,   274,   -86,   -86,   218,   234,   271,    54,   -86,
     -86,   -86,   239,    54,   -86,    54,   -86,   -86,   264,    54,
     -86,   239,    54,   -86,   -86,    54,    54,   -86,   -86,    54,
     -86,   -86,    54,   239,   170,   267,   -86,    54,   -86,    54,
      82,   -86,    54,    54,   267,    54,   -86,    54,   267,   -86,
     203,   -86,    54,   267,   -86,    54,   161,   161,   254,   -86,
     254,   -86,   254,   -86,   -86,    61,   -86,   -86,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   -86,     3,    69,   255,   196,   -11,
     -86,   162,    44,   -28,   -26,   -30,   247,   -86,     0,     2,
     -86,   185,   -20,    -6,   -86,    11,   112,   -86,   -85,   268,
     -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    14,    74,    15,    11,     3,    83,     4,    81,    68,
      82,    34,    19,    45,    30,   104,     3,   105,    62,    70,
     152,    73,    75,    69,    68,    78,   161,    30,    51,    99,
      52,   100,    58,    89,   133,     3,    56,   109,    69,    53,
       3,    57,     4,    51,     3,    52,     4,    58,    49,    91,
       2,    92,    86,    50,    53,    37,     3,    87,     4,    34,
      93,   127,    38,    34,     5,     6,     7,     3,     8,   114,
       3,   124,     4,    57,   123,    54,    55,    34,     3,    56,
      80,    39,    36,    90,    57,     3,    91,     4,    92,   204,
     145,    32,   149,   150,   109,   154,   156,    93,   137,   160,
      72,   163,    34,    74,   127,   167,   107,   170,   108,   109,
      32,    33,    45,   206,    72,   207,   128,   208,    40,     3,
     175,     4,   180,   184,   188,   193,    30,    23,    34,   103,
     106,   110,    41,    71,   115,    54,    55,    34,     3,   122,
      54,    55,    34,    34,    57,   130,   132,   131,    42,   115,
      54,    55,    34,     3,    56,   198,     3,   132,     4,   165,
      29,    54,    55,    34,   200,    56,   132,     3,    56,    46,
       3,   132,     4,   124,    44,   177,   123,   182,   185,   190,
     195,   112,    47,   113,   202,   156,   163,   203,     8,    34,
      48,    64,    34,   135,   127,   132,   104,   115,    79,    94,
      54,    55,    34,     3,    56,     4,    64,    34,    34,    57,
      95,   141,   205,    54,    55,    34,     3,   132,   107,   111,
     108,   109,   132,    96,   132,    61,   101,   196,   132,   108,
     109,   132,    77,   120,   115,   132,   121,   116,   132,   117,
      88,   132,   118,   197,   119,   113,   115,     4,   132,   190,
      32,   115,   132,   129,   115,   102,   132,   134,   136,   115,
     138,   132,   139,   146,   115,   142,   151,   140,   126,   157,
     143,   144,     8,   158,   164,   173,   174,   199,   168,   109,
     171,    56,   119,    84,    60,   201,   147,     0,     0,     0,
       0,    43,     0,   176,     0,   181,     0,   189,   194,   148,
       0,     0,   153,   155,     0,     0,   159,     0,   162,     0,
       0,     0,   166,     0,   169,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,   148,     0,   153,   179,
     183,   187,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   164
};

static const yytype_int16 yycheck[] =
{
      11,     1,    32,     1,     1,     6,    36,     8,    36,    29,
      36,     5,     1,    24,    11,     9,     6,    11,    29,    30,
     105,    32,    33,    29,    44,    36,   111,    24,    28,    57,
      28,    57,    29,    44,     9,     6,     7,    12,    44,    28,
       6,    12,     8,    43,     6,    43,     8,    44,    14,    49,
       0,    49,    14,    19,    43,    14,     6,    19,     8,     5,
      49,    72,    14,     5,    14,    15,    16,     6,    18,    11,
       6,    71,     8,    12,    71,     3,     4,     5,     6,     7,
      36,    14,    13,    19,    12,     6,    86,     8,    86,   174,
     101,     9,   103,   104,    12,   106,   107,    86,    19,   110,
      31,   112,     5,   133,   115,   116,     9,   118,    11,    12,
       9,    10,   123,   198,    45,   200,    72,   202,    14,     6,
     131,     8,   133,   134,   135,   136,   123,    14,     5,    60,
      61,    62,    14,    10,    65,     3,     4,     5,     6,    70,
       3,     4,     5,     5,    12,    76,    77,     9,    14,    80,
       3,     4,     5,     6,     7,   152,     6,    88,     8,   115,
      10,     3,     4,     5,   161,     7,    97,     6,     7,    17,
       6,   102,     8,   173,    10,   131,   173,   133,   134,   135,
     136,     9,    17,    11,    14,   196,   197,    17,    18,     5,
      17,    29,     5,     9,   205,   126,     9,   128,    36,    17,
       3,     4,     5,     6,     7,     8,    44,     5,     5,    12,
      17,     9,     9,     3,     4,     5,     6,   148,     9,    11,
      11,    12,   153,    17,   155,    29,    10,     9,   159,    11,
      12,   162,    36,    11,   165,   166,    11,     9,   169,    11,
      44,   172,     9,     9,    11,    11,   177,     8,   179,   205,
       9,   182,   183,    11,   185,    59,   187,     9,     9,   190,
      17,   192,    17,   101,   195,     9,   104,    17,    72,   107,
      13,    13,    18,     3,   112,     9,    11,    13,   116,    12,
     118,     7,    11,    36,    29,   173,   101,    -1,    -1,    -1,
      -1,    23,    -1,   131,    -1,   133,    -1,   135,   136,   103,
      -1,    -1,   106,   107,    -1,    -1,   110,    -1,   112,    -1,
      -1,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     6,     8,    14,    15,    16,    18,    27,
      28,    30,    34,    40,    43,    44,    47,    48,    49,    50,
      52,    53,    55,    14,    30,    43,    44,    50,    54,    10,
      30,    34,     9,    10,     5,    29,    31,    14,    14,    14,
      14,    14,    14,    54,    10,    34,    17,    17,    17,    14,
      19,    43,    44,    50,     3,     4,     7,    12,    30,    31,
      32,    33,    34,    35,    36,    37,    45,    46,    47,    48,
      34,    10,    31,    34,    40,    34,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    42,    14,    19,    33,    34,
      19,    43,    44,    50,    17,    17,    17,    33,    36,    38,
      39,    10,    33,    31,     9,    11,    31,     9,    11,    12,
      31,    11,     9,    11,    11,    31,     9,    11,     9,    11,
      11,    11,    31,    30,    43,    51,    33,    34,    37,    11,
      31,     9,    31,     9,     9,     9,     9,    19,    17,    17,
      17,     9,     9,    13,    13,    34,    36,    46,    33,    34,
      34,    36,    53,    33,    34,    33,    34,    36,     3,    33,
      34,    53,    33,    34,    36,    37,    33,    34,    36,    33,
      34,    36,    33,     9,    11,    34,    36,    37,    39,    33,
      34,    36,    37,    33,    34,    37,    38,    33,    34,    36,
      37,    41,    33,    34,    36,    37,     9,     9,    30,    13,
      30,    51,    14,    17,    53,     9,    53,    53,    53
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
#line 80 "syntax_analyzer.y"
    {printf("Valid declaration\n"); cor_expr++;;}
    break;

  case 6:
#line 81 "syntax_analyzer.y"
    {printf("Valid assignment\n"); cor_expr++;;}
    break;

  case 7:
#line 82 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 8:
#line 83 "syntax_analyzer.y"
    {printf("Valid function declaration\n"); cor_expr++;;}
    break;

  case 9:
#line 84 "syntax_analyzer.y"
    {printf("Valid if statement\n"); cor_expr++;;}
    break;

  case 10:
#line 85 "syntax_analyzer.y"
    {printf("Valid body\n");;}
    break;

  case 11:
#line 86 "syntax_analyzer.y"
    { print_report(cor_words); ;}
    break;

  case 12:
#line 87 "syntax_analyzer.y"
    {inc_words++;;}
    break;

  case 13:
#line 90 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 14:
#line 93 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 15:
#line 97 "syntax_analyzer.y"
    {
        // for type of variables
        if(!strcmp((yyvsp[(1) - (1)].sval), "int") || !strcmp((yyvsp[(1) - (1)].sval), "float") || !strcmp((yyvsp[(1) - (1)].sval), "const") || !strcmp((yyvsp[(1) - (1)].sval), "double")) (yyval.ival) = 1;    
        if(!strcmp((yyvsp[(1) - (1)].sval), "const") || !strcmp((yyvsp[(1) - (1)].sval), "long")) (yyval.ival) = 2;
        // for functions
        if(!strcmp((yyvsp[(1) - (1)].sval), "scan")) (yyval.ival) = 3;
        if(!strcmp((yyvsp[(1) - (1)].sval), "len")) (yyval.ival) = 4;
        if(!strcmp((yyvsp[(1) - (1)].sval), "cmp")) (yyval.ival) = 5;
        if(!strcmp((yyvsp[(1) - (1)].sval), "print")) (yyval.ival) = 6;
        if(!strcmp((yyvsp[(1) - (1)].sval), "func")) (yyval.ival) = 7;
        // for conditionals
        if(!strcmp((yyvsp[(1) - (1)].sval), "if")) (yyval.ival) = 8;
    ;}
    break;

  case 16:
#line 112 "syntax_analyzer.y"
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

  case 17:
#line 135 "syntax_analyzer.y"
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

  case 18:
#line 157 "syntax_analyzer.y"
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

  case 19:
#line 179 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
        }
    ;}
    break;

  case 20:
#line 192 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 21:
#line 193 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 22:
#line 194 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 23:
#line 198 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 24:
#line 201 "syntax_analyzer.y"
    {;}
    break;

  case 25:
#line 202 "syntax_analyzer.y"
    {;}
    break;

  case 26:
#line 203 "syntax_analyzer.y"
    {;}
    break;

  case 27:
#line 204 "syntax_analyzer.y"
    {;}
    break;

  case 28:
#line 207 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 29:
#line 211 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0;;}
    break;

  case 30:
#line 212 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 31:
#line 213 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 32:
#line 214 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid arr"); (yyval.ival) = 4; val_com=0;;}
    break;

  case 34:
#line 220 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 36:
#line 224 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 38:
#line 228 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 40:
#line 232 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 41:
#line 236 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 42:
#line 237 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 43:
#line 238 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 44:
#line 240 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 45:
#line 241 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 46:
#line 242 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 47:
#line 244 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 48:
#line 245 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 49:
#line 246 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 50:
#line 248 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 51:
#line 249 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 52:
#line 250 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 53:
#line 252 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 54:
#line 253 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 55:
#line 254 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 56:
#line 255 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 57:
#line 260 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1) yyerror("Invalid declaration type");;}
    break;

  case 58:
#line 261 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type");;}
    break;

  case 59:
#line 262 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid declaration type");;}
    break;

  case 60:
#line 263 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type");;}
    break;

  case 61:
#line 264 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12 ) yyerror("Invalid declaration type");;}
    break;

  case 62:
#line 269 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)  yyerror("Invalid assignment1"); var_com = 0; val_com = 0;;}
    break;

  case 63:
#line 270 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || val_arr_com) yyerror("Invalid assignment2"); var_com = 0; val_arr_com = 0;;}
    break;

  case 64:
#line 271 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment3"); var_com = 0; val_com = 0;;}
    break;

  case 65:
#line 272 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment4"); var_com = 0; val_com = 0;;}
    break;

  case 66:
#line 273 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment5"); var_com = 0; val_ass_com = 0;;}
    break;

  case 81:
#line 297 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 82:
#line 298 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 4) yyerror("Invalid function call");;}
    break;

  case 83:
#line 299 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 84:
#line 303 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 85:
#line 307 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call"); ;}
    break;

  case 86:
#line 308 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call");;}
    break;

  case 87:
#line 309 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 91:
#line 321 "syntax_analyzer.y"
    {;}
    break;

  case 94:
#line 331 "syntax_analyzer.y"
    {if((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval);}
    break;

  case 95:
#line 332 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval);}
    break;

  case 96:
#line 333 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (7)].sval);}
    break;

  case 110:
#line 357 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8) yyerror("Invalid if statement");;}
    break;

  case 111:
#line 358 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 8) yyerror("Invalid if statement");;}
    break;

  case 112:
#line 359 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8) yyerror("Invalid if statement");;}
    break;

  case 113:
#line 360 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 8) yyerror("Invalid if statement");;}
    break;


/* Line 1267 of yacc.c.  */
#line 2034 "syntax_analyzer.tab.c"
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


#line 363 "syntax_analyzer.y"

/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
}

void print_report(int cor_words) {
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
