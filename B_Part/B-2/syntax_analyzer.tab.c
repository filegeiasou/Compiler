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
#define YYLAST   411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

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
      24,    27,    30,    33,    36,    38,    40,    42,    44,    46,
      48,    52,    56,    59,    61,    63,    65,    67,    71,    75,
      79,    83,    85,    89,    93,    98,   102,   104,   108,   110,
     114,   116,   120,   122,   126,   130,   134,   138,   142,   146,
     150,   154,   158,   162,   166,   170,   174,   178,   182,   186,
     190,   193,   198,   202,   208,   213,   217,   221,   225,   229,
     233,   237,   241,   245,   249,   253,   257,   261,   265,   269,
     273,   277,   281,   285,   289,   293,   298,   303,   308,   313,
     318,   323,   328,   330,   332,   334,   339,   344,   349,   354,
     359,   361,   365,   372,   379,   387,   391,   396,   401,   407,
     409,   412,   415,   418,   421,   423,   425,   429,   433,   437,
     440,   443,   448,   453,   458,   462,   466,   472,   478,   482,
     487,   490,   494,   504
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    -1,    26,    27,    -1,    14,    -1,    33,
      14,    -1,    29,    14,    -1,    43,    14,    -1,    44,    14,
      -1,    50,    14,    -1,    52,    14,    -1,    56,    14,    -1,
      58,    14,    -1,    53,    14,    -1,    15,    -1,    16,    -1,
       8,    -1,     5,    -1,    28,    -1,    29,    -1,    33,    31,
      33,    -1,    32,    31,    33,    -1,    31,    33,    -1,     3,
      -1,     4,    -1,    32,    -1,     6,    -1,    34,    31,    33,
      -1,    33,    31,    34,    -1,    34,    31,    34,    -1,    32,
      31,    34,    -1,     7,    -1,    12,    38,    13,    -1,    12,
      39,    13,    -1,    34,    12,     3,    13,    -1,    37,    31,
      37,    -1,    36,    -1,    36,     9,    38,    -1,    33,    -1,
      33,     9,    39,    -1,    34,    -1,    34,     9,    40,    -1,
      37,    -1,    37,     9,    41,    -1,    37,     9,    33,    -1,
      37,     9,    36,    -1,    37,     9,    34,    -1,    34,     9,
      33,    -1,    34,     9,    37,    -1,    34,     9,    36,    -1,
      36,     9,    33,    -1,    36,     9,    34,    -1,    36,     9,
      37,    -1,    33,     9,    36,    -1,    33,     9,    34,    -1,
      33,     9,    37,    -1,    42,     9,    33,    -1,    42,     9,
      36,    -1,    42,     9,    34,    -1,    42,     9,    37,    -1,
      30,    34,    -1,    30,    34,    31,    33,    -1,    30,    30,
      34,    -1,    30,    30,    34,    31,    33,    -1,    30,    34,
      31,    37,    -1,    40,    31,    39,    -1,    40,    31,    41,
      -1,    40,    31,    40,    -1,    40,    31,    38,    -1,    40,
      31,    42,    -1,    34,     9,    33,    -1,    33,     9,    34,
      -1,    36,     9,    33,    -1,    33,     9,    36,    -1,    33,
       9,    33,    -1,    46,     9,    34,    -1,    46,     9,    36,
      -1,    46,     9,    33,    -1,    45,     9,    34,    -1,    45,
       9,    36,    -1,    45,     9,    33,    -1,    34,     9,    34,
      -1,    36,     9,    36,    -1,    36,     9,    34,    -1,    34,
       9,    36,    -1,    30,    10,    34,    11,    -1,    30,    10,
      37,    11,    -1,    30,    10,    36,    11,    -1,    30,    10,
      46,    11,    -1,    30,    10,    47,    11,    -1,    30,    10,
      48,    11,    -1,    30,    10,    45,    11,    -1,    47,    -1,
      48,    -1,    49,    -1,    34,    10,    34,    11,    -1,    34,
      10,    33,    11,    -1,    34,    10,    36,    11,    -1,    34,
      10,    46,    11,    -1,    34,    10,    45,    11,    -1,    43,
      -1,    43,     9,    51,    -1,    30,    34,    10,    51,    11,
      17,    -1,    30,    34,    10,    51,    11,    53,    -1,    30,
      34,    10,    51,    11,    14,    53,    -1,    18,    55,    19,
      -1,    18,    14,    55,    19,    -1,    18,    55,    14,    19,
      -1,    18,    14,    55,    14,    19,    -1,    53,    -1,    14,
      53,    -1,    50,    17,    -1,    44,    17,    -1,    43,    17,
      -1,    56,    -1,    58,    -1,    55,    50,    17,    -1,    55,
      44,    17,    -1,    55,    43,    17,    -1,    55,    56,    -1,
      55,    58,    -1,    55,    14,    50,    17,    -1,    55,    14,
      44,    17,    -1,    55,    14,    43,    17,    -1,    55,    14,
      56,    -1,    55,    14,    58,    -1,    30,    10,    33,    11,
      54,    -1,    30,    10,    35,    11,    54,    -1,    56,    30,
      54,    -1,    56,    14,    30,    54,    -1,    34,    31,    -1,
      34,    31,    33,    -1,    30,    10,    57,    17,    32,    17,
      57,    11,    54,    -1,    30,    10,    57,    17,    35,    17,
      57,    11,    54,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    74,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    91,    94,    98,   116,
     139,   159,   181,   194,   195,   196,   200,   204,   205,   206,
     207,   210,   214,   215,   216,   217,   222,   223,   226,   227,
     230,   231,   234,   235,   239,   240,   241,   243,   244,   245,
     247,   248,   249,   251,   252,   253,   255,   256,   257,   258,
     263,   264,   265,   266,   267,   272,   273,   274,   275,   276,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   294,   295,   296,   297,   301,   302,   303,   307,   311,
     312,   313,   322,   323,   324,   325,   326,   327,   328,   329,
     333,   334,   339,   340,   341,   346,   347,   348,   349,   353,
     354,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   377,   378,   379,   380,
     384,   385,   389,   392
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
  "help_assign", "declaration", "assignment", "help_3args", "help_2args",
  "scan_len_print", "cmp_print", "print", "func_call", "arguments",
  "func_decl", "body", "cond_body", "all", "if_while_grammar", "help_for",
  "for_grammar", 0
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
      27,    27,    27,    27,    27,    27,    28,    29,    30,    31,
      32,    32,    32,    33,    33,    33,    34,    35,    35,    35,
      35,    36,    37,    37,    37,    37,    38,    38,    39,    39,
      40,    40,    41,    41,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      43,    43,    43,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    46,    46,    46,    46,    47,    47,    47,    48,    49,
      49,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      57,    57,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     3,     3,     4,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     4,     3,     5,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     1,     1,     1,     4,     4,     4,     4,     4,
       1,     3,     6,     6,     7,     3,     4,     4,     5,     1,
       2,     2,     2,     2,     1,     1,     3,     3,     3,     2,
       2,     4,     4,     4,     3,     3,     5,     5,     3,     4,
       2,     3,     9,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    23,    24,    17,    26,    16,     4,    14,
      15,     0,     3,    18,    19,     0,     0,    25,     0,    40,
       0,     0,     0,    92,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     6,
       0,     0,    60,    19,    22,     0,     5,     0,     0,     0,
       0,     7,     8,     9,    10,    13,    11,     0,    12,     0,
      60,   113,   112,   111,     0,   105,     0,     0,     0,   119,
     120,     0,    31,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,     0,    21,
      20,    40,    41,     0,     0,     0,     0,     0,    38,    40,
      36,    42,    68,    65,    67,    66,    69,     0,     0,   109,
     128,     0,   106,   107,     0,     0,     0,   124,   125,   118,
     117,   116,    38,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,   130,     0,     0,    87,    86,     0,
       0,    91,     0,    88,    89,    90,     0,     0,     0,   100,
       0,    61,     0,    64,    96,    95,    97,    99,    98,     0,
       0,     0,     0,     0,   129,   110,   108,   123,   122,   121,
       0,     0,    32,    33,     0,     0,     0,    30,    74,    71,
      73,   126,    28,    70,    81,    84,     0,    27,    29,   127,
      72,    83,    82,    35,    80,    78,    79,    77,    75,    76,
       0,     0,     0,     0,    63,     0,     0,    54,    53,    55,
      39,    47,    40,    49,    48,    50,    51,    52,    37,    44,
      46,    45,    42,    43,    56,    58,    57,    59,     0,     0,
      34,     0,     0,     0,   101,     0,   102,   103,     0,     0,
       0,    27,     0,   104,   130,     0,     0,   131,   132,   133
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    13,    43,    32,    16,    17,   122,    19,
      78,   123,    80,   218,   210,    20,   223,   106,    33,    34,
      81,    82,    23,    24,    25,    35,   150,    27,   109,   110,
      36,    37,    85,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
    -104,   233,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,    83,  -104,  -104,     3,   287,   153,    54,    42,   183,
      54,    85,    96,  -104,  -104,  -104,   101,   111,   135,   136,
     152,   221,   287,    50,    60,   103,     6,   169,  -104,  -104,
     264,   175,    74,  -104,    54,   153,  -104,   153,   175,   274,
      99,  -104,  -104,  -104,  -104,  -104,   176,    52,  -104,    16,
      54,  -104,  -104,  -104,    15,  -104,   181,   191,   203,   169,
    -104,   176,  -104,   285,   193,    54,   112,    46,   234,   254,
     186,   305,   309,   243,   248,   229,    54,   176,   213,    54,
      54,   253,  -104,   160,   317,   318,   328,   329,    89,    31,
     266,   171,  -104,  -104,  -104,  -104,   273,    52,   280,  -104,
    -104,    44,  -104,  -104,   268,   288,   289,   169,  -104,  -104,
    -104,  -104,   206,   282,   304,   331,   106,   319,   274,    52,
     319,   274,  -104,   327,   319,    52,   274,  -104,  -104,   222,
     274,  -104,   274,  -104,  -104,  -104,   319,   153,   221,   293,
     320,    54,   330,    54,  -104,  -104,  -104,  -104,  -104,    99,
      99,    99,    99,    99,  -104,  -104,  -104,  -104,  -104,  -104,
     153,   338,  -104,  -104,   299,   332,   335,  -104,    54,  -104,
    -104,  -104,  -104,    54,  -104,  -104,   334,    11,  -104,  -104,
      54,  -104,  -104,    54,    54,  -104,  -104,    54,  -104,  -104,
      14,    54,    54,   333,    54,   176,   239,   330,  -104,    54,
    -104,    54,   125,  -104,    54,    54,   330,    54,  -104,    54,
     330,  -104,   235,  -104,    54,   330,  -104,    54,   267,   267,
    -104,   175,   319,   175,  -104,   280,  -104,  -104,   222,    54,
     337,    54,   340,  -104,   153,    52,    52,    54,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,  -104,   348,    53,   -15,   -32,    -1,   173,
     208,   124,    -8,   -40,   -37,   -41,   306,  -104,     5,    17,
     308,   -38,   315,   321,  -104,    36,   154,  -104,     0,  -103,
     336,    37,    63,   131
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
      18,    28,    45,    47,   164,    50,    21,    92,    75,   104,
     102,    97,     6,   103,     7,    44,     5,    39,    22,     5,
      64,     6,     6,     7,     7,    65,   181,    88,  -131,    47,
     111,   231,   189,   124,   113,   112,   125,    26,    29,    76,
     160,    66,   101,   133,    89,    88,    90,     5,    93,    98,
       6,     5,     7,    67,    15,   131,    46,   132,   133,     5,
     127,   130,   134,   166,    66,   139,   108,    61,    41,   114,
      11,   147,    68,    69,    47,    47,    67,    62,    47,     5,
     153,   115,    57,    47,    87,    41,   139,   151,   176,     6,
      57,     7,   149,    74,     5,    68,    69,    31,   159,    51,
     116,   117,     3,     4,     5,     6,    72,    47,   165,   107,
      52,    73,     6,    72,   200,    53,   114,     5,    73,    92,
      63,   128,    57,   129,   107,    54,    89,   178,   115,    90,
     183,   193,    30,   187,    48,   190,    47,   133,   139,   194,
     148,   197,   248,   249,     7,   201,   204,   116,   117,    55,
      56,   209,   214,   217,   222,   227,     3,     4,     5,   211,
     215,   219,   224,    47,    79,     5,    58,    70,    47,   128,
      57,   154,    47,    95,   100,    47,     5,     7,   139,    47,
     162,     6,    47,    71,     7,   127,   130,   232,    42,    47,
      70,     5,    48,    49,   139,   118,    47,   138,   119,   139,
      47,    41,   139,   126,    47,    60,   237,   139,   120,    47,
     149,     5,   139,    77,    86,   170,     3,     4,     5,     6,
     121,    91,    94,    99,   244,    73,    47,     6,     6,     7,
     222,   241,    47,     2,    73,   243,     3,     4,     5,     6,
       5,     7,   118,   247,   238,   135,   146,     8,     9,    10,
     175,    11,   180,   235,   144,   185,   236,    11,   148,   145,
     192,   152,    48,   136,   196,   137,   199,     3,     4,     5,
       6,    72,     7,     6,    72,   161,    73,     3,     4,     5,
       6,    72,   163,   208,   213,   167,   221,   226,     3,     4,
       5,   171,    72,     6,   240,     7,   242,    40,    11,   174,
     177,   179,   205,   182,   184,   168,   169,   188,   228,   191,
     132,   133,   152,   195,   140,   198,   141,   172,   142,   202,
     143,    60,     3,     4,     5,     6,   131,   136,   155,   156,
     186,   206,   207,   212,   216,   220,   225,   140,   142,   157,
     158,   229,   133,   137,   173,    72,   143,   230,   245,    14,
     233,   246,   185,   192,   203,    83,   105,    96,     0,   234,
       0,    84,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   184,   191,     0,   239,   188,   239,     0,     0,     0,
       0,   152
};

