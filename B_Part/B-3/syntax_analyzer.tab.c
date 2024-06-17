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
  YYSYMBOL_for_grammar = 61                /* for_grammar  */
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
#define YYLAST   575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

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
     559,   565,   566,   571,   572
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
  "for_grammar", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-163)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,   257,   101,   -13,    91,   144,   277,
     260,   325,   251,   254,    -6,   113,   371,   -29,   384,   389,
    -119,     0,     1,   373,   -31,   383,   385,  -119,     8,  -118,
    -119,   -73,   -75,   266,    28,    95,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     9,    10,    28,   146,    30,    31,   127,    12,
     215,    92,    93,    94,    50,   223,   206,    13,   229,   218,
      81,   123,   148,    51,    52,    16,    17,    18,   149,   124,
      20,    88,    89,   150,   151,    55,   152
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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
      59,    60,    60,    61,    61
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
       4,     2,     3,     9,     9
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
#line 1398 "syntax_analyzer.tab.c"
    break;

  case 14: /* valid: EOP  */
#line 110 "syntax_analyzer.y"
                                { print_report();}
#line 1404 "syntax_analyzer.tab.c"
    break;

  case 16: /* keyword: KEYWORD  */
#line 114 "syntax_analyzer.y"
            { (yyval.sval) = strdup(yytext);}
#line 1410 "syntax_analyzer.tab.c"
    break;

  case 17: /* operator: OPERATORS  */
#line 118 "syntax_analyzer.y"
              { (yyval.sval) = strdup(yytext);}
#line 1416 "syntax_analyzer.tab.c"
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
#line 1441 "syntax_analyzer.tab.c"
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
#line 1467 "syntax_analyzer.tab.c"
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
#line 1492 "syntax_analyzer.tab.c"
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
#line 1519 "syntax_analyzer.tab.c"
    break;

  case 22: /* expr: oper_val num  */
#line 215 "syntax_analyzer.y"
                   { 
        switch((yyvsp[-1].ival)) {
            case 2: (yyval.dval) = -(yyvsp[0].dval); break;
            //case 19: $$ = $2; break;
        }
    }
#line 1530 "syntax_analyzer.tab.c"
    break;

  case 23: /* num: INTEGER  */
#line 225 "syntax_analyzer.y"
            { (yyval.dval) = atof(yytext);}
#line 1536 "syntax_analyzer.tab.c"
    break;

  case 24: /* num: FLOAT  */
#line 226 "syntax_analyzer.y"
            { (yyval.dval) = atof(yytext);}
#line 1542 "syntax_analyzer.tab.c"
    break;

  case 25: /* num: expr  */
#line 227 "syntax_analyzer.y"
            { (yyval.dval) = (yyvsp[0].dval);}
#line 1548 "syntax_analyzer.tab.c"
    break;

  case 26: /* var: IDENTIFIERS  */
#line 232 "syntax_analyzer.y"
                { (yyval.sval) = strdup(yytext);}
#line 1554 "syntax_analyzer.tab.c"
    break;

  case 27: /* var_oper: var oper_val num  */
#line 237 "syntax_analyzer.y"
                        {}
#line 1560 "syntax_analyzer.tab.c"
    break;

  case 28: /* var_oper: num oper_val var  */
#line 238 "syntax_analyzer.y"
                        {}
#line 1566 "syntax_analyzer.tab.c"
    break;

  case 29: /* var_oper: var oper_val var  */
#line 239 "syntax_analyzer.y"
                        {}
#line 1572 "syntax_analyzer.tab.c"
    break;

  case 30: /* var_oper: expr oper_val var  */
#line 240 "syntax_analyzer.y"
                        {}
#line 1578 "syntax_analyzer.tab.c"
    break;

  case 31: /* str: STRINGS  */
#line 245 "syntax_analyzer.y"
            { (yyval.sval) = strdup(yytext);}
#line 1584 "syntax_analyzer.tab.c"
    break;

  case 33: /* help_int: INTEGER SYMBOL help_int  */
#line 252 "syntax_analyzer.y"
                              {val_com++;}
#line 1590 "syntax_analyzer.tab.c"
    break;

  case 35: /* help_float: FLOAT SYMBOL help_float  */
#line 256 "syntax_analyzer.y"
                              {val_com++;}
#line 1596 "syntax_analyzer.tab.c"
    break;

  case 36: /* arr: OPEN_BRACE help_int CLOSE_BRACE  */
#line 261 "syntax_analyzer.y"
                                     { (yyval.ival) = 1; val_com=0; }
