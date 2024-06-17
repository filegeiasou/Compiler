/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 43 "syntax_analyzer.y"


        // Including all the necessary C libraries
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>
        #include <string.h>
        
        // Definition of function and variables required for the program.
        extern char *yytext;
        extern void yyerror(char *);
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

#line 97 "syntax_analyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax_analyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_OPERATORS = 5,                  /* OPERATORS  */
  YYSYMBOL_IDENTIFIERS = 6,                /* IDENTIFIERS  */
  YYSYMBOL_STRINGS = 7,                    /* STRINGS  */
  YYSYMBOL_KEYWORD = 8,                    /* KEYWORD  */
  YYSYMBOL_SYMBOL = 9,                     /* SYMBOL  */
  YYSYMBOL_OPEN_PARENTHESIS = 10,          /* OPEN_PARENTHESIS  */
  YYSYMBOL_CLOSE_PARENTHESIS = 11,         /* CLOSE_PARENTHESIS  */
  YYSYMBOL_OPEN_BRACE = 12,                /* OPEN_BRACE  */
  YYSYMBOL_CLOSE_BRACE = 13,               /* CLOSE_BRACE  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_EOP = 15,                       /* EOP  */
  YYSYMBOL_UNKNOWN_TOKEN = 16,             /* UNKNOWN_TOKEN  */
  YYSYMBOL_DELIMITER = 17,                 /* DELIMITER  */
  YYSYMBOL_OPEN_BRACKET = 18,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 19,             /* CLOSE_BRACKET  */
  YYSYMBOL_20_ = 20,                       /* '+'  */
  YYSYMBOL_21_ = 21,                       /* '-'  */
  YYSYMBOL_22_ = 22,                       /* '*'  */
  YYSYMBOL_23_ = 23,                       /* '/'  */
  YYSYMBOL_24_ = 24,                       /* '='  */
  YYSYMBOL_YYACCEPT = 25,                  /* $accept  */
  YYSYMBOL_program = 26,                   /* program  */
  YYSYMBOL_valid = 27,                     /* valid  */
  YYSYMBOL_keyword = 28,                   /* keyword  */
  YYSYMBOL_operator = 29,                  /* operator  */
  YYSYMBOL_keyword_val = 30,               /* keyword_val  */
  YYSYMBOL_oper_val = 31,                  /* oper_val  */
  YYSYMBOL_expr = 32,                      /* expr  */
  YYSYMBOL_num = 33,                       /* num  */
  YYSYMBOL_var = 34,                       /* var  */
  YYSYMBOL_var_oper = 35,                  /* var_oper  */
  YYSYMBOL_str = 36,                       /* str  */
  YYSYMBOL_help_int = 37,                  /* help_int  */
  YYSYMBOL_help_float = 38,                /* help_float  */
  YYSYMBOL_arr = 39,                       /* arr  */
  YYSYMBOL_help_str = 40,                  /* help_str  */
  YYSYMBOL_help_num = 41,                  /* help_num  */
  YYSYMBOL_help_var = 42,                  /* help_var  */
  YYSYMBOL_help_arr = 43,                  /* help_arr  */
  YYSYMBOL_help_var_oper = 44,             /* help_var_oper  */
  YYSYMBOL_help_assign = 45,               /* help_assign  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_assignment = 47,                /* assignment  */
  YYSYMBOL_help_3args = 48,                /* help_3args  */
  YYSYMBOL_help_2args = 49,                /* help_2args  */
  YYSYMBOL_scan_len_print = 50,            /* scan_len_print  */
  YYSYMBOL_cmp_print = 51,                 /* cmp_print  */
  YYSYMBOL_print = 52,                     /* print  */
  YYSYMBOL_func_call = 53,                 /* func_call  */
  YYSYMBOL_arguments = 54,                 /* arguments  */
  YYSYMBOL_func_decl = 55,                 /* func_decl  */
  YYSYMBOL_body = 56,                      /* body  */
  YYSYMBOL_cond_body = 57,                 /* cond_body  */
  YYSYMBOL_all = 58,                       /* all  */
  YYSYMBOL_if_while_grammar = 59,          /* if_while_grammar  */
  YYSYMBOL_help_for = 60,                  /* help_for  */
  YYSYMBOL_for_grammar = 61,               /* for_grammar  */
  YYSYMBOL_62_1 = 62                       /* $@1  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   630

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   114,   118,   123,   148,
     173,   193,   215,   225,   226,   227,   232,   237,   238,   239,
     240,   245,   251,   252,   255,   256,   261,   262,   263,   264,
     265,   278,   279,   282,   283,   286,   287,   290,   291,   294,
     295,   304,   305,   306,   307,   309,   310,   311,   312,   314,
     315,   316,   317,   319,   320,   321,   322,   324,   325,   326,
     327,   329,   330,   331,   332,   333,   340,   344,   345,   346,
     347,   354,   355,   356,   357,   363,   370,   376,   377,   391,
     392,   393,   394,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   416,   417,   418,   419,   430,   431,
     437,   443,   448,   449,   450,   451,   467,   468,   469,   473,
     474,   475,   476,   477,   478,   484,   485,   494,   495,   496,
     497,   500,   501,   502,   507,   508,   509,   510,   515,   516,
     517,   518,   523,   524,   525,   526,   527,   529,   530,   531,
     532,   533,   535,   536,   537,   538,   539,   548,   553,   558,
     559,   565,   566,   570,   571,   571
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "FLOAT",
  "OPERATORS", "IDENTIFIERS", "STRINGS", "KEYWORD", "SYMBOL",
  "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", "OPEN_BRACE", "CLOSE_BRACE",
  "END", "EOP", "UNKNOWN_TOKEN", "DELIMITER", "OPEN_BRACKET",
  "CLOSE_BRACKET", "'+'", "'-'", "'*'", "'/'", "'='", "$accept", "program",
  "valid", "keyword", "operator", "keyword_val", "oper_val", "expr", "num",
  "var", "var_oper", "str", "help_int", "help_float", "arr", "help_str",
  "help_num", "help_var", "help_arr", "help_var_oper", "help_assign",
  "declaration", "assignment", "help_3args", "help_2args",
  "scan_len_print", "cmp_print", "print", "func_call", "arguments",
  "func_decl", "body", "cond_body", "all", "if_while_grammar", "help_for",
  "for_grammar", "$@1", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-163)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -244,    48,  -244,    39,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,   224,    78,    66,    62,    83,  -244,  -244,  -244,    91,
    -244,     5,  -244,  -244,  -244,  -244,  -244,    69,  -244,   113,
     309,    66,   219,    94,   113,   215,    79,   112,   117,   126,
     135,   154,  -244,   232,   188,    66,   258,   164,   140,   222,
     111,   328,   345,   151,   167,   142,    66,    66,   309,   309,
     183,   135,   152,   201,  -244,  -244,   273,   367,   381,   382,
     389,   198,    84,   206,   231,   251,  -244,  -244,  -244,  -244,
    -244,   242,  -244,  -244,  -244,   154,   254,    37,   261,  -244,
     281,   284,   298,   308,   320,   323,   282,   331,   366,   322,
     154,   366,   322,  -244,   340,   366,   154,   322,  -244,  -244,
     148,   322,  -244,   322,  -244,  -244,  -244,   366,   314,    66,
      66,   135,   133,   339,   348,   346,   357,    66,    22,  -244,
      66,  -244,  -244,  -244,  -244,  -244,    79,    79,   366,    79,
      79,    79,    79,  -244,   352,    30,   177,   358,   360,   364,
      27,     5,  -244,  -244,   379,   383,   387,  -244,  -244,  -244,
     377,   390,   384,  -244,  -244,    66,  -244,  -244,  -244,  -244,
      66,  -244,  -244,   391,     1,  -244,  -244,    66,  -244,  -244,
     393,    66,    66,  -244,  -244,    66,  -244,  -244,    66,   385,
    -244,  -244,  -244,    30,   392,   278,    66,   135,   292,   106,
     268,    22,  -244,  -244,    66,  -244,    66,   190,  -244,  -244,
      66,    66,    66,    22,   397,  -244,    66,  -244,    66,    22,
    -244,    66,  -244,    66,    22,  -244,  -244,   276,  -244,    66,
      22,  -244,  -244,    66,  -244,    51,  -244,  -244,  -244,    36,
    -244,   394,   395,   398,     5,  -244,  -244,  -244,   325,   325,
    -244,   113,   399,   254,  -244,  -244,  -244,   254,  -244,  -244,
     309,   366,   148,    61,  -244,  -244,   400,   401,   402,     5,
    -244,  -244,  -244,  -244,    66,   396,  -244,  -244,  -244,   268,
    -244,  -244,  -244,  -244,   309,   154,    66,  -244,   135,   404,
     113,   405,   309,    12,    66,   113,   410,   154,  -244
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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
      91,    92,     6,     7,     8,     0,     0,   163,   138,   159,
      32,    34,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   161,     0,     0,   110,   109,
       0,     0,   114,     0,   111,   112,   113,     0,     0,    21,
      20,     0,     0,   125,     0,    77,    78,     0,    79,    86,
      85,   120,   119,   121,   123,   122,     0,     0,     0,     0,
       0,     0,     0,   160,   139,   163,     0,     0,     0,     0,
       0,   145,   146,   140,     0,     0,     0,    36,    37,    38,
       0,     0,     0,   115,    30,    97,    94,    96,   157,    28,
      93,   104,   107,     0,    27,    29,   158,    95,   106,   105,
       0,    40,   103,   101,   102,   100,    98,    99,     0,     0,
      82,    83,    84,     0,     0,     0,    76,     0,     0,    19,
      43,    64,    66,    63,    65,    44,    55,    45,    58,    57,
      56,    27,    70,    68,    49,    67,    69,    50,    59,    60,
      62,    61,    42,    51,    53,    54,    52,    47,    48,    71,
      73,    75,    72,    74,   141,     0,   144,   143,   142,   163,
     134,     0,     0,     0,   150,   151,    33,    35,     0,     0,
      39,     0,     0,     0,   131,   132,   126,     0,   127,   128,
       0,     0,     0,   163,   135,   136,     0,     0,     0,   155,
     156,   149,   148,   147,     0,     0,   130,   133,   129,    43,
     137,   154,   153,   152,   161,     0,   162,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,  -244,   296,    -1,   134,   -12,   338,    -4,
     243,    75,   255,   270,   161,    25,   374,   -25,   406,   408,
    -244,     3,     2,   403,   -30,   407,   414,  -244,    11,  -119,
    -244,   -49,   -84,   285,    13,  -243,    20,  -244
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     9,    10,    28,   146,    30,    31,   127,    12,
     214,    92,    93,    94,    50,   222,   205,    13,   228,   217,
      81,   123,   148,    51,    52,    16,    17,    18,   149,   124,
      20,    88,    89,   150,   151,    55,   152,   288
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   143,   194,    15,    14,    70,    26,    33,   275,    64,
      29,    78,    19,     5,    21,    45,   168,    26,  -162,    40,
      41,    22,   176,    47,    45,    56,    44,    26,    60,   295,
      63,    67,    72,     4,   104,     5,     4,   144,     5,    85,
      97,   239,     4,     4,     5,     5,   240,   291,     2,     3,
      45,   145,   296,    23,     4,   265,     5,     4,   128,     5,
     122,    76,     6,     7,     8,   263,   162,     4,    95,     5,
     264,    26,    24,    25,    26,     4,    42,     5,   256,    37,
     280,    43,    24,    25,    26,     4,    42,    34,    35,    26,
     147,    43,   160,   137,   164,   166,   104,   169,   171,    26,
      38,   175,    49,   178,    61,    45,   180,   183,    39,   186,
      68,    74,    64,   188,   192,   -80,    26,   -80,   196,     4,
     193,    29,   109,   -80,    45,    45,    82,    45,    45,    45,
      45,    83,   201,   207,   175,   213,   219,   224,   230,     4,
      84,     5,   196,     5,   195,    29,   255,    36,   147,   259,
      41,   106,   242,   241,     4,   125,   126,    26,     4,   117,
      43,   243,   115,   244,    43,    58,    59,    62,    86,    26,
     245,   161,    87,   102,   167,   103,   104,   172,   116,    98,
     101,   105,   179,     4,   110,     5,   184,    27,   187,   196,
     118,    59,    29,   121,     4,    26,   193,    75,    96,    34,
      59,   287,   104,    26,   277,   101,   138,   136,   278,   110,
      34,   203,   209,   298,   215,   139,   226,   232,    24,    25,
      26,     4,    42,   130,    26,     4,    65,    24,    25,    26,
       4,   107,     5,   108,    27,    90,    91,   242,   241,    42,
     140,   267,   266,    41,   171,   178,   243,   274,   244,    45,
     268,   142,   269,    59,    59,   245,    26,   188,   180,   270,
     141,   101,   138,    26,   110,   267,   266,    99,    41,   100,
      48,   181,    87,    26,   268,   153,   269,   260,    26,    73,
     293,    26,    99,   270,   131,   262,   274,   289,     4,    42,
     154,   274,   253,   155,    43,   254,    87,   204,   210,    59,
     216,   221,   227,   233,    59,   129,   257,   156,    59,   258,
      87,    59,    24,    25,    26,   110,    59,   190,   191,    59,
       4,   157,   138,   172,   179,    24,    25,    26,     4,    42,
      62,     4,    42,   158,   101,   138,   159,   111,   110,   112,
     101,   138,   163,   173,   110,    59,   101,   138,   197,    32,
     110,   -23,   101,   138,   113,   110,   114,   101,   138,   198,
     189,   110,   -24,   101,   138,    46,   234,   110,    57,    24,
      25,    26,     4,    66,    71,   236,   102,   237,   132,   202,
     208,   238,    90,   220,   225,   231,   248,    91,   103,   104,
     107,   111,   133,   134,    42,   114,   119,   120,   113,   249,
     135,   108,   251,   252,   250,   104,   261,   285,   284,   246,
      77,   271,   272,    59,   290,   273,   276,   281,   282,   283,
      59,   297,   292,   227,   199,   247,     0,    58,    59,     0,
     235,     0,     0,     0,    53,     0,   119,   165,    69,   120,
     170,    54,    79,   174,    80,   177,     0,     0,     0,   182,
       0,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,   206,   211,   212,   218,   223,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   286,     0,     0,     0,     0,     0,     0,     0,
     294
};

static const yytype_int16 yycheck[] =
{
       1,    85,   121,     1,     1,    35,     5,    11,   251,    34,
      11,    36,     1,     8,     1,    27,   100,     5,    17,    14,
      21,     1,   106,    27,    36,    29,    27,     5,    32,    17,
      34,    35,    36,     6,    12,     8,     6,    86,     8,    40,
      44,    14,     6,     6,     8,     8,    19,   290,     0,     1,
      62,    14,   295,    14,     6,    19,     8,     6,    62,     8,
      61,    36,    14,    15,    16,    14,    96,     6,    43,     8,
      19,     5,     3,     4,     5,     6,     7,     8,   197,    17,
      19,    12,     3,     4,     5,     6,     7,     9,    10,     5,
      87,    12,    96,     9,    98,    99,    12,   101,   102,     5,
      17,   105,    27,   107,    10,   117,   110,   111,    17,   113,
      35,    36,   137,   117,   118,     9,     5,    11,   122,     6,
     121,   122,    11,    17,   136,   137,    14,   139,   140,   141,
     142,    14,   136,   137,   138,   139,   140,   141,   142,     6,
      14,     8,   146,     8,    11,   146,   195,    13,   145,   198,
     151,    11,   150,   150,     6,     3,     4,     5,     6,    17,
      12,   150,    11,   150,    12,    31,    32,    33,    14,     5,
     150,    96,    18,     9,    99,    11,    12,   102,    11,    45,
      46,    47,   107,     6,    50,     8,   111,    10,   113,   193,
      56,    57,   193,    10,     6,     5,   197,    36,    10,     9,
      66,   285,    12,     5,   253,    71,    72,     9,   257,    75,
       9,   136,   137,   297,   139,     9,   141,   142,     3,     4,
       5,     6,     7,    62,     5,     6,    11,     3,     4,     5,
       6,     9,     8,    11,    10,     3,     4,   235,   235,     7,
       9,   239,   239,   244,   248,   249,   235,   251,   235,   261,
     239,     9,   239,   119,   120,   235,     5,   261,   262,   239,
       9,   127,   128,     5,   130,   263,   263,     9,   269,    11,
      27,   110,    18,     5,   263,    14,   263,     9,     5,    36,
     292,     5,     9,   263,    11,     9,   290,   288,     6,     7,
       9,   295,    14,     9,    12,    17,    18,   136,   137,   165,
     139,   140,   141,   142,   170,    62,    14,     9,   174,    17,
      18,   177,     3,     4,     5,   181,   182,     3,     4,   185,
       6,    13,   188,   248,   249,     3,     4,     5,     6,     7,
     196,     6,     7,    13,   200,   201,    13,     9,   204,    11,
     206,   207,    11,     3,   210,   211,   212,   213,     9,    11,
     216,     5,   218,   219,     9,   221,    11,   223,   224,    11,
     117,   227,     5,   229,   230,    27,    14,   233,    30,     3,
       4,     5,     6,    35,    36,    17,     9,    17,    11,   136,
     137,    17,     3,   140,   141,   142,     9,     4,    11,    12,
       9,     9,    11,    11,     7,    11,    58,    59,     9,     9,
      11,    11,    17,    11,    13,    12,     9,    11,   274,   154,
      36,    17,    17,   279,    10,    17,    17,    17,    17,    17,
     286,    11,    17,   262,   128,   155,    -1,   293,   294,    -1,
     145,    -1,    -1,    -1,    27,    -1,    98,    99,    35,   101,
     102,    27,    36,   105,    36,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     292
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      34,    39,    33,    34,    36,    33,    34,    36,    34,    35,
       3,     4,    34,    30,    54,    11,    34,     9,    11,    29,
      33,    34,    35,    36,    39,    41,    33,    34,    35,    36,
      39,    33,    33,    34,    35,    36,    39,    44,    33,    34,
      35,    39,    40,    33,    34,    35,    36,    39,    43,    33,
      34,    35,    36,    39,    14,    58,    17,    17,    17,    14,
      19,    46,    47,    53,    59,    61,    37,    38,     9,     9,
      13,    17,    11,    14,    17,    56,    54,    14,    17,    56,
       9,     9,     9,    14,    19,    19,    46,    47,    53,    59,
      61,    17,    17,    17,    34,    60,    17,    56,    56,    33,
      19,    17,    17,    17,    31,    11,    33,    57,    62,    30,
      10,    60,    17,    32,    33,    17,    60,    11,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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
      59,    60,    60,    61,    62,    61
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
       4,     2,     3,     0,     0,    19
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* program: program error END  */
#line 98 "syntax_analyzer.y"
                       {inc_expr++; errflag=1; yyerrok;}
