/* Onoma arxeiou:       simple-bison-code.y
   Perigrafh:           Ypodeigma gia anaptyksh syntaktikou analyth me xrhsh tou ergaleiou Bison
   Syggrafeas:          Ergasthrio Metaglwttistwn, Tmhma Mhxanikwn Plhroforikhs kai Ypologistwn,
                        Panepisthmio Dytikhs Attikhs
   Sxolia:              To paron programma ylopoiei (me th xrhsh Bison) enan aplo syntaktiko analyth
			pou anagnwrizei thn prosthesh akeraiwn arithmwn (dekadikou systhmatos) & metablhtwn
			kai ektypwnei to apotelesma sthn othonh (thewrontas oti oi metablhtes exoun
			panta thn timh 0). Leitourgei autonoma, dhladh xwris Flex kai anagnwrizei kena
			(space & tab), akeraious (dekadikou systhmatos) kai onomata metablhtwn ths glwssas
			Uni-C enw diaxeirizetai tous eidikous xarakthres neas grammhs '\n' (new valid)
			kai 'EOF' (end of file). Kathara gia logous debugging typwnei sthn othonh otidhpote
			epistrefei h synarthsh yylex().
   Odhgies ekteleshs:   Dinete "make" xwris ta eisagwgika ston trexonta katalogo. Enallaktika:
			bison -o simple-bison-code.c simple-bison-code.y
                        gcc -o simple-bison-code simple-bison-code.c
                        ./simple-bison-code
*/

%{
/* Orismoi kai dhlwseis glwssas C. Otidhpote exei na kanei me orismo h arxikopoihsh
metablhtwn & synarthsewn, arxeia header kai dhlwseis #define mpainei se auto to shmeio */
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>
        #include <string.h>
        extern char *yytext;
        extern void yyerror(char *);
        extern int yylex(void);
        int cor_words = 0;
        int cor_numr = 0;
        int inc_words = 0;
        int inc_numr = 0;
%}

/* Orismos twn anagnwrisimwn lektikwn monadwn. */
%union {
    int ival;
    double dval;
    char *sval;
}

%token <dval> INTEGER FLOAT
%token <sval> OPERATORS IDENTIFIERS STRINGS KEYWORD
%token DELIMITER SYMBOL
%token OPEN_BRACKET CLOSE_BRACKET OPEN_PARENTHESIS CLOSE_PARENTHESIS
%token OPEN_BRACE CLOSE_BRACE UNKNOWN_TOKEN
%token END

/* Orismos proteraiothtwn sta tokens */
%type <dval> num
%type <sval> operator
%type <sval> keyword
%type <sval> declaration
%type <dval> assignment
%type <dval> expr
%type <ival> oper_val
%type <ival> keyword_val
/* %type <sval> func_call */
%type <sval> var

%left '+' '-'
%left '*' '/'
%right '='
%start program

%%
/* Orismos twn grammatikwn kanonwn. Kathe fora pou antistoixizetai enas grammatikos
   kanonas me ta dedomena eisodou, ekteleitai o kwdikas C pou brisketai anamesa sta
   agkistra. H anamenomenh syntaksh einai:
				onoma : kanonas { kwdikas C } */

program:
    | program line
    ;
line:
    END
    | num END { printf("Result: %f\n", $1); }
    | operator END {printf("Operator: %s\n", $1);}
    | declaration END {printf("Valid declaration\n");}
    | assignment END {printf("Valid assignment of\n");}
    | arr END {printf("Valid array\n");}
    | func_call END {printf("Valid function call\n");}
    ;
keyword: 
    KEYWORD { $$ = strdup(yytext);}
    ;
operator:
    OPERATORS { $$ = strdup(yytext);}
    ;
// Rule of keywords
keyword_val:
    keyword{
        // for type of variables
        if(!strcmp($1, "int") || !strcmp($1, "float") || !strcmp($1, "const") || !strcmp($1, "double"))
            $$ = 1;    
        if(!strcmp($1, "const") || !strcmp($1, "long"))
            $$ = 2;
        // for functions
        if(!strcmp($1, "scan"))
            $$ = 3;
        if(!strcmp($1, "len"))
            $$ = 4;
        if(!strcmp($1, "cmp"))
            $$ = 5;
        if(!strcmp($1, "print"))
            $$ = 6;
    }
// Rule for operators
oper_val:
    operator { 
        if(!strcmp($1, "+"))
            $$ = 1;
        if(!strcmp($1, "-"))
            $$ = 2;
        if(!strcmp($1, "*"))
            $$ = 3;
        if(!strcmp($1, "/"))
            $$ = 4;
        if (!strcmp($1, "=="))
            $$ = 5;
        if (!strcmp($1, "!="))
           $$ = 6;
        if (!strcmp($1, ">"))
            $$ = 7;
        if (!strcmp($1, "<"))
            $$ = 8;
        if (!strcmp($1, ">="))
            $$ = 9;
        if (!strcmp($1, "<="))
            $$ = 10;  
        if(!strcmp($1, "%"))
            $$ = 11;
        if(!strcmp($1, "="))
            $$ = 12;
        if (!strcmp($1, "+="))
            $$ = 13;
        if (!strcmp($1, "-="))
            $$ = 14;
        if (!strcmp($1, "*="))
            $$ = 15;
        if (!strcmp($1, "/="))
            $$ = 16;
        if (!strcmp($1, "++"))
            $$ = 17;
        if (!strcmp($1, "--"))
            $$ = 18;
        if (!strcmp($1, "&"))
            $$ = 19;
    }