#line 1602 "syntax_analyzer.tab.c"
    break;

  case 37: /* arr: OPEN_BRACE help_float CLOSE_BRACE  */
#line 262 "syntax_analyzer.y"
                                         { (yyval.ival) = 13; val_com=0;}
#line 1608 "syntax_analyzer.tab.c"
    break;

  case 38: /* arr: OPEN_BRACE help_str CLOSE_BRACE  */
#line 263 "syntax_analyzer.y"
                                        { (yyval.ival) = 2; val_com=0;}
#line 1614 "syntax_analyzer.tab.c"
    break;

  case 39: /* arr: var OPEN_BRACE INTEGER CLOSE_BRACE  */
#line 264 "syntax_analyzer.y"
                                         { (yyval.ival) = 3; val_com=0;}
#line 1620 "syntax_analyzer.tab.c"
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
#line 1634 "syntax_analyzer.tab.c"
    break;

  case 42: /* help_str: str SYMBOL help_str  */
#line 279 "syntax_analyzer.y"
                          {val_com++;}
#line 1640 "syntax_analyzer.tab.c"
    break;

  case 44: /* help_num: num SYMBOL help_num  */
#line 283 "syntax_analyzer.y"
                          {val_com++;}
#line 1646 "syntax_analyzer.tab.c"
    break;

  case 46: /* help_var: var SYMBOL help_var  */
#line 287 "syntax_analyzer.y"
                          {var_com++;}
#line 1652 "syntax_analyzer.tab.c"
    break;

  case 48: /* help_arr: arr SYMBOL help_arr  */
#line 291 "syntax_analyzer.y"
                          {val_arr_com++;}
#line 1658 "syntax_analyzer.tab.c"
    break;

  case 50: /* help_var_oper: var_oper SYMBOL help_var_oper  */
#line 295 "syntax_analyzer.y"
                                    {var_com++;}
#line 1664 "syntax_analyzer.tab.c"
    break;

  case 51: /* help_assign: arr SYMBOL num  */
#line 304 "syntax_analyzer.y"
                   {val_ass_com++;}
#line 1670 "syntax_analyzer.tab.c"
    break;

  case 52: /* help_assign: arr SYMBOL str  */
#line 305 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1676 "syntax_analyzer.tab.c"
    break;

  case 53: /* help_assign: arr SYMBOL var  */
#line 306 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1682 "syntax_analyzer.tab.c"
    break;

  case 54: /* help_assign: arr SYMBOL var_oper  */
#line 307 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1688 "syntax_analyzer.tab.c"
    break;

  case 55: /* help_assign: var SYMBOL num  */
#line 309 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1694 "syntax_analyzer.tab.c"
    break;

  case 56: /* help_assign: var SYMBOL arr  */
#line 310 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1700 "syntax_analyzer.tab.c"
    break;

  case 57: /* help_assign: var SYMBOL str  */
#line 311 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1706 "syntax_analyzer.tab.c"
    break;

  case 58: /* help_assign: var SYMBOL var_oper  */
#line 312 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1712 "syntax_analyzer.tab.c"
    break;

  case 59: /* help_assign: str SYMBOL num  */
#line 314 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1718 "syntax_analyzer.tab.c"
    break;

  case 60: /* help_assign: str SYMBOL var  */
#line 315 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1724 "syntax_analyzer.tab.c"
    break;

  case 61: /* help_assign: str SYMBOL arr  */
#line 316 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1730 "syntax_analyzer.tab.c"
    break;

  case 62: /* help_assign: str SYMBOL var_oper  */
#line 317 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1736 "syntax_analyzer.tab.c"
    break;

  case 63: /* help_assign: num SYMBOL str  */
#line 319 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1742 "syntax_analyzer.tab.c"
    break;

  case 64: /* help_assign: num SYMBOL var  */
#line 320 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1748 "syntax_analyzer.tab.c"
    break;

  case 65: /* help_assign: num SYMBOL arr  */
#line 321 "syntax_analyzer.y"
                     {val_ass_com++;}
#line 1754 "syntax_analyzer.tab.c"
    break;

  case 66: /* help_assign: num SYMBOL var_oper  */
#line 322 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1760 "syntax_analyzer.tab.c"
    break;

  case 67: /* help_assign: var_oper SYMBOL str  */
#line 324 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1766 "syntax_analyzer.tab.c"
    break;

  case 68: /* help_assign: var_oper SYMBOL var  */
#line 325 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1772 "syntax_analyzer.tab.c"
    break;

  case 69: /* help_assign: var_oper SYMBOL arr  */
#line 326 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1778 "syntax_analyzer.tab.c"
    break;

  case 70: /* help_assign: var_oper SYMBOL num  */