#line 1411 "syntax_analyzer.tab.c"
    break;

  case 14: /* valid: EOP  */
#line 110 "syntax_analyzer.y"
                                { print_report();}
#line 1417 "syntax_analyzer.tab.c"
    break;

  case 16: /* keyword: KEYWORD  */
#line 114 "syntax_analyzer.y"
            { (yyval.sval) = strdup(yytext);}
#line 1423 "syntax_analyzer.tab.c"
    break;

  case 17: /* operator: OPERATORS  */
#line 118 "syntax_analyzer.y"
              { (yyval.sval) = strdup(yytext);}
#line 1429 "syntax_analyzer.tab.c"
    break;

  case 18: /* keyword_val: keyword  */
#line 123 "syntax_analyzer.y"
           {
        // regarding the type of variables.
        if(!strcmp((yyvsp[0].sval), "int") )  (yyval.ival) = 1;   
        if(!strcmp((yyvsp[0].sval), "float")  || !strcmp((yyvsp[0].sval), "double")) (yyval.ival) = 13;
        if(!strcmp((yyvsp[0].sval), "const")  || !strcmp((yyvsp[0].sval), "long"))   (yyval.ival) = 2; // these regard the keyword the is before the type and they are assigned a different value
        
        // for functions
        if(!strcmp((yyvsp[0].sval), "scan"))  (yyval.ival) = 3;
        if(!strcmp((yyvsp[0].sval), "len"))   (yyval.ival) = 4;
        if(!strcmp((yyvsp[0].sval), "cmp"))   (yyval.ival) = 5;
        if(!strcmp((yyvsp[0].sval), "print")) (yyval.ival) = 6;
        if(!strcmp((yyvsp[0].sval), "func"))  (yyval.ival) = 7;
        
        // for conditionals
        if(!strcmp((yyvsp[0].sval), "if"))    (yyval.ival) = 8;
        if(!strcmp((yyvsp[0].sval), "else"))  (yyval.ival) = 9;
        if(!strcmp((yyvsp[0].sval), "while")) (yyval.ival) = 10;
        if(!strcmp((yyvsp[0].sval), "for"))   (yyval.ival) = 11;
        if(!strcmp((yyvsp[0].sval), "void"))  (yyval.ival) = 12;
    }