static const yytype_int16 yycheck[] =
{
       1,     1,    17,    18,   107,    20,     1,    48,    40,    50,
      50,    49,     6,    50,     8,    16,     5,    14,     1,     5,
      14,     6,     6,     8,     8,    19,   129,    42,    17,    44,
      14,    17,   135,    73,    19,    19,    73,     1,     1,    40,
       9,    36,    50,    12,    45,    60,    47,     5,    49,    50,
       6,     5,     8,    36,     1,     9,    14,    11,    12,     5,
      75,    76,    77,    19,    59,    80,    14,    17,    15,    64,
      18,    86,    36,    36,    89,    90,    59,    17,    93,     5,
      88,    64,    29,    98,    10,    32,   101,    88,   126,     6,
      37,     8,    87,    40,     5,    59,    59,    14,     9,    14,
      64,    64,     3,     4,     5,     6,     7,   122,   108,    56,
      14,    12,     6,     7,   146,    14,   111,     5,    12,   160,
      17,     9,    69,    11,    71,    14,   127,   128,   111,   130,
     131,   139,     1,   134,     9,   136,   151,    12,   153,   140,
      87,   142,   245,   246,     8,   146,   147,   111,   111,    14,
      14,   159,   160,   161,   162,   163,     3,     4,     5,   160,
     161,   162,   163,   178,    40,     5,    14,    36,   183,     9,
     117,    11,   187,    49,    50,   190,     5,     8,   193,   194,
       9,     6,   197,    14,     8,   200,   201,   202,    15,   204,
      59,     5,     9,    10,   209,    64,   211,    11,    17,   214,
     215,   148,   217,    10,   219,    32,   206,   222,    17,   224,
     205,     5,   227,    40,    41,     9,     3,     4,     5,     6,
      17,    48,    49,    50,   239,    12,   241,     6,     6,     8,
     238,   232,   247,     0,    12,   235,     3,     4,     5,     6,
       5,     8,   111,   244,     9,    11,    17,    14,    15,    16,
     126,    18,   128,    14,    11,   131,    17,    18,   205,    11,
     136,    88,     9,     9,   140,    11,   142,     3,     4,     5,
       6,     7,     8,     6,     7,     9,    12,     3,     4,     5,
       6,     7,     9,   159,   160,    17,   162,   163,     3,     4,
       5,     9,     7,     6,   231,     8,   233,    10,    18,   126,
     127,   128,     9,   130,   131,    17,    17,   134,     9,   136,
      11,    12,   139,   140,     9,   142,    11,    13,     9,   146,
      11,   148,     3,     4,     5,     6,     9,     9,    11,    11,
       3,    11,   159,   160,   161,   162,   163,     9,     9,    11,
      11,     9,    12,    11,    13,     7,    11,    13,    11,     1,
      17,    11,   228,   229,   146,    40,    50,    49,    -1,   205,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   228,   229,    -1,   231,   232,   233,    -1,    -1,    -1,
      -1,   238
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     3,     4,     5,     6,     8,    14,    15,
      16,    18,    27,    28,    29,    30,    31,    32,    33,    34,
      40,    43,    44,    47,    48,    49,    50,    52,    53,    56,
      58,    14,    30,    43,    44,    50,    55,    56,    58,    14,
      10,    30,    34,    29,    33,    31,    14,    31,     9,    10,
      31,    14,    14,    14,    14,    14,    14,    30,    14,    55,
      34,    17,    17,    17,    14,    19,    43,    44,    50,    56,
      58,    14,     7,    12,    30,    32,    33,    34,    35,    36,
      37,    45,    46,    47,    48,    57,    34,    10,    31,    33,
      33,    34,    40,    33,    34,    36,    45,    46,    33,    34,
      36,    37,    38,    39,    40,    41,    42,    30,    14,    53,
      54,    14,    19,    19,    43,    44,    50,    56,    58,    17,
      17,    17,    33,    36,    38,    39,    10,    31,     9,    11,
      31,     9,    11,    12,    31,    11,     9,    11,    11,    31,
       9,    11,     9,    11,    11,    11,    17,    31,    30,    43,
      51,    33,    34,    37,    11,    11,    11,    11,    11,     9,
       9,     9,     9,     9,    54,    53,    19,    17,    17,    17,
       9,     9,    13,    13,    34,    36,    46,    34,    33,    34,
      36,    54,    34,    33,    34,    36,     3,    33,    34,    54,
      33,    34,    36,    37,    33,    34,    36,    33,    34,    36,
      32,    33,    34,    35,    33,     9,    11,    34,    36,    37,
      39,    33,    34,    36,    37,    33,    34,    37,    38,    33,
      34,    36,    37,    41,    33,    34,    36,    37,     9,     9,
      13,    17,    31,    17,    51,    14,    17,    53,     9,    34,
      57,    33,    57,    53,    31,    11,    11,    33,    54,    54
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
#line 78 "syntax_analyzer.y"
    { printf("Result: %f\n", (yyvsp[(1) - (2)].dval)); ;}
    break;

  case 6:
#line 79 "syntax_analyzer.y"
    {printf("Operator: %s\n", (yyvsp[(1) - (2)].sval));;}
    break;

  case 7:
#line 80 "syntax_analyzer.y"
    {printf("Valid declaration\n"); cor_expr++;;}
    break;

  case 8:
#line 81 "syntax_analyzer.y"
    {printf("Valid assignment\n"); cor_expr++;;}
    break;

  case 9:
#line 82 "syntax_analyzer.y"
    {printf("Valid function call\n"); cor_expr++;;}
    break;

  case 10:
#line 83 "syntax_analyzer.y"
    {printf("Valid function declaration\n"); cor_expr++;;}
    break;

  case 11:
#line 84 "syntax_analyzer.y"
    {printf("Valid if/while statement\n"); cor_expr++;;}
    break;

  case 12:
#line 85 "syntax_analyzer.y"
    {printf("Valid for statement\n"); cor_expr++;;}
    break;

  case 13:
#line 86 "syntax_analyzer.y"
    {printf("Valid body\n");;}
    break;

  case 14:
#line 87 "syntax_analyzer.y"
    { print_report(cor_words); ;}
    break;

  case 15:
#line 88 "syntax_analyzer.y"
    {inc_words++;;}
    break;

  case 16:
#line 91 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 17:
#line 94 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 18:
#line 98 "syntax_analyzer.y"
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
        if(!strcmp((yyvsp[(1) - (1)].sval), "else")) (yyval.ival) = 9;
        if(!strcmp((yyvsp[(1) - (1)].sval), "while")) (yyval.ival) = 10;
        if(!strcmp((yyvsp[(1) - (1)].sval), "for")) (yyval.ival) = 11;
    ;}
    break;

  case 19:
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

  case 20:
#line 139 "syntax_analyzer.y"
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

  case 21:
#line 159 "syntax_analyzer.y"
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

  case 22:
#line 181 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
        }
    ;}
    break;

  case 23:
#line 194 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 24:
#line 195 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 25:
#line 196 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 26:
#line 200 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 27:
#line 204 "syntax_analyzer.y"
    {;}
    break;

  case 28:
#line 205 "syntax_analyzer.y"
    {;}
    break;

  case 29:
#line 206 "syntax_analyzer.y"
    {;}
    break;

  case 30:
#line 207 "syntax_analyzer.y"
    {;}
    break;

  case 31:
#line 210 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 32:
#line 214 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0;;}
    break;

  case 33:
#line 215 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 34:
#line 216 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 35:
#line 217 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid arr"); (yyval.ival) = 4; val_com=0;;}
    break;

  case 37:
#line 223 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 39:
#line 227 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 41:
#line 231 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 43:
#line 235 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 44:
#line 239 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 45:
#line 240 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 46:
#line 241 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 47:
#line 243 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 48:
#line 244 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 49:
#line 245 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 50:
#line 247 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 51:
#line 248 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 52:
#line 249 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 53:
#line 251 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 54:
#line 252 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 55:
#line 253 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 56:
#line 255 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 57:
#line 256 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 58:
#line 257 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 59:
#line 258 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 60:
#line 263 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1) yyerror("Invalid declaration type");;}
    break;

  case 61:
#line 264 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type");;}
    break;

  case 62:
#line 265 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid declaration type");;}
    break;

  case 63:
#line 266 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type");;}
    break;

  case 64:
#line 267 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 || (yyvsp[(3) - (4)].ival) != 12 ) yyerror("Invalid declaration type");;}
    break;

  case 65:
#line 272 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)  yyerror("Invalid assignment"); var_com = 0; val_com = 0;;}
    break;

  case 66:
#line 273 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || val_arr_com) yyerror("Invalid assignment"); var_com = 0; val_arr_com = 0;;}
    break;

  case 67:
#line 274 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0;;}
    break;

  case 68:
#line 275 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0;;}
    break;

  case 69:
#line 276 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); var_com = 0; val_ass_com = 0;;}
    break;

  case 85:
#line 301 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 86:
#line 302 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 4) yyerror("Invalid function call");;}
    break;

  case 87:
#line 303 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 88:
#line 307 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 89:
#line 311 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call"); ;}
    break;

  case 90:
#line 312 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call");;}
    break;

  case 91:
#line 313 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 95:
#line 325 "syntax_analyzer.y"
    {;}
    break;

  case 96:
#line 326 "syntax_analyzer.y"
    {;}
    break;

  case 97:
#line 327 "syntax_analyzer.y"
    {;}
    break;

  case 98:
#line 328 "syntax_analyzer.y"
    {;}
    break;

  case 99:
#line 329 "syntax_analyzer.y"
    {;}
    break;

  case 102:
#line 339 "syntax_analyzer.y"
    {if((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval);}
    break;

  case 103:
#line 340 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval);}
    break;

  case 104:
#line 341 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (7)].sval);}
    break;

  case 126:
#line 377 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); (yyval.ival) = (yyvsp[(1) - (5)].ival);}
    break;

  case 127:
#line 378 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); (yyval.ival) = (yyvsp[(1) - (5)].ival);}
    break;

  case 128:
#line 379 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 9 || (yyvsp[(1) - (3)].ival) != 8) yyerror("Invalid if/while statement");;}
    break;

  case 129:
#line 380 "syntax_analyzer.y"
    {if ((yyvsp[(3) - (4)].ival) != 9 || (yyvsp[(1) - (4)].ival) != 8) yyerror("Invalid if/while statement");;}
    break;

  case 130:
#line 384 "syntax_analyzer.y"
    {if((yyvsp[(2) - (2)].ival) != 17 && (yyvsp[(2) - (2)].ival) != 18) yyerror("Invalid --/++ operator");;}
    break;

  case 131:
#line 385 "syntax_analyzer.y"
    {;}
    break;

  case 132:
#line 389 "syntax_analyzer.y"
    {
        if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement");
    ;}
    break;

  case 133:
#line 392 "syntax_analyzer.y"
    {
        if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement");
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2135 "syntax_analyzer.tab.c"
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


#line 397 "syntax_analyzer.y"

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