#line 327 "syntax_analyzer.y"
                          {val_ass_com++;}
#line 1784 "syntax_analyzer.tab.c"
    break;

  case 71: /* help_assign: help_assign SYMBOL num  */
#line 329 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1790 "syntax_analyzer.tab.c"
    break;

  case 72: /* help_assign: help_assign SYMBOL str  */
#line 330 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1796 "syntax_analyzer.tab.c"
    break;

  case 73: /* help_assign: help_assign SYMBOL var  */
#line 331 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1802 "syntax_analyzer.tab.c"
    break;

  case 74: /* help_assign: help_assign SYMBOL arr  */
#line 332 "syntax_analyzer.y"
                             {val_ass_com++;}
#line 1808 "syntax_analyzer.tab.c"
    break;

  case 75: /* help_assign: help_assign SYMBOL var_oper  */
#line 333 "syntax_analyzer.y"
                                  {val_ass_com++;}
#line 1814 "syntax_analyzer.tab.c"
    break;

  case 76: /* declaration: keyword_val var  */
#line 340 "syntax_analyzer.y"
                    {if((yyvsp[-1].ival) != 1 && (yyvsp[-1].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1820 "syntax_analyzer.tab.c"
    break;

  case 77: /* declaration: keyword_val var oper_val INTEGER  */
#line 344 "syntax_analyzer.y"
                                       { if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1826 "syntax_analyzer.tab.c"
    break;

  case 78: /* declaration: keyword_val var oper_val FLOAT  */
#line 345 "syntax_analyzer.y"
                                     { if ((yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1832 "syntax_analyzer.tab.c"
    break;

  case 79: /* declaration: keyword_val var oper_val var  */
#line 346 "syntax_analyzer.y"
                                   { if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1838 "syntax_analyzer.tab.c"
    break;

  case 80: /* declaration: keyword_val var oper_val var operator  */
#line 347 "syntax_analyzer.y"
                                            { if ((yyvsp[-4].ival) != 1 && (yyvsp[-4].ival) != 13 || (yyvsp[-2].ival) != 12 ) yyerror("Invalid declaration type"); else {par_warn++; inc_expr++; printf("Warning: Unknown token found in expression\n");}}
#line 1844 "syntax_analyzer.tab.c"
    break;

  case 81: /* declaration: keyword_val keyword_val var  */
#line 354 "syntax_analyzer.y"
                                  { if ((yyvsp[-2].ival) != 2 || (yyvsp[-1].ival) != 1 && (yyvsp[-1].ival) != 13) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1850 "syntax_analyzer.tab.c"
    break;

  case 82: /* declaration: keyword_val keyword_val var oper_val INTEGER  */
#line 355 "syntax_analyzer.y"
                                                   { if ((yyvsp[-4].ival) != 2 || (yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1856 "syntax_analyzer.tab.c"
    break;

  case 83: /* declaration: keyword_val keyword_val var oper_val FLOAT  */
#line 356 "syntax_analyzer.y"
                                                 { if ((yyvsp[-4].ival) != 2 || (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1862 "syntax_analyzer.tab.c"
    break;

  case 84: /* declaration: keyword_val keyword_val var oper_val var  */
#line 357 "syntax_analyzer.y"
                                               { if ((yyvsp[-4].ival) != 2 || (yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1868 "syntax_analyzer.tab.c"
    break;

  case 85: /* declaration: keyword_val var oper_val arr  */
#line 363 "syntax_analyzer.y"
                                   {
        if((yyvsp[-3].ival) != (yyvsp[0].ival)) // same type of array and variable
            yyerror("Invalid declaration type");  
        else if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1877 "syntax_analyzer.tab.c"
    break;

  case 86: /* declaration: keyword_val var oper_val var_oper  */
#line 370 "syntax_analyzer.y"
                                        {if ((yyvsp[-3].ival) != 1 && (yyvsp[-3].ival) != 13 || (yyvsp[-1].ival) != 12) yyerror("Invalid declaration type"); else {cor_expr++;printf("Valid Declaration\n");}}
#line 1883 "syntax_analyzer.tab.c"
    break;

  case 87: /* assignment: help_var oper_val help_num  */
#line 376 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1889 "syntax_analyzer.tab.c"
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
#line 1908 "syntax_analyzer.tab.c"
    break;

  case 89: /* assignment: help_var oper_val help_var  */
#line 391 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1914 "syntax_analyzer.tab.c"
    break;

  case 90: /* assignment: help_var oper_val help_str  */
#line 392 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1920 "syntax_analyzer.tab.c"
    break;

  case 91: /* assignment: help_var oper_val help_var_oper  */
#line 393 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_com)     yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_com = 0; }
#line 1926 "syntax_analyzer.tab.c"
    break;

  case 92: /* assignment: help_var oper_val help_assign  */
#line 394 "syntax_analyzer.y"
                                      {if((yyvsp[-1].ival) != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); else {cor_expr++;printf("Valid assignment\n");} var_com = 0; val_ass_com = 0; }
#line 1932 "syntax_analyzer.tab.c"
    break;

  case 108: /* scan_len_print: keyword_val OPEN_PARENTHESIS var CLOSE_PARENTHESIS  */
#line 430 "syntax_analyzer.y"
                                                          { if ((yyvsp[-3].ival) != 3 && (yyvsp[-3].ival) != 4 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call");else {printf("Valid function call\n"); cor_expr++;}}
#line 1938 "syntax_analyzer.tab.c"
    break;

  case 109: /* scan_len_print: keyword_val OPEN_PARENTHESIS arr CLOSE_PARENTHESIS  */
#line 431 "syntax_analyzer.y"
                                                          { 
        if ((yyvsp[-3].ival) != 4 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call\n"); 
        else if ((yyvsp[-3].ival) == 4 && (yyvsp[-1].ival) == 3) yyerror("Invalid function call\n");
        else if ((yyvsp[-3].ival) == 6 && (yyvsp[-1].ival) != 3) yyerror("Invalid function call\n"); 
        else {printf("Valid Function call\n"); cor_expr++;}
    }
#line 1949 "syntax_analyzer.tab.c"
    break;

  case 110: /* scan_len_print: keyword_val OPEN_PARENTHESIS str CLOSE_PARENTHESIS  */
#line 437 "syntax_analyzer.y"
                                                          { if ((yyvsp[-3].ival) != 4 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1955 "syntax_analyzer.tab.c"
    break;

  case 111: /* cmp_print: keyword_val OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS  */
#line 443 "syntax_analyzer.y"
                                                              {if ((yyvsp[-3].ival) != 5 && (yyvsp[-3].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1961 "syntax_analyzer.tab.c"
    break;

  case 112: /* print: keyword_val OPEN_PARENTHESIS scan_len_print CLOSE_PARENTHESIS  */
#line 448 "syntax_analyzer.y"
                                                                    {if ((yyvsp[-3].ival) != 6 && (yyvsp[-1].ival) == 4) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1967 "syntax_analyzer.tab.c"
    break;

  case 113: /* print: keyword_val OPEN_PARENTHESIS cmp_print CLOSE_PARENTHESIS  */
#line 449 "syntax_analyzer.y"
                                                                    {if ((yyvsp[-3].ival) != 6 && (yyvsp[-1].ival) == 5) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1973 "syntax_analyzer.tab.c"
    break;

  case 114: /* print: keyword_val OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS  */
#line 450 "syntax_analyzer.y"
                                                                    {if ((yyvsp[-3].ival) != 6) yyerror("Invalid function call"); else {printf("Valid function call\n"); cor_expr++;}}
#line 1979 "syntax_analyzer.tab.c"
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
#line 1996 "syntax_analyzer.tab.c"
    break;

  case 119: /* func_call: var OPEN_PARENTHESIS var CLOSE_PARENTHESIS  */
#line 473 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2002 "syntax_analyzer.tab.c"
    break;

  case 120: /* func_call: var OPEN_PARENTHESIS num CLOSE_PARENTHESIS  */
#line 474 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2008 "syntax_analyzer.tab.c"
    break;

  case 121: /* func_call: var OPEN_PARENTHESIS str CLOSE_PARENTHESIS  */
#line 475 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2014 "syntax_analyzer.tab.c"
    break;

  case 122: /* func_call: var OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS  */
#line 476 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2020 "syntax_analyzer.tab.c"
    break;

  case 123: /* func_call: var OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS  */
#line 477 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2026 "syntax_analyzer.tab.c"
    break;

  case 124: /* func_call: var OPEN_PARENTHESIS CLOSE_PARENTHESIS  */
#line 478 "syntax_analyzer.y"
                                                        {printf("Valid function call\n"); cor_expr++;}
#line 2032 "syntax_analyzer.tab.c"
    break;

  case 127: /* func_decl: keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS DELIMITER  */
#line 494 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-5].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2038 "syntax_analyzer.tab.c"
    break;

  case 128: /* func_decl: keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS body  */
#line 495 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-5].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2044 "syntax_analyzer.tab.c"
    break;

  case 129: /* func_decl: keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS END body  */
#line 496 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-6].ival) != 7) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2050 "syntax_analyzer.tab.c"
    break;

  case 130: /* func_decl: keyword_val num var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS DELIMITER  */
#line 497 "syntax_analyzer.y"
                                                                                 {if ((yyvsp[-6].ival) != 7) yyerror("Invalid function definition"); else {par_warn++; inc_expr++; printf("Warning: Number found in func declaration\n");} }
#line 2056 "syntax_analyzer.tab.c"
    break;

  case 131: /* func_decl: keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS DELIMITER  */
#line 500 "syntax_analyzer.y"
                                                                               {if ((yyvsp[-5].ival) != 7 || (yyvsp[-2].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2062 "syntax_analyzer.tab.c"
    break;

  case 132: /* func_decl: keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS body  */
#line 501 "syntax_analyzer.y"
                                                                               {if ((yyvsp[-5].ival) != 7 || (yyvsp[-2].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2068 "syntax_analyzer.tab.c"
    break;

  case 133: /* func_decl: keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS END body  */
#line 502 "syntax_analyzer.y"
                                                                               {if ((yyvsp[-6].ival) != 7 || (yyvsp[-3].ival) != 12) yyerror("Invalid function definition"); else {cor_expr++;printf("Valid function definition\n");}}
#line 2074 "syntax_analyzer.tab.c"
    break;

  case 157: /* if_while_grammar: keyword_val OPEN_PARENTHESIS num CLOSE_PARENTHESIS cond_body  */
#line 548 "syntax_analyzer.y"
                                                                 {
    if ((yyvsp[-4].ival) != 8 && (yyvsp[-4].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[-4].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[-4].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[-4].ival);}
#line 2083 "syntax_analyzer.tab.c"
    break;

  case 158: /* if_while_grammar: keyword_val OPEN_PARENTHESIS var_oper CLOSE_PARENTHESIS cond_body  */
#line 553 "syntax_analyzer.y"
                                                                        {
    if ((yyvsp[-4].ival) != 8 && (yyvsp[-4].ival) != 10) yyerror("Invalid if/while statement"); 
    else if ((yyvsp[-4].ival) == 8){printf("Valid if statement\n"); cor_expr++;} 
    else if ((yyvsp[-4].ival) == 10){printf("Valid while statement\n"); cor_expr++;} (yyval.ival) = (yyvsp[-4].ival);}
#line 2092 "syntax_analyzer.tab.c"
    break;

  case 159: /* if_while_grammar: if_while_grammar keyword_val cond_body  */
#line 558 "syntax_analyzer.y"
                                             {if ((yyvsp[-1].ival) != 9 || (yyvsp[-2].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n"); cor_expr++;}}
#line 2098 "syntax_analyzer.tab.c"
    break;

  case 160: /* if_while_grammar: if_while_grammar END keyword_val cond_body  */
#line 559 "syntax_analyzer.y"
                                                 {if ((yyvsp[-1].ival) != 9 || (yyvsp[-3].ival) != 8) yyerror("Invalid if/while statement"); else {printf("Valid else statement\n");cor_expr++;}}
#line 2104 "syntax_analyzer.tab.c"
    break;

  case 161: /* help_for: var oper_val  */
#line 565 "syntax_analyzer.y"
                       {if((yyvsp[0].ival) != 17 && (yyvsp[0].ival) != 18) yyerror("Invalid --/++ operator"); else cor_expr++;}
#line 2110 "syntax_analyzer.tab.c"
    break;

  case 162: /* help_for: var oper_val num  */
#line 566 "syntax_analyzer.y"
                       {cor_expr++;}
#line 2116 "syntax_analyzer.tab.c"
    break;

  case 163: /* for_grammar: keyword_val OPEN_PARENTHESIS help_for DELIMITER var_oper DELIMITER help_for CLOSE_PARENTHESIS cond_body  */
#line 571 "syntax_analyzer.y"
                                                                                                            {if((yyvsp[-8].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");}}
#line 2122 "syntax_analyzer.tab.c"
    break;

  case 164: /* for_grammar: keyword_val OPEN_PARENTHESIS help_for DELIMITER expr DELIMITER help_for CLOSE_PARENTHESIS cond_body  */
#line 572 "syntax_analyzer.y"
                                                                                                                {if((yyvsp[-8].ival) != 11) yyerror("Invalid for statement"); else {cor_expr++;printf("Valid for statement\n");}}
#line 2128 "syntax_analyzer.tab.c"
    break;


#line 2132 "syntax_analyzer.tab.c"

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