#line 1454 "syntax_analyzer.tab.c"
    break;

  case 19: /* oper_val: operator  */
#line 148 "syntax_analyzer.y"
             { 
        if (!strcmp((yyvsp[0].sval), "+"))  (yyval.ival) = 1;
        if (!strcmp((yyvsp[0].sval), "-"))  (yyval.ival) = 2;
        if (!strcmp((yyvsp[0].sval), "*"))  (yyval.ival) = 3;
        if (!strcmp((yyvsp[0].sval), "/"))  (yyval.ival) = 4;
        if (!strcmp((yyvsp[0].sval), "==")) (yyval.ival) = 5;
        if (!strcmp((yyvsp[0].sval), "!=")) (yyval.ival) = 6;
        if (!strcmp((yyvsp[0].sval), ">"))  (yyval.ival) = 7;
        if (!strcmp((yyvsp[0].sval), "<"))  (yyval.ival) = 8;
        if (!strcmp((yyvsp[0].sval), ">=")) (yyval.ival) = 9;
        if (!strcmp((yyvsp[0].sval), "<=")) (yyval.ival) = 10;  
        if (!strcmp((yyvsp[0].sval), "%"))  (yyval.ival) = 11;
        if (!strcmp((yyvsp[0].sval), "="))  (yyval.ival) = 12;
        if (!strcmp((yyvsp[0].sval), "+=")) (yyval.ival) = 13;
        if (!strcmp((yyvsp[0].sval), "-=")) (yyval.ival) = 14;
        if (!strcmp((yyvsp[0].sval), "*=")) (yyval.ival) = 15;
        if (!strcmp((yyvsp[0].sval), "/=")) (yyval.ival) = 16;
        if (!strcmp((yyvsp[0].sval), "++")) (yyval.ival) = 17;
        if (!strcmp((yyvsp[0].sval), "--")) (yyval.ival) = 18;
        if (!strcmp((yyvsp[0].sval), "&"))  (yyval.ival) = 19;
    }
