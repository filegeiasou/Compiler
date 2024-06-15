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
#line 40 "syntax_analyzer.y"

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
        extern FILE *yyin;

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
#line 65 "syntax_analyzer.y"
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
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNRULES -- Number of states.  */
#define YYNSTATES  282

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
       0,     0,     3,     4,     7,     9,    13,    17,    21,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    43,    47,
      50,    52,    54,    56,    58,    62,    66,    70,    74,    76,
      78,    82,    84,    88,    92,    96,   100,   105,   109,   111,
     115,   117,   121,   123,   127,   129,   133,   135,   139,   143,
     147,   151,   155,   159,   163,   167,   171,   175,   179,   183,
     187,   191,   195,   199,   203,   207,   211,   215,   219,   223,
     227,   231,   235,   239,   242,   247,   252,   257,   261,   267,
     273,   279,   284,   289,   293,   297,   301,   305,   309,   313,
     317,   321,   325,   329,   333,   337,   341,   345,   349,   353,
     357,   361,   365,   369,   373,   378,   383,   388,   393,   398,
     403,   408,   410,   412,   414,   419,   424,   429,   434,   439,
     443,   445,   449,   456,   463,   471,   478,   485,   493,   497,
     502,   507,   513,   515,   518,   521,   525,   528,   531,   534,
     536,   538,   542,   546,   550,   553,   556,   561,   566,   571,
     575,   579,   585,   591,   595,   600,   603,   607,   617
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    -1,    26,    27,    -1,    14,    -1,    46,
      17,    14,    -1,    47,    17,    14,    -1,    53,    17,    14,
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
       4,    -1,    30,    34,    31,    34,    -1,    30,    30,    34,
      -1,    30,    30,    34,    31,     3,    -1,    30,    30,    34,
      31,     4,    -1,    30,    30,    34,    31,    34,    -1,    30,
      34,    31,    39,    -1,    30,    34,    31,    35,    -1,    42,
      31,    41,    -1,    42,    31,    43,    -1,    42,    31,    42,
      -1,    42,    31,    40,    -1,    42,    31,    44,    -1,    42,
      31,    45,    -1,    34,     9,    33,    -1,    33,     9,    34,
      -1,    36,     9,    33,    -1,    33,     9,    36,    -1,    33,
       9,    33,    -1,    49,     9,    34,    -1,    49,     9,    36,
      -1,    49,     9,    33,    -1,    48,     9,    34,    -1,    48,
       9,    36,    -1,    48,     9,    33,    -1,    34,     9,    34,
      -1,    36,     9,    36,    -1,    36,     9,    34,    -1,    34,
       9,    36,    -1,    30,    10,    34,    11,    -1,    30,    10,
      39,    11,    -1,    30,    10,    36,    11,    -1,    30,    10,
      49,    11,    -1,    30,    10,    50,    11,    -1,    30,    10,
      51,    11,    -1,    30,    10,    48,    11,    -1,    50,    -1,
      51,    -1,    52,    -1,    34,    10,    34,    11,    -1,    34,
      10,    33,    11,    -1,    34,    10,    36,    11,    -1,    34,
      10,    49,    11,    -1,    34,    10,    48,    11,    -1,    34,
      10,    11,    -1,    46,    -1,    46,     9,    54,    -1,    30,
      34,    10,    54,    11,    17,    -1,    30,    34,    10,    54,
      11,    56,    -1,    30,    34,    10,    54,    11,    14,    56,
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
      17,    32,    17,    60,    11,    57,    -1,    30,    10,    60,
      17,    35,    17,    60,    11,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    92,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   106,   109,   114,   137,   162,   182,   204,
     214,   215,   216,   221,   226,   227,   228,   229,   234,   239,
     240,   243,   244,   249,   250,   251,   252,   253,   258,   259,
     262,   263,   266,   267,   270,   271,   274,   275,   284,   285,
     286,   287,   289,   290,   291,   292,   294,   295,   296,   297,
     299,   300,   301,   302,   304,   305,   306,   307,   309,   310,
     311,   312,   313,   320,   324,   325,   326,   332,   333,   334,
     335,   338,   345,   351,   352,   353,   354,   355,   356,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     379,   380,   381,   382,   393,   394,   395,   402,   407,   408,
     409,   414,   415,   416,   420,   421,   422,   423,   424,   425,
     431,   432,   441,   442,   443,   446,   447,   448,   453,   454,
     455,   456,   461,   462,   463,   464,   469,   470,   471,   472,
     473,   475,   476,   477,   478,   479,   481,   482,   483,   484,
     485,   492,   494,   495,   496,   502,   503,   508,   509
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
      27,    27,    27,    28,    29,    30,    31,    32,    32,    32,
      33,    33,    33,    34,    35,    35,    35,    35,    36,    37,
      37,    38,    38,    39,    39,    39,    39,    39,    40,    40,
      41,    41,    42,    42,    43,    43,    44,    44,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    47,    47,    47,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    49,    49,    50,    50,    50,    51,    52,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    57,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    60,    60,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     1,
       3,     1,     3,     3,     3,     3,     4,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     4,     4,     4,     3,     5,     5,
       5,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     1,     1,     1,     4,     4,     4,     4,     4,     3,
       1,     3,     6,     6,     7,     6,     6,     7,     3,     4,
       4,     5,     1,     2,     2,     3,     2,     2,     2,     1,
       1,     3,     3,     3,     2,     2,     4,     4,     4,     3,
       3,     5,     5,     3,     4,     2,     3,     9,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    23,    13,     4,    11,    12,     3,    15,
       0,    42,     0,     0,     0,   111,   112,   113,     0,     8,
       9,    10,     0,     0,    73,     0,     0,    14,    16,     0,
       0,     0,     0,     0,     0,    20,    21,    28,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,    42,    43,   119,    22,     0,
       0,     0,     0,     0,    40,    42,    46,    38,    44,    86,
      83,    85,    84,    87,    88,     5,     6,     7,     0,     0,
       0,   132,   153,    29,    31,    38,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,   104,     0,   155,     0,
       0,   106,   105,     0,     0,   110,     0,   107,   108,   109,
       0,     0,     0,   120,     0,    74,    75,     0,    76,    82,
      81,     0,   115,     0,   114,   116,   118,   117,     0,     0,
       0,     0,     0,     0,     0,   154,   133,     0,     0,     0,
       0,     0,     0,   139,   140,   134,     0,     0,     0,    33,
      34,    35,     0,     0,     0,    18,    27,    93,    90,    92,
     151,    17,    25,    89,   100,   103,     0,    24,    26,   152,
      91,   102,   101,     0,    37,    99,    97,    98,    96,    94,
      95,     0,     0,     0,    78,    79,    80,     0,    73,     0,
       0,    40,    61,    63,    60,    62,    41,    52,    42,    55,
      54,    53,    24,    67,    65,    46,    64,    66,    47,    56,
      57,    59,    58,    39,    48,    50,    51,    49,    44,    45,
      68,    70,    72,    69,    71,   135,     0,   138,   137,   136,
       0,   128,     0,     0,     0,   144,   145,    30,    32,     0,
       0,    36,     0,     0,     0,   125,   126,     0,   121,     0,
     122,   123,     0,     0,     0,     0,   129,   130,     0,     0,
       0,   149,   150,   143,   142,   141,     0,     0,     0,   127,
     124,    40,   131,   148,   147,   146,   155,     0,     0,   156,
     157,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,     9,    28,   138,    40,    58,   117,    11,
     205,    85,    86,    87,    46,   213,   196,    12,   219,   208,
      74,   113,   140,    47,    48,    15,    16,    17,   141,   114,
      19,    81,    82,   142,   143,    51,   144
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
     -71,    54,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     256,   131,    38,    -9,    50,   -71,   -71,   -71,    77,   -71,
       5,   -71,   114,   101,   220,   101,   307,   -71,   -71,   132,
     109,   139,   146,   193,    41,   -71,   -71,   -71,   272,   194,
     327,    38,   202,   156,   218,    11,    66,   244,   247,   221,
     226,   251,    38,   193,    86,   274,   -71,   -71,    38,   205,
     262,   271,   285,   339,    92,    91,   279,   282,   179,   -71,
     -71,   -71,   -71,   -71,   288,   -71,   -71,   -71,    41,   243,
     140,   294,   -71,   293,   300,   306,   323,   330,   341,   175,
      38,   316,   356,    41,   316,   356,   -71,   354,   316,    41,
     356,   -71,   -71,    29,   356,   -71,   356,   -71,   -71,   -71,
     316,    80,   188,   355,   357,   360,   361,    38,    53,   -71,
      38,   327,   -71,   327,   -71,   -71,   -71,   -71,   132,   132,
     316,   132,   132,   132,   132,   -71,   353,   343,   256,   352,
     358,   359,    30,     5,   -71,   -71,   367,   368,   364,   -71,
     -71,   -71,   122,   344,   363,    38,   -71,    38,   -71,   -71,
     -71,    38,   -71,    38,   -71,   -71,   365,    28,   -71,   -71,
      38,   -71,   -71,   370,    38,    38,   -71,   -71,    38,   -71,
     -71,    34,    38,   362,   -71,   -71,   -71,   286,    38,   193,
     328,   210,    53,   -71,   -71,    38,   -71,    38,   166,   -71,
     -71,    38,    38,    38,    53,   375,   -71,    38,   -71,    38,
      53,   -71,    38,   -71,    38,    53,   -71,   -71,   237,   -71,
      38,    53,   -71,   -71,    38,   -71,    74,   -71,   -71,   -71,
      -2,   -71,   371,   372,   373,     5,   -71,   -71,   -71,   216,
     216,   -71,   101,   101,   243,   -71,   -71,   343,   -71,   243,
     -71,   -71,   327,   316,    29,    55,   -71,   -71,   376,   377,
     381,     5,   -71,   -71,   -71,   -71,    38,   366,   388,   -71,
     -71,   210,   -71,   -71,   -71,   -71,   327,    41,    41,    38,
     -71,   -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,   -71,   -71,     4,   -12,   206,   -19,   195,
     263,   252,   241,   253,    -4,   -27,   374,     3,   378,   379,
     -71,    15,     8,   380,   -25,   382,   383,   -71,    14,   212,
     -71,   -13,   -51,   265,    17,   -70,    22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -157