// Rules for expressions
expr:
    num oper_val num {
        switch($2) {
            case 1: $$ = $1 + $3; break;
            case 2: $$ = $1 - $3; break;
            case 3: $$ = $1 * $3; break;
            case 4: $$ = $1 / $3; break;
            case 5: $$ = $1 == $3; break;
            case 6: $$ = $1 != $3; break;
            case 7: $$ = $1 > $3; break;
            case 8: $$ = $1 < $3; break;
            case 9: $$ = $1 >= $3; break;
            case 10: $$ = $1 <= $3; break;
            case 11: $$ = (int)$1 % (int)$3; break;
            case 12: $$ = $3; break;
            case 13: $$ = $1 + $3; break;
            case 14: $$ = $1 - $3; break;
            case 15: $$ = $1 * $3; break;
            case 16: $$ = $1 / $3; break;
            case 17: $$ = $1 + 1; break;
            case 18: $$ = $1 - 1; break;
        }
    } 
    | oper_val num { 
        switch($1) {
            case 2: $$ = -$2; break;
        }
    }
    /* | oper_val num {
        switch($1) {
            case 19: $$ = $2; break;
        }
    } */
    ;
// Κανόνες για αριθμούς
num:
    INTEGER { $$ = atof(yytext); }
    | FLOAT { $$ = atof(yytext);}
    | expr  { $$ = $1; }
    ;
// Κανόνες για μεταβλητές
var: 
    IDENTIFIERS { $$ = strdup(yytext);}
    ;

// Κανόνας για δήλωση
declaration:
    keyword_val var {if($1 != 1) yyerror("Invalid declaration type");}
    | keyword_val var oper_val num { if ($1 != 1 || $3 != 12) yyerror("Invalid declaration type");}
    | keyword_val keyword_val var { if ($1 != 2 || $2 != 1) yyerror("Invalid declaration type");}
    | keyword_val keyword_val var oper_val num { if ($1 != 2 || $2 != 1 || $4 != 12) yyerror("Invalid declaration type");}
    /* | keyword_val var eq_oper OPEN_BRACE integer_sym CLOSE_BRACE {$$ = $1;} */
    ;

// Κανόνες για ανάθεση
assignment:
    /* IDENTIFIERS eq_oper num {$$ = $3;}  */
    help_var oper_val num {if($2 == 12) $$ = $3; else yyerror("Invalid assignment");}
    ;

// Κανόνας για πίνακες
arr:    
    OPEN_BRACE help_str CLOSE_BRACE   {}
    | OPEN_BRACE help_num CLOSE_BRACE  {}
    | var OPEN_BRACE INTEGER CLOSE_BRACE {}
    ;
// Βοηθητικοί κανόνες για κόμματα (STRINGS, NUMBERS, VARIABLES)
help_str: 
    STRINGS
    | STRINGS SYMBOL help_str
    ;
help_num: 
    num
    | num SYMBOL help_num
    ;
help_var: 
    var
    | help_var SYMBOL help_var
    ;

// Κανόνας για την συνάρτηση len και την print και την scan
scan_len_print: 
    keyword_val OPEN_PARENTHESIS var CLOSE_PARENTHESIS { if ($1 != 3 && $1 != 4 && $1 != 6) yyerror("Invalid function call");}
    keyword_val OPEN_PARENTHESIS arr CLOSE_PARENTHESIS  {if ($1 != 4) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS STRINGS CLOSE_PARENTHESIS  { if ($1 != 4 && $1 != 6) yyerror("Invalid function call");}
    ;
// Κανόνας για την συνάρτηση cmp
cmp_print: 
    keyword_val OPEN_PARENTHESIS cmp_helper CLOSE_PARENTHESIS {if ($1 != 5 && $1 != 6) yyerror("Invalid function call");}
    ;
cmp_helper:
    IDENTIFIERS SYMBOL IDENTIFIERS
    | STRINGS SYMBOL STRINGS
    | STRINGS SYMBOL IDENTIFIERS
    | IDENTIFIERS SYMBOL STRINGS
    | cmp_helper SYMBOL cmp_helper
    ;
// Κανόνας για την συνάρτηση print.
print : 
    keyword_val OPEN_PARENTHESIS cmp_print CLOSE_PARENTHESIS {if ($1 != 6) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS scan_len_print CLOSE_PARENTHESIS {if ($1 != 6) yyerror("Invalid function call");}
    ;

func_call:
    scan_len_print
    | cmp_print
    | print
    ;

%%
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
int main(void) {
    if (yyparse() == 0)
        fprintf(stderr, "Successful parsing.\n");
    else
        fprintf(stderr, "Error found.\n");
    return 0;
}