#line 1480 "syntax_analyzer.tab.c"
    break;

  case 20: /* expr: num oper_val num  */
#line 173 "syntax_analyzer.y"
                     {
        switch((yyvsp[-1].ival)) {
            case 1:  (yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval); break;
            case 2:  (yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval); break;
            case 3:  (yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval); break;
            case 4:  (yyval.dval) = (yyvsp[-2].dval) / (yyvsp[0].dval); break;
            case 5:  (yyval.dval) = (yyvsp[-2].dval) == (yyvsp[0].dval); break;
            case 6:  (yyval.dval) = (yyvsp[-2].dval) != (yyvsp[0].dval); break;
            case 7:  (yyval.dval) = (yyvsp[-2].dval) > (yyvsp[0].dval); break;
            case 8:  (yyval.dval) = (yyvsp[-2].dval) < (yyvsp[0].dval); break;
            case 9:  (yyval.dval) = (yyvsp[-2].dval) >= (yyvsp[0].dval); break;
            case 10: (yyval.dval) = (yyvsp[-2].dval) <= (yyvsp[0].dval); break;
            case 11: (yyval.dval) = (int)(yyvsp[-2].dval) % (int)(yyvsp[0].dval); break;
            case 12: (yyval.dval) = (yyvsp[0].dval); break;
            case 13: (yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval); break;
            case 14: (yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval); break;
            case 15: (yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval); break;
            case 16: (yyval.dval) = (yyvsp[-2].dval) / (yyvsp[0].dval); break;
        }
    }