static const yytype_int16 yytable[] =
{
      29,    63,    69,    42,     3,    10,     4,    59,    30,    14,
      64,    88,    54,     4,    23,    18,    13,   257,    20,    33,
     100,    90,   101,    21,    34,    68,    39,   135,    56,    91,
      94,    98,    71,    27,   103,     3,     3,    78,     4,    27,
     111,    38,   160,    27,   230,  -156,   121,   123,   169,   231,
     120,   242,    94,   130,     2,    79,   103,   112,    27,    80,
       3,     3,     4,     4,   154,    97,   136,    31,     5,     6,
       7,    27,   155,   157,   272,   161,   163,   102,   123,   167,
       3,   170,     4,   184,   185,   175,     3,   178,   255,   115,
     116,    27,     3,   256,    32,   139,    27,    27,    38,   174,
     129,   128,   155,    97,   161,    94,   130,     3,   103,   191,
     197,   202,   203,   209,   214,   220,    23,    35,    36,    27,
       3,    37,     4,    75,   195,   201,    38,   207,   212,   218,
     224,   239,    56,    96,    97,    35,    36,    27,     3,    37,
      25,    26,    23,   123,    38,   123,     3,    34,     4,   123,
     233,   123,   139,    76,   137,   123,   234,   232,   123,   235,
      77,    27,   103,   123,   236,    95,   123,    96,    97,    91,
     130,    27,   267,   268,   246,    25,    54,   251,    97,    94,
     130,     3,    37,   103,    27,    94,   130,    38,   133,   103,
     123,    94,   130,   247,     3,   103,     4,    94,   130,   187,
     103,     4,    94,   130,    89,    24,   103,    27,    94,   130,
      27,    92,   103,    93,    92,    27,   122,    43,    52,   252,
      55,    60,     3,    37,    65,    27,   280,   281,    41,    99,
      53,   269,   108,   271,   233,    41,   270,   109,   259,    34,
     234,   232,    27,   235,   260,   258,   254,   261,   236,   118,
     218,    23,   262,   104,   276,   105,   106,   279,   107,   123,
      41,    80,     3,   259,     4,    34,    22,   123,   110,   260,
     258,    95,   261,   124,    45,    83,    84,   262,    61,    37,
     100,    67,   125,    25,   152,    44,   156,   158,   131,   162,
     164,   132,    66,   168,   104,   171,   126,   134,   173,   176,
     244,   179,   146,   245,    80,   182,   186,   188,   145,   147,
      35,    36,    27,     3,    37,   148,   181,   119,    57,    35,
      36,    27,     3,   192,   198,   168,   204,   210,   215,   221,
      35,    36,    27,   188,    41,    41,   149,    41,    41,    41,
      41,   153,   249,   150,   159,   250,    80,   165,   106,     3,
     127,     4,   172,   240,   151,   101,   177,   166,   180,    35,
      36,    27,     3,    37,   189,   -20,   -21,   225,   190,   227,
      83,    37,    84,   183,   107,   228,   229,   277,   241,   243,
     194,   200,    97,   206,   253,   217,   223,   237,   263,   264,
     265,   193,   199,   273,   274,   211,   216,   222,   275,   278,
     238,   248,   226,    70,    49,    50,    62,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   171,     0,   266,   266,     0,
       0,     0,   188,     0,     0,     0,     0,     0,   182,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,   172
};