#line 1505 "syntax_analyzer.tab.c"
    break;

  case 21: /* expr: expr oper_val num  */
#line 193 "syntax_analyzer.y"
                        {
        switch((yyvsp[-1].ival)) {
            case 1:  (yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval); break;
            case 2:  (yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval); break;
            case 3:  (yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval); break;
            case 4:  (yyval.dval) = (yyvsp[-2].dval) / (yyvsp[0].dval); break;
            case 5:  (yyval.dval) = (yyvsp[-2].dval) == (yyvsp[0].dval); break;
            case 6:  (yyval.dval) = (yyvsp[-2].dval) != (yyvsp[0].dval); break;
            case 7:  (yyval.dval) = (yyvsp[-2].dval) > (yyvsp[0].dval); break;
            case 8:  (yyval.dval) = (yyvsp[-2].dval) < (yyvsp[0].dval); break;
            case 9:  (yyval.dval) = (yyvsp[-2].dval) >= (yyvsp[0].dval); break;
            case 10: (yyval.dval) = (yyvsp[-2].dval) <= (yyvsp[0].dval); break;
            case 11: (yyval.dval) = (int)(yyvsp[-2].dval) % (int)(yyvsp[0].dval); break;
            case 12: (yyval.dval) = (yyvsp[0].dval); break;
            case 13: (yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval); break;
            case 14: (yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval); break;
            case 15: (yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval); break;
            case 16: (yyval.dval) = (yyvsp[-2].dval) / (yyvsp[0].dval); break;
            case 17: (yyval.dval) = (yyvsp[-2].dval) + 1; break;
            case 18: (yyval.dval) = (yyvsp[-2].dval) - 1; break;
        }
    }
#line 1532 "syntax_analyzer.tab.c"
    break;

  case 22: /* expr: oper_val num  */
#line 215 "syntax_analyzer.y"
                   { 
        switch((yyvsp[-1].ival)) {
            case 2: (yyval.dval) = -(yyvsp[0].dval); break;
            //case 19: $$ = $2; break;
        }
    }
#line 1543 "syntax_analyzer.tab.c"
    break;

  case 23: /* num: INTEGER  */
#line 225 "syntax_analyzer.y"
            { (yyval.dval) = atof(yytext);}
#line 1549 "syntax_analyzer.tab.c"
    break;

  case 24: /* num: FLOAT  */
#line 226 "syntax_analyzer.y"
            { (yyval.dval) = atof(yytext);}
#line 1555 "syntax_analyzer.tab.c"
    break;

  case 25: /* num: expr  */
#line 227 "syntax_analyzer.y"
            { (yyval.dval) = (yyvsp[0].dval);}
#line 1561 "syntax_analyzer.tab.c"
    break;

  case 26: /* var: IDENTIFIERS  */
#line 232 "syntax_analyzer.y"
                { (yyval.sval) = strdup(yytext);}
#line 1567 "syntax_analyzer.tab.c"
    break;

  case 27: /* var_oper: var oper_val num  */
#line 237 "syntax_analyzer.y"
                        {}
#line 1573 "syntax_analyzer.tab.c"
    break;

  case 28: /* var_oper: num oper_val var  */
#line 238 "syntax_analyzer.y"
                        {}
#line 1579 "syntax_analyzer.tab.c"
    break;

  case 29: /* var_oper: var oper_val var  */
#line 239 "syntax_analyzer.y"
                        {}
#line 1585 "syntax_analyzer.tab.c"
    break;

  case 30: /* var_oper: expr oper_val var  */
#line 240 "syntax_analyzer.y"
                        {}
#line 1591 "syntax_analyzer.tab.c"
    break;

  case 31: /* str: STRINGS  */
#line 245 "syntax_analyzer.y"
            { (yyval.sval) = strdup(yytext);}
#line 1597 "syntax_analyzer.tab.c"
    break;

  case 33: /* help_int: INTEGER SYMBOL help_int  */
#line 252 "syntax_analyzer.y"
                              {val_com++;}
#line 1603 "syntax_analyzer.tab.c"
    break;

  case 35: /* help_float: FLOAT SYMBOL help_float  */
#line 256 "syntax_analyzer.y"
                              {val_com++;}
#line 1609 "syntax_analyzer.tab.c"
    break;

  case 36: /* arr: OPEN_BRACE help_int CLOSE_BRACE  */
#line 261 "syntax_analyzer.y"
                                     { (yyval.ival) = 1; val_com=0; }
#line 1615 "syntax_analyzer.tab.c"
    break;

  case 37: /* arr: OPEN_BRACE help_float CLOSE_BRACE  */
#line 262 "syntax_analyzer.y"
                                         { (yyval.ival) = 13; val_com=0;}
#line 1621 "syntax_analyzer.tab.c"
    break;

  case 38: /* arr: OPEN_BRACE help_str CLOSE_BRACE  */
#line 263 "syntax_analyzer.y"
                                        { (yyval.ival) = 2; val_com=0;}
#line 1627 "syntax_analyzer.tab.c"
    break;

  case 39: /* arr: var OPEN_BRACE INTEGER CLOSE_BRACE  */
#line 264 "syntax_analyzer.y"
                                         { (yyval.ival) = 3; val_com=0;}
#line 1633 "syntax_analyzer.tab.c"
    break;

  case 40: /* arr: arr oper_val arr  */
#line 265 "syntax_analyzer.y"
                       {
        if((yyvsp[-1].ival) == 2)
        {
            printf("Warning:Concat failed keeping first array\n");
            par_warn++; inc_expr++;
        }
        else if ((yyvsp[-1].ival) != 1) 
            yyerror("Invalid arr"); 
        (yyval.ival) = 4; val_com=0;}
#line 1647 "syntax_analyzer.tab.c"
    break;

  case 42: /* help_str: str SYMBOL help_str  */
#line 279 "syntax_analyzer.y"
                          {val_com++;}
#line 1653 "syntax_analyzer.tab.c"
    break;

  case 44: /* help_num: num SYMBOL help_num  */
#line 283 "syntax_analyzer.y"
                          {val_com++;}
#line 1659 "syntax_analyzer.tab.c"
    break;

  case 46: /* help_var: var SYMBOL help_var  */
#line 287 "syntax_analyzer.y"
                          {var_com++;}
#line 1665 "syntax_analyzer.tab.c"
    break;

  case 48: /* help_arr: arr SYMBOL help_arr  */
#line 291 "syntax_analyzer.y"
                          {val_arr_com++;}
#line 1671 "syntax_analyzer.tab.c"
    break;

  case 50: /* help_var_oper: var_oper SYMBOL help_var_oper  */
#line 295 "syntax_analyzer.y"
                                    {var_com++;}
#line 1677 "syntax_analyzer.tab.c"
    break;

  case 51: /* help_assign: arr SYMBOL num  */
#line 304 "syntax_analyzer.y"
                   {val_ass_com++;}
#line 1683 "syntax_analyzer.tab.c"
    break;

  case 52: /* help_assign: arr SYMBOL str  */
#line 305 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1689 "syntax_analyzer.tab.c"
    break;

  case 53: /* help_assign: arr SYMBOL var  */
#line 306 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1695 "syntax_analyzer.tab.c"
    break;

  case 54: /* help_assign: arr SYMBOL var_oper  */
#line 307 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1701 "syntax_analyzer.tab.c"
    break;

  case 55: /* help_assign: var SYMBOL num  */
#line 309 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1707 "syntax_analyzer.tab.c"
    break;

  case 56: /* help_assign: var SYMBOL arr  */
#line 310 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1713 "syntax_analyzer.tab.c"
    break;

  case 57: /* help_assign: var SYMBOL str  */
#line 311 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1719 "syntax_analyzer.tab.c"
    break;

  case 58: /* help_assign: var SYMBOL var_oper  */
#line 312 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1725 "syntax_analyzer.tab.c"
    break;

  case 59: /* help_assign: str SYMBOL num  */
#line 314 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1731 "syntax_analyzer.tab.c"
    break;

  case 60: /* help_assign: str SYMBOL var  */
#line 315 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1737 "syntax_analyzer.tab.c"
    break;

  case 61: /* help_assign: str SYMBOL arr  */
#line 316 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1743 "syntax_analyzer.tab.c"
    break;

  case 62: /* help_assign: str SYMBOL var_oper  */
#line 317 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1749 "syntax_analyzer.tab.c"
    break;

  case 63: /* help_assign: num SYMBOL str  */
#line 319 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1755 "syntax_analyzer.tab.c"
    break;

  case 64: /* help_assign: num SYMBOL var  */
#line 320 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1761 "syntax_analyzer.tab.c"
    break;

  case 65: /* help_assign: num SYMBOL arr  */
#line 321 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1767 "syntax_analyzer.tab.c"
    break;

  case 66: /* help_assign: num SYMBOL var_oper  */
#line 322 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1773 "syntax_analyzer.tab.c"
    break;

  case 67: /* help_assign: var_oper SYMBOL str  */
#line 324 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1779 "syntax_analyzer.tab.c"
    break;

  case 68: /* help_assign: var_oper SYMBOL var  */
#line 325 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1785 "syntax_analyzer.tab.c"
    break;

  case 69: /* help_assign: var_oper SYMBOL arr  */
#line 326 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1791 "syntax_analyzer.tab.c"
    break;

  case 70: /* help_assign: var_oper SYMBOL num  */
#line 327 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1797 "syntax_analyzer.tab.c"
    break;

  case 71: /* help_assign: help_assign SYMBOL num  */
#line 329 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1803 "syntax_analyzer.tab.c"
    break;

  case 72: /* help_assign: help_assign SYMBOL str  */
#line 330 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1809 "syntax_analyzer.tab.c"
    break;

  case 73: /* help_assign: help_assign SYMBOL var  */
#line 331 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1815 "syntax_analyzer.tab.c"
    break;

  case 74: /* help_assign: help_assign SYMBOL arr  */
#line 332 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1821 "syntax_analyzer.tab.c"
    break;

  case 75: /* help_assign: help_assign SYMBOL var_oper  */
#line 333 "syntax_analyzer.y"
                                  {val_ass_com++;}
#line 1827 "syntax_analyzer.tab.c"
    break;

  case 76: /* declaration: keyword_val var  */