static const yytype_int16 yycheck[] =
{
      12,    26,    29,    22,     6,     1,     8,    26,    17,     1,
      29,    38,    24,     8,    10,     1,     1,    19,     1,    14,
       9,    40,    11,     1,    20,    29,    22,    78,    25,    41,
      42,    43,    29,     5,    46,     6,     6,    33,     8,     5,
      52,    12,    93,     5,    14,    17,    58,    59,    99,    19,
      54,    17,    64,    65,     0,    14,    68,    53,     5,    18,
       6,     6,     8,     8,    89,    12,    79,    17,    14,    15,
      16,     5,    91,    92,    19,    94,    95,    11,    90,    98,
       6,   100,     8,     3,     4,   104,     6,   106,    14,     3,
       4,     5,     6,    19,    17,    80,     5,     5,    12,   103,
       9,     9,   121,    12,   123,   117,   118,     6,   120,   128,
     129,   130,   131,   132,   133,   134,   112,     3,     4,     5,
       6,     7,     8,    14,   128,   129,    12,   131,   132,   133,
     134,     9,   129,    11,    12,     3,     4,     5,     6,     7,
       9,    10,   138,   155,    12,   157,     6,   143,     8,   161,
     142,   163,   137,    14,    14,   167,   142,   142,   170,   142,
      14,     5,   174,   175,   142,     9,   178,    11,    12,   181,
     182,     5,   242,   243,   187,     9,   188,   190,    12,   191,
     192,     6,     7,   195,     5,   197,   198,    12,     9,   201,
     202,   203,   204,   189,     6,   207,     8,   209,   210,    11,
     212,     8,   214,   215,    10,    10,   218,     5,   220,   221,
       5,     9,   224,    11,     9,     5,    11,    22,    23,     9,
      25,    26,     6,     7,    29,     5,   277,   278,    22,    11,
      10,   244,    11,   252,   226,    29,   249,    11,   230,   235,
     226,   226,     5,   226,   230,   230,     9,   230,   226,    54,
     254,   247,   230,     9,   266,    11,     9,   276,    11,   271,
      54,    18,     6,   255,     8,   261,    10,   279,    17,   255,
     255,     9,   255,    11,    22,     3,     4,   255,    26,     7,
       9,    29,    11,     9,    89,    22,    91,    92,     9,    94,
      95,     9,    29,    98,     9,   100,    11,     9,   103,   104,
      14,   106,     9,    17,    18,   110,   111,   112,    14,     9,
       3,     4,     5,     6,     7,     9,   110,    54,    11,     3,
       4,     5,     6,   128,   129,   130,   131,   132,   133,   134,
       3,     4,     5,   138,   128,   129,    13,   131,   132,   133,
     134,    89,    14,    13,    92,    17,    18,    95,     9,     6,
      11,     8,   100,     9,    13,    11,   104,     3,   106,     3,
       4,     5,     6,     7,     9,     5,     5,    14,    11,    17,
       3,     7,     4,   110,    11,    17,    17,    11,    13,    17,
     128,   129,    12,   131,     9,   133,   134,   146,    17,    17,
      17,   128,   129,    17,    17,   132,   133,   134,    17,    11,
     147,   189,   137,    29,    22,    22,    26,    29,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,    -1,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,   240
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     6,     8,    14,    15,    16,    27,    28,
      30,    34,    42,    46,    47,    50,    51,    52,    53,    55,
      59,    61,    10,    30,    34,     9,    10,     5,    29,    31,
      17,    17,    17,    14,    30,     3,     4,     7,    12,    30,
      31,    32,    33,    34,    35,    36,    39,    48,    49,    50,
      51,    60,    34,    10,    31,    34,    42,    11,    32,    33,
      34,    36,    48,    49,    33,    34,    35,    36,    39,    40,
      41,    42,    43,    44,    45,    14,    14,    14,    30,    14,
      18,    56,    57,     3,     4,    36,    37,    38,    40,    10,
      33,    31,     9,    11,    31,     9,    11,    12,    31,    11,
       9,    11,    11,    31,     9,    11,     9,    11,    11,    11,
      17,    31,    30,    46,    54,     3,     4,    33,    34,    35,
      39,    31,    11,    31,    11,    11,    11,    11,     9,     9,
      31,     9,     9,     9,     9,    57,    56,    14,    30,    46,
      47,    53,    58,    59,    61,    14,     9,     9,     9,    13,
      13,    13,    34,    36,    49,    33,    34,    33,    34,    36,
      57,    33,    34,    33,    34,    36,     3,    33,    34,    57,
      33,    34,    36,    34,    39,    33,    34,    36,    33,    34,
      36,    32,    34,    35,     3,     4,    34,    11,    34,     9,
      11,    33,    34,    35,    36,    39,    41,    33,    34,    35,
      36,    39,    33,    33,    34,    35,    36,    39,    44,    33,
      34,    35,    39,    40,    33,    34,    35,    36,    39,    43,
      33,    34,    35,    36,    39,    14,    58,    17,    17,    17,
      14,    19,    46,    47,    53,    59,    61,    37,    38,     9,
       9,    13,    17,    17,    14,    17,    56,    30,    54,    14,
      17,    56,     9,     9,     9,    14,    19,    19,    46,    47,
      53,    59,    61,    17,    17,    17,    34,    60,    60,    56,
      56,    33,    19,    17,    17,    17,    31,    11,    11,    33,
      57,    57
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
#line 96 "syntax_analyzer.y"
    {printf("Valid declaration\n");;}
    break;

  case 6:
#line 97 "syntax_analyzer.y"
    {printf("Valid assignment\n");;}
    break;

  case 7:
#line 98 "syntax_analyzer.y"
    {printf("Valid function call\n");;}
    break;

  case 8:
#line 99 "syntax_analyzer.y"
    {printf("Valid function declaration\n");;}
    break;

  case 9:
#line 100 "syntax_analyzer.y"
    {printf("Valid if/while statement\n");;}
    break;

  case 10:
#line 101 "syntax_analyzer.y"
    {printf("Valid for statement\n");;}
    break;

  case 11:
#line 102 "syntax_analyzer.y"
    { print_report();;}
    break;

  case 12:
#line 103 "syntax_analyzer.y"
    {inc_words++;;}
    break;

  case 13:
#line 106 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 14:
#line 109 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 15:
#line 114 "syntax_analyzer.y"
    {
        // regarding the type of variables.
        if(!strcmp((yyvsp[(1) - (1)].sval), "int") ) (yyval.ival) = 1;   
        if(!strcmp((yyvsp[(1) - (1)].sval), "float") || !strcmp((yyvsp[(1) - (1)].sval), "double")) (yyval.ival) = 13;
        if(!strcmp((yyvsp[(1) - (1)].sval), "const") || !strcmp((yyvsp[(1) - (1)].sval), "long")) (yyval.ival) = 2; // these regard the keyword the is before the type and they are assigned a different value
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

  case 16:
#line 137 "syntax_analyzer.y"
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

  case 17:
#line 162 "syntax_analyzer.y"
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

  case 18:
#line 182 "syntax_analyzer.y"
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

  case 19:
#line 204 "syntax_analyzer.y"
    { 
        switch((yyvsp[(1) - (2)].ival)) {
            case 2: (yyval.dval) = -(yyvsp[(2) - (2)].dval); break;
            //case 19: $$ = $2; break;
        }
    ;}
    break;

  case 20:
#line 214 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 21:
#line 215 "syntax_analyzer.y"
    { (yyval.dval) = atof(yytext); cor_words++;;}
    break;

  case 22:
#line 216 "syntax_analyzer.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval);;}
    break;

  case 23:
#line 221 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 24:
#line 226 "syntax_analyzer.y"
    {;}
    break;

  case 25:
#line 227 "syntax_analyzer.y"
    {;}
    break;

  case 26:
#line 228 "syntax_analyzer.y"
    {;}
    break;

  case 27:
#line 229 "syntax_analyzer.y"
    {;}
    break;

  case 28:
#line 234 "syntax_analyzer.y"
    { (yyval.sval) = strdup(yytext); cor_words++;;}
    break;

  case 30:
#line 240 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 32:
#line 244 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 33:
#line 249 "syntax_analyzer.y"
    { (yyval.ival) = 1; val_com=0; ;}
    break;

  case 34:
#line 250 "syntax_analyzer.y"
    { (yyval.ival) = 13; val_com=0;;}
    break;

  case 35:
#line 251 "syntax_analyzer.y"
    { (yyval.ival) = 2; val_com=0;;}
    break;

  case 36:
#line 252 "syntax_analyzer.y"
    { (yyval.ival) = 3; val_com=0;;}
    break;

  case 37:
#line 253 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 1) yyerror("Invalid arr"); (yyval.ival) = 4; val_com=0;;}
    break;

  case 39:
#line 259 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 41:
#line 263 "syntax_analyzer.y"
    {val_com++;;}
    break;

  case 43:
#line 267 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 45:
#line 271 "syntax_analyzer.y"
    {val_arr_com++;;}
    break;

  case 47:
#line 275 "syntax_analyzer.y"
    {var_com++;;}
    break;

  case 48:
#line 284 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 49:
#line 285 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 50:
#line 286 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 51:
#line 287 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 52:
#line 289 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 53:
#line 290 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 54:
#line 291 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 55:
#line 292 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 56:
#line 294 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 57:
#line 295 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 58:
#line 296 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 59:
#line 297 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 60:
#line 299 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 61:
#line 300 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 62:
#line 301 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 63:
#line 302 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 64:
#line 304 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 65:
#line 305 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 66:
#line 306 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 67:
#line 307 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 68:
#line 309 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 69:
#line 310 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 70:
#line 311 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 71:
#line 312 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 72:
#line 313 "syntax_analyzer.y"
    {val_ass_com++;;}
    break;

  case 73:
#line 320 "syntax_analyzer.y"
    {if((yyvsp[(1) - (2)].ival) != 1 && (yyvsp[(1) - (2)].ival) != 13) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 74:
#line 324 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 75:
#line 325 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 76:
#line 326 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 77:
#line 332 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (3)].ival) != 2 || (yyvsp[(2) - (3)].ival) != 1 && (yyvsp[(2) - (3)].ival) != 13) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 78:
#line 333 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 && (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type1"); cor_expr++;;}
    break;

  case 79:
#line 334 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 80:
#line 335 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (5)].ival) != 2 || (yyvsp[(2) - (5)].ival) != 1 && (yyvsp[(2) - (5)].ival) != 13 || (yyvsp[(4) - (5)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 81:
#line 338 "syntax_analyzer.y"
    {
        if((yyvsp[(1) - (4)].ival) != (yyvsp[(4) - (4)].ival))//same type of array and variable
            yyerror("Invalid declaration type");  
        else if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 82:
#line 345 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 1 && (yyvsp[(1) - (4)].ival) != 13 || (yyvsp[(3) - (4)].ival) != 12) yyerror("Invalid declaration type"); cor_expr++;;}
    break;

  case 83:
#line 351 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 84:
#line 352 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || val_arr_com)            yyerror("Invalid assignment"); var_com = 0; val_arr_com = 0; cor_expr++;;}
    break;

  case 85:
#line 353 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 86:
#line 354 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 87:
#line 355 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;;}
    break;

  case 88:
#line 356 "syntax_analyzer.y"
    {if((yyvsp[(2) - (3)].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); var_com = 0; val_ass_com = 0; cor_expr++;;}
    break;

  case 104:
#line 393 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 3 && (yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 105:
#line 394 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4) yyerror("Invalid function call");;}
    break;

  case 106:
#line 395 "syntax_analyzer.y"
    { if ((yyvsp[(1) - (4)].ival) != 4 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 107:
#line 402 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 5 && (yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 108:
#line 407 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 4) yyerror("Invalid function call");;}
    break;

  case 109:
#line 408 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6 && (yyvsp[(3) - (4)].ival) == 5) yyerror("Invalid function call");;}
    break;

  case 110:
#line 409 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (4)].ival) != 6) yyerror("Invalid function call");;}
    break;

  case 111:
#line 414 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 112:
#line 415 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 113:
#line 416 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 114:
#line 420 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 115:
#line 421 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 116:
#line 422 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 117:
#line 423 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 118:
#line 424 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 119:
#line 425 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 122:
#line 441 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 123:
#line 442 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 124:
#line 443 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (7)].sval); cor_expr++;;}
    break;

  case 125:
#line 446 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 126:
#line 447 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (6)].ival) != 7 || (yyvsp[(4) - (6)].ival) != 12) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (6)].sval); cor_expr++;;}
    break;

  case 127:
#line 448 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (7)].ival) != 7 || (yyvsp[(4) - (7)].ival) != 12) yyerror("Invalid function definition"); func_arg = (yyvsp[(2) - (7)].sval); cor_expr++;;}
    break;

  case 133:
#line 462 "syntax_analyzer.y"
    {printf("1C");;}
    break;

  case 134:
#line 463 "syntax_analyzer.y"
    {printf("2C");;}
    break;

  case 135:
#line 464 "syntax_analyzer.y"
    {printf("3C");;}
    break;

  case 139:
#line 472 "syntax_analyzer.y"
    {printf("111111");;}
    break;

  case 140:
#line 473 "syntax_analyzer.y"
    {printf("222222");;}
    break;

  case 144:
#line 478 "syntax_analyzer.y"
    {printf("33333");;}
    break;

  case 145:
#line 479 "syntax_analyzer.y"
    {printf("44444");;}
    break;

  case 149:
#line 484 "syntax_analyzer.y"
    {printf("55555");;}
    break;

  case 150:
#line 485 "syntax_analyzer.y"
    {printf("66666");;}
    break;

  case 151:
#line 492 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); (yyval.ival) = (yyvsp[(1) - (5)].ival); cor_expr++;;}
    break;

  case 152:
#line 494 "syntax_analyzer.y"
    {if ((yyvsp[(1) - (5)].ival) != 8 && (yyvsp[(1) - (5)].ival) != 10) yyerror("Invalid if/while statement"); (yyval.ival) = (yyvsp[(1) - (5)].ival); cor_expr++;;}
    break;

  case 153:
#line 495 "syntax_analyzer.y"
    {if ((yyvsp[(2) - (3)].ival) != 9 || (yyvsp[(1) - (3)].ival) != 8) yyerror("Invalid if/while statement"); cor_expr++;;}
    break;

  case 154:
#line 496 "syntax_analyzer.y"
    {if ((yyvsp[(3) - (4)].ival) != 9 || (yyvsp[(1) - (4)].ival) != 8) yyerror("Invalid if/while statement"); cor_expr++;;}
    break;

  case 155:
#line 502 "syntax_analyzer.y"
    {if((yyvsp[(2) - (2)].ival) != 17 && (yyvsp[(2) - (2)].ival) != 18) yyerror("Invalid --/++ operator"); cor_expr++;;}
    break;

  case 156:
#line 503 "syntax_analyzer.y"
    {cor_expr++;;}
    break;

  case 157:
#line 508 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); cor_expr++;;}
    break;

  case 158:
#line 509 "syntax_analyzer.y"
    {if((yyvsp[(1) - (9)].ival) != 11) yyerror("Invalid for statement"); cor_expr++;;}
    break;


/* Line 1267 of yacc.c.  */
#line 2344 "syntax_analyzer.tab.c"
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


#line 512 "syntax_analyzer.y"


/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
}

// Function that prints a report containing several details about the result of the syntax analyzer
// and what it identified.
void print_report() {
    printf("-------Report:-------\n");
    printf("Correct Words: %d\n", cor_words);
    printf("Correct Expressions: %d\n", cor_expr);
    printf("Incorrect Words: %d\n", inc_words);
    printf("Incorrect Expressions: %d\n", inc_expr);
}

// The main function checks if the arguments given are correct.
// If the number of arguments given is 2 then the program received the input from a txt file.
// If not, then it just takes the input from the user through the terminal.
// Then the function calls the yyparse() method, that basically connects the syntax analyzer
// and the lexer. It breaks the input into tokens that we have defined on the lexical analyzer.
int main(int argc,char **argv) {

    if(argc == 2)
	    yyin = fopen(argv[1], "r"); // open the text file given as input
	else
		yyin = stdin; // get input from the user's terminal

	int parse = yyparse();
    if (parse == 0)
        fprintf(stderr, "Successful parsing.\n");  
    else
        fprintf(stderr, "Error found.\n");
    return 0;
}