#line 340 "syntax_analyzer.y"
                    {if((yyvsp[-1].ival) != 1 && (yyvsp[-1].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1833 "syntax_analyzer.tab.c"
    break;

  case 77: /* declaration: keyword_val var oper_val INTEGER  */
#line 344 "syntax_analyzer.y"
                                       { if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1839 "syntax_analyzer.tab.c"
    break;

  case 78: /* declaration: keyword_val var oper_val FLOAT  */
#line 345 "syntax_analyzer.y"
                                     { if ((yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1845 "syntax_analyzer.tab.c"
    break;

  case 79: /* declaration: keyword_val var oper_val var  */
#line 346 "syntax_analyzer.y"
                                   { if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1851 "syntax_analyzer.tab.c"
    break;

  case 80: /* declaration: keyword_val var oper_val var operator  */
#line 347 "syntax_analyzer.y"
                                            { if ((yyvsp[-4].ival) != 1 && (yyvsp[-4].ival) != 13 || (yyvsp[-2].ival) != 12 ) yyerror("Invalid declaration type"); else {par_warn++; inc_expr++; printf("Warning: Unknown token found in expression\n");}}
#line 1857 "syntax_analyzer.tab.c"
    break;

  case 81: /* declaration: keyword_val keyword_val var  */
#line 354 "syntax_analyzer.y"
                                  { if ((yyvsp[-2].ival) != 2 || (yyvsp[-1].ival) != 1 && (yyvsp[-1].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1863 "syntax_analyzer.tab.c"
    break;

  case 82: /* declaration: keyword_val keyword_val var oper_val INTEGER  */
#line 355 "syntax_analyzer.y"
                                                   { if ((yyvsp[-4].ival) != 2 || (yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1869 "syntax_analyzer.tab.c"
    break;

  case 83: /* declaration: keyword_val keyword_val var oper_val FLOAT  */
#line 356 "syntax_analyzer.y"
                                                 { if ((yyvsp[-4].ival) != 2 || (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1875 "syntax_analyzer.tab.c"
    break;

  case 84: /* declaration: keyword_val keyword_val var oper_val var  */
#line 357 "syntax_analyzer.y"
                                               { if ((yyvsp[-4].ival) != 2 || (yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1881 "syntax_analyzer.tab.c"
    break;

  case 85: /* declaration: keyword_val var oper_val arr  */
#line 363 "syntax_analyzer.y"
                                   {
        if((yyvsp[-3].ival) != (yyvsp[0].ival)) // same type of array and variable
            yyerror("Invalid declaration type");  
        else if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1890 "syntax_analyzer.tab.c"
    break;

  case 86: /* declaration: keyword_val var oper_val var_oper  */
#line 370 "syntax_analyzer.y"
                                        {if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1896 "syntax_analyzer.tab.c"
    break;

  case 87: /* assignment: help_var oper_val help_num  */
#line 376 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1902 "syntax_analyzer.tab.c"
    break;

  case 88: /* assignment: help_var oper_val help_arr  */
#line 377 "syntax_analyzer.y"
                                      {
        if((yyvsp[-1].ival) == 12 && var_com < val_arr_com) 
        {
            printf("Warning: Remaining elements not assigned\n"); 
            par_warn++; inc_expr++;
        }
        else if((yyvsp[-1].ival) != 12 || var_com != val_arr_com) 
            yyerror("Invalid assignment"); 
        else 
        {
            cor_expr++;
            printf("Valid assignment\n");
        }
        var_com = 0; val_arr_com = 0; }
#line 1921 "syntax_analyzer.tab.c"
    break;

  case 89: /* assignment: help_var oper_val help_var  */
#line 391 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1927 "syntax_analyzer.tab.c"
    break;

  case 90: /* assignment: help_var oper_val help_str  */
#line 392 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1933 "syntax_analyzer.tab.c"
    break;

  case 91: /* assignment: help_var oper_val help_var_oper  */
#line 393 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1939 "syntax_analyzer.tab.c"
    break;

  case 92: /* assignment: help_var oper_val help_assign  */
#line 394 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_ass_com = 0; }
#line 1945 "syntax_analyzer.tab.c"
    break;

  case 108: /* scan_len_print: keyword_val OPEN_PARENTHESIS var CLOSE_PARENTHESIS  */
#line 430 "syntax_analyzer.y"
                                                          { if ((yyvsp[-3].ival) != 3 && (yyvsp[-3].ival) != 4 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call");else {printf("Valid function call\n"); cor_expr++;}}
#line 1951 "syntax_analyzer.tab.c"
    break;

  case 109: /* scan_len_print: keyword_val OPEN_PARENTHESIS arr CLOSE_PARENTHESIS  */
#line 431 "syntax_analyzer.y"
                                                          { 
        if ((yyvsp[-3].ival) != 4 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call\n"); 
        else if ((yyvsp[-3].ival) == 4 && (yyvsp[-1].ival) == 3) yyerror("Invalid function call\n");
        else if ((yyvsp[-3].ival) == 6 && (yyvsp[-1].ival) != 3) yyerror("Invalid function call\n"); 
        else {printf("Valid Function call\n"); cor_expr++;}
    }
#line 1962 "syntax_analyzer.tab.c"
    break;

  case 110: /* scan_len_print: keyword_val OPEN_PARENTHESIS str CLOSE_PARENTHESIS  */
#line 437 "syntax_analyzer.y"
                                                          { if ((yyvsp[-3].ival) != 4 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1968 "syntax_analyzer.tab.c"
    break;

  case 111: /* cmp_print: keyword_val OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS  */
#line 443 "syntax_analyzer.y"
                                                              {if ((yyvsp[-3].ival) != 5 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1974 "syntax_analyzer.tab.c"
    break;

  case 112: /* print: keyword_val OPEN_PARENTHESIS scan_len_print CLOSE_PARENTHESIS  */
#line 448 "syntax_analyzer.y"
                                                                    {if ((yyvsp[-3].ival) != 6 && (yyvsp[-1].ival) == 4) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1980 "syntax_analyzer.tab.c"
    break;

  case 113: /* print: keyword_val OPEN_PARENTHESIS cmp_print CLOSE_PARENTHESIS  */
#line 449 "syntax_analyzer.y"
                                                                    {if ((yyvsp[-3].ival) != 6 && (yyvsp[-1].ival) == 5) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1986 "syntax_analyzer.tab.c"
    break;

  case 114: /* print: keyword_val OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS  */
#line 450 "syntax_analyzer.y"
                                                                    {if ((yyvsp[-3].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1992 "syntax_analyzer.tab.c"
    break;

  case 115: /* print: keyword_val OPEN_PARENTHESIS keyword_val var CLOSE_PARENTHESIS  */
#line 451 "syntax_analyzer.y"
                                                                      { 
        if ((yyvsp[-4].ival) != 3 && (yyvsp[-4].ival) != 4 && (yyvsp[-4].ival) != 6)
            yyerror("Invalid function call"); 
        else if((yyvsp[-2].ival) == 4 || (yyvsp[-2].ival) == 5)
        {
            printf("Warning: Len/cmp not used correctly \n"); par_warn++; inc_expr++;
        }
        else 
        {
            printf("Warning: Invalid Keyword found in print\n"); par_warn++; inc_expr++;
        }
        }
#line 2009 "syntax_analyzer.tab.c"
    break;

  case 119: /* func_call: var OPEN_PARENTHESIS var CLOSE_PARENTHESIS  */
#line 473 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2015 "syntax_analyzer.tab.c"
    break;

  case 120: /* func_call: var OPEN_PARENTHESIS num CLOSE_PARENTHESIS  */
#line 474 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2021 "syntax_analyzer.tab.c"
    break;

  case 121: /* func_call: var OPEN_PARENTHESIS str CLOSE_PARENTHESIS  */
#line 475 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2027 "syntax_analyzer.tab.c"
    break;

  case 122: /* func_call: var OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS  */
#line 476 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2033 "syntax_analyzer.tab.c"
    break;

  case 123: /* func_call: var OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS  */
#line 477 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2039 "syntax_analyzer.tab.c"
    break;

  case 124: /* func_call: var OPEN_PARENTHESIS CLOSE_PARENTHESIS  */
#line 478 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2045 "syntax_analyzer.tab.c"
    break;

  case 127: /* func_decl: keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS DELIMITER  */
#line 494 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-5].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2051 "syntax_analyzer.tab.c"
    break;

  case 128: /* func_decl: keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS body  */
#line 495 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-5].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2057 "syntax_analyzer.tab.c"
    break;

  case 129: /* func_decl: keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS END body  */
#line 496 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-6].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2063 "syntax_analyzer.tab.c"
    break;

  case 130: /* func_decl: keyword_val num var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS DELIMITER  */
#line 497 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-6].ival) != 7) yyerror("Invalid function definition"); else {par_warn++; inc_expr++; printf("Warning: Number found in func declaration\n");} }
#line 2069 "syntax_analyzer.tab.c"
    break;

  case 131: /* func_decl: keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS DELIMITER  */
#line 500 "syntax_analyzer.y"
                                                                               {if ((yyvsp[-5].ival) != 7 || (yyvsp[-2].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2075 "syntax_analyzer.tab.c"
    break;

  case 132: /* func_decl: keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS body  */
#line 501 "syntax_analyzer.y"
                                                                               {if ((yyvsp[-5].ival) != 7 || (yyvsp[-2].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2081 "syntax_analyzer.tab.c"
    break;

  case 133: /* func_decl: keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS END body  */
#line 502 "syntax_analyzer.y"
                                                                               {if ((yyvsp[-6].ival) != 7 || (yyvsp[-3].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2087 "syntax_analyzer.tab.c"
    break;

  case 157: /* if_while_grammar: keyword_val OPEN_PARENTHESIS num CLOSE_PARENTHESIS cond_body  */
#line 548 "syntax_analyzer.y"
                                                                 {
    if ((yyvsp[-4].ival) != 8 && (yyvsp[-4].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[-4].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[-4].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[-4].ival);}
#line 2096 "syntax_analyzer.tab.c"
    break;

  case 158: /* if_while_grammar: keyword_val OPEN_PARENTHESIS var_oper CLOSE_PARENTHESIS cond_body  */
#line 553 "syntax_analyzer.y"
                                                                        {
    if ((yyvsp[-4].ival) != 8 && (yyvsp[-4].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[-4].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[-4].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[-4].ival);}
#line 2105 "syntax_analyzer.tab.c"
    break;

  case 159: /* if_while_grammar: if_while_grammar keyword_val cond_body  */
#line 558 "syntax_analyzer.y"
                                             {if ((yyvsp[-1].ival) != 9 || (yyvsp[-2].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n"); cor_expr++;}}
#line 2111 "syntax_analyzer.tab.c"
    break;

  case 160: /* if_while_grammar: if_while_grammar END keyword_val cond_body  */
#line 559 "syntax_analyzer.y"
                                                 {if ((yyvsp[-1].ival) != 9 || (yyvsp[-3].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n");cor_expr++;}}
#line 2117 "syntax_analyzer.tab.c"
    break;

  case 161: /* help_for: var oper_val  */
#line 565 "syntax_analyzer.y"
                       {if((yyvsp[0].ival) != 17 && (yyvsp[0].ival) != 18) yyerror("Invalid --/++ operator"); else cor_expr++;}
#line 2123 "syntax_analyzer.tab.c"
    break;

  case 162: /* help_for: var oper_val num  */
#line 566 "syntax_analyzer.y"
                       {cor_expr++;}
#line 2129 "syntax_analyzer.tab.c"
    break;

  case 164: /* $@1: %empty  */
#line 571 "syntax_analyzer.y"
                                                                                                              {if((yyvsp[-8].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");}}
#line 2135 "syntax_analyzer.tab.c"
    break;

  case 165: /* for_grammar: keyword_val OPEN_PARENTHESIS help_for DELIMITER var_oper DELIMITER help_for CLOSE_PARENTHESIS cond_body $@1 keyword_val OPEN_PARENTHESIS help_for DELIMITER expr DELIMITER help_for CLOSE_PARENTHESIS cond_body  */
#line 572 "syntax_analyzer.y"
                                                                                                              {if((yyvsp[-18].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");}}
#line 2141 "syntax_analyzer.tab.c"
    break;


#line 2145 "syntax_analyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 575 "syntax_analyzer.y"


/* void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
} */

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
int main(int argc, char **argv) {

    if(argc == 2)
        yyin = fopen(argv[1], "r"); // open the text file given as input
    else
        yyin = stdin; // get input from the user's terminal

    int parse = yyparse();
    if (errflag = 0 && parse == 0)
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
