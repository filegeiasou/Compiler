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
%}

/* Orismos twn anagnwrisimwn lektikwn monadwn. */
%union {
    int ival;
    double dval;
    char *sval;
}

%token <dval> INTEGER FLOAT
%token <sval> OPERATORS IDENTIFIERS STRINGS KEYWORD
%token  SYMBOL OPEN_PARENTHESIS CLOSE_PARENTHESIS
%token OPEN_BRACE CLOSE_BRACE END EOP  
%token UNKNOWN_TOKEN DELIMITER OPEN_BRACKET CLOSE_BRACKET

/* Orismos proteraiothtwn sta tokens */
%type <dval> num assignment expr help_num
%type <sval> operator keyword declaration var str func_decl
%type <ival> oper_val keyword_val scan_len_print cmp_print arr if_while_grammar help_for
/* %type <sval> func_call */

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
    | program valid
    ;
valid:
    END
    /* | num END { printf("Result: %f\n", $1); }
    | operator END {printf("Operator: %s\n", $1);} */
    | declaration END {printf("Valid declaration\n");}
    | assignment END {printf("Valid assignment\n");}
    | func_call END {printf("Valid function call\n");}
    | func_decl END {printf("Valid function declaration\n");}
    | if_while_grammar END {printf("Valid if/while statement\n");}
    | for_grammar END {printf("Valid for statement\n");}
    /* | body END {printf("Valid body\n");} */
    | EOP   { print_report(); }
    | UNKNOWN_TOKEN {inc_words++;}
    ;
keyword: 
    KEYWORD { $$ = strdup(yytext); cor_words++;}
    ;
operator:
    OPERATORS { $$ = strdup(yytext); cor_words++;}
    ;
// Rule of keywords
keyword_val:
    keyword{
        // for type of variables
        if(!strcmp($1, "int") || !strcmp($1, "float") || !strcmp($1, "const") || !strcmp($1, "double")) $$ = 1;    
        if(!strcmp($1, "const") || !strcmp($1, "long")) $$ = 2;
        // for functions
        if(!strcmp($1, "scan")) $$ = 3;
        if(!strcmp($1, "len")) $$ = 4;
        if(!strcmp($1, "cmp")) $$ = 5;
        if(!strcmp($1, "print")) $$ = 6;
        if(!strcmp($1, "func")) $$ = 7;
        // for conditionals
        if(!strcmp($1, "if")) $$ = 8;
        if(!strcmp($1, "else")) $$ = 9;
        if(!strcmp($1, "while")) $$ = 10;
        if(!strcmp($1, "for")) $$ = 11;
        if(!strcmp($1, "void")) $$ = 12;
    }
    ;
// Rule for operators
oper_val:
    operator { 
        if(!strcmp($1, "+")) $$ = 1;
        if(!strcmp($1, "-")) $$ = 2;
        if(!strcmp($1, "*")) $$ = 3;
        if(!strcmp($1, "/")) $$ = 4;
        if (!strcmp($1, "==")) $$ = 5;
        if (!strcmp($1, "!=")) $$ = 6;
        if (!strcmp($1, ">")) $$ = 7;
        if (!strcmp($1, "<")) $$ = 8;
        if (!strcmp($1, ">=")) $$ = 9;
        if (!strcmp($1, "<=")) $$ = 10;  
        if(!strcmp($1, "%")) $$ = 11;
        if(!strcmp($1, "=")) $$ = 12;
        if (!strcmp($1, "+=")) $$ = 13;
        if (!strcmp($1, "-=")) $$ = 14;
        if (!strcmp($1, "*=")) $$ = 15;
        if (!strcmp($1, "/=")) $$ = 16;
        if (!strcmp($1, "++")) $$ = 17;
        if (!strcmp($1, "--")) $$ = 18;
        if (!strcmp($1, "&")) $$ = 19;
    }
    ;
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
        }
    } 
    | expr oper_val num {
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
            //case 19: $$ = $2; break;
        }
    }
    ;
// Κανόνες για αριθμούς
num:
    INTEGER { $$ = atof(yytext); cor_words++;} 
    | FLOAT { $$ = atof(yytext); cor_words++;}
    | expr  { $$ = $1;}
    ;
// Κανόνες για μεταβλητές
var: 
    IDENTIFIERS { $$ = strdup(yytext); cor_words++;}
    ;
// Κανόνες για πράξεις μεταβλητών
var_oper:
    var oper_val num {}
    | num oper_val var {}
    | var oper_val var {}
    | expr oper_val var {}
    ;
str:
    STRINGS { $$ = strdup(yytext); cor_words++;}
    ;
// Κανόνας για πίνακες
arr:    
    OPEN_BRACE help_str CLOSE_BRACE   { $$ = 1; val_com=0;}
    | OPEN_BRACE help_num CLOSE_BRACE  { $$ = 2; val_com=0;}
    | var OPEN_BRACE INTEGER CLOSE_BRACE { $$ = 3; val_com=0;} 
    | arr oper_val arr {if ($2 != 1) yyerror("Invalid arr"); $$ = 4; val_com=0;} //concat array
    ;

// Βοηθητικοί κανόνες για κόμματα (str, NUMBERS, VARIABLES)
help_str: 
    str
    | str SYMBOL help_str {val_com++;}
    ;
help_num: 
    num 
    | num SYMBOL help_num {val_com++;}
    ;
help_var: 
    var
    | var SYMBOL help_var {var_com++;}
    ;
help_arr:
    arr
    | arr SYMBOL help_arr {val_arr_com++;}
    ;
// Για διαφορετικούς τύπους αναθέσεις
help_assign:
    arr SYMBOL num {val_ass_com++;}
    | arr SYMBOL str {val_ass_com++;}
    | arr SYMBOL var {val_ass_com++;}

    | var SYMBOL num {val_ass_com++;}
    | var SYMBOL arr {val_ass_com++;}
    | var SYMBOL str {val_ass_com++;}

    | str SYMBOL num {val_ass_com++;}
    | str SYMBOL var {val_ass_com++;}
    | str SYMBOL arr {val_ass_com++;}

    | num SYMBOL str {val_ass_com++;}
    | num SYMBOL var {val_ass_com++;}
    | num SYMBOL arr {val_ass_com++;}

    | help_assign SYMBOL num {val_ass_com++;}
    | help_assign SYMBOL str {val_ass_com++;}
    | help_assign SYMBOL var {val_ass_com++;}
    | help_assign SYMBOL arr {val_ass_com++;}
    ;

// Κανόνας για δήλωση
declaration:
    keyword_val var {if($1 != 1) yyerror("Invalid declaration type"); cor_expr++;}
    | keyword_val var oper_val num { if ($1 != 1 || $3 != 12) yyerror("Invalid declaration type"); cor_expr++;}
    | keyword_val keyword_val var { if ($1 != 2 || $2 != 1) yyerror("Invalid declaration type"); cor_expr++;}
    | keyword_val keyword_val var oper_val num { if ($1 != 2 || $2 != 1 || $4 != 12) yyerror("Invalid declaration type"); cor_expr++;}
    | keyword_val var oper_val arr {if ($1 != 1 || $3 != 12 ) yyerror("Invalid declaration type"); cor_expr++;} 
    ;

// Κανόνες για ανάθεση τιμών 
assignment: 
    help_var oper_val help_num {if($2 != 12 || var_com != val_com)  yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_arr {if($2 != 12 || val_arr_com) yyerror("Invalid assignment"); var_com = 0; val_arr_com = 0; cor_expr++;}
    | help_var oper_val help_var {if($2 != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_str {if($2 != 12 || var_com != val_com) yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_assign {if($2 != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); var_com = 0; val_ass_com = 0; cor_expr++;}
    | var oper_val var_oper {if($2 != 12) yyerror("Invalid assignment");} // α = α + b; //ΚΑΝΟΝΙΚΑ ΘΕΛΕΙ ΚΑΙ ΤΗΝ ΟΜΑΔΟΠΟΙΗΣΗ
    ;
 
// Βοηθητικοί κανόνες για συναρτήσεις print και cmp και για πολλώνν τύπων με κόμματα χωρισμένα
help_3args:
    var SYMBOL num
    | num SYMBOL var
    | str SYMBOL num
    | num SYMBOL str
    | num SYMBOL num
    | help_2args SYMBOL var
    | help_2args SYMBOL str
    | help_2args SYMBOL num
    | help_3args SYMBOL var
    | help_3args SYMBOL str
    | help_3args SYMBOL num
    ;
help_2args:
    var SYMBOL var
    | str SYMBOL str
    | str SYMBOL var
    | var SYMBOL str
    ;
// Κανόνας για την συνάρτηση scan, len και την print (όταν όρισμα είναι ένα)
scan_len_print: 
    keyword_val OPEN_PARENTHESIS var CLOSE_PARENTHESIS { if ($1 != 3 && $1 != 4 && $1 != 6) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS arr CLOSE_PARENTHESIS  {if ($1 != 4) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS str CLOSE_PARENTHESIS  { if ($1 != 4 && $1 != 6) yyerror("Invalid function call");}
    ;
// Κανόνας για την συνάρτηση cmp και την print (όταν ορίσματα είναι δύο)
cmp_print: 
    keyword_val OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS {if ($1 != 5 && $1 != 6) yyerror("Invalid function call");}
    ;
// Κανόνας για την συνάρτηση print (όταν τα όρισματα είναι 3)
print: 
    keyword_val OPEN_PARENTHESIS scan_len_print CLOSE_PARENTHESIS {if ($1 != 6 && $3 == 4) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS cmp_print CLOSE_PARENTHESIS {if ($1 != 6 && $3 == 5) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS {if ($1 != 6) yyerror("Invalid function call");} 
    ;

// Κανόνας για την κλήση συναρτήσεων 
func_call:
    scan_len_print {cor_expr++;}
    | cmp_print {cor_expr++;}
    | print {cor_expr++;}
    // Κλήση συνάρτησης οριμένη από χρήστη
    | var OPEN_PARENTHESIS var CLOSE_PARENTHESIS {cor_expr++;} //κλήση συνάρτησης με όρισμα {if(strcmp($1,func_arg)) yyerror("Invalid function call");} -> ελέγχος αν υπάρχει συνάρτηση (δεν ξέρω πώς ακριβώς προαιρετικό)
    | var OPEN_PARENTHESIS num CLOSE_PARENTHESIS {cor_expr++;} //κλήση συνάρτησης με 1 όρισμα 
    | var OPEN_PARENTHESIS str CLOSE_PARENTHESIS {cor_expr++;} //κλήση συνάρτησης με 1 όρισμα 
    | var OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS {cor_expr++;} //κλήση συνάρτησης με 2 όρισματα
    | var OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS {cor_expr++;} //κλήση συνάρτησης με 3 όρισματα
    | var OPEN_PARENTHESIS CLOSE_PARENTHESIS {cor_expr++;} //κλήση συνάρτησης με κανένα όρισμα
    ;
//  Κανόνας για παράμετρους συναρτήσεων
arguments:
    declaration
    | declaration SYMBOL arguments
    ;

// Εδώ ορίζεται τι θεωρείται ορισμός μιας συνάρτησης (δουλέυει με ότι εχει το declaration, μήπως χωριστούν κάποια από τα πεδία του)
func_decl:
    keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS DELIMITER{if($1 != 7) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS body{if ($1 != 7) yyerror("Invalid function definition"); func_arg = $2; cor_expr++; }
    | keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS END body{if ($1 != 7) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    // Void συνάρτηση
    | keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS DELIMITER{if ($1 != 7 || $4 != 12) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS body{if ($1 != 7 || $4 != 12) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS END body{if ($1 != 7 || $4 != 12) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    ;

// Κανόνας για άνοιγμα/κλείσιμο σώματος {} συναρτήσεων
body:
    OPEN_BRACKET all CLOSE_BRACKET
    | OPEN_BRACKET END all CLOSE_BRACKET
    | OPEN_BRACKET all END CLOSE_BRACKET
    | OPEN_BRACKET END all END CLOSE_BRACKET
    ;
   
cond_body:
    body
    | END body
    | body END
    ;
// Κανόνας για στοιχεία στο body συνάρτησης (εδω οι δομές θέλουν δουλειά)
all:
    func_call DELIMITER
    | assignment DELIMITER
    | declaration DELIMITER
    | if_while_grammar
    | for_grammar
    | all func_call DELIMITER
    | all assignment DELIMITER
    | all declaration DELIMITER
    | all if_while_grammar
    | all for_grammar
    | all END func_call DELIMITER
    | all END assignment DELIMITER
    | all END declaration DELIMITER
    | all END if_while_grammar
    | all END for_grammar
    ;
// Κανόνας για την δομή if και while
if_while_grammar:
    // $$ = $1 θέτω με το keyword που πήρε για να ξέρω αμα έιναι η if για να ξέρω αν να βάλω την else
    keyword_val OPEN_PARENTHESIS num CLOSE_PARENTHESIS cond_body {if ($1 != 8 && $1 != 10) yyerror("Invalid if/while statement"); $$ = $1; cor_expr++;} 
    | keyword_val OPEN_PARENTHESIS var_oper CLOSE_PARENTHESIS cond_body {if ($1 != 8 && $1 != 10) yyerror("Invalid if/while statement"); $$ = $1; cor_expr++;}
    | if_while_grammar keyword_val cond_body{if ($2 != 9 || $1 != 8) yyerror("Invalid if/while statement"); cor_expr++;}
    | if_while_grammar END keyword_val cond_body{if ($3 != 9 || $1 != 8) yyerror("Invalid if/while statement"); cor_expr++;} 
    ;
// Τι μπορεί να πάρει η for για ανάθεση στο πρώτο και τρίτο όρο
help_for:
    var oper_val{if($2 != 17 && $2 != 18) yyerror("Invalid --/++ operator"); cor_expr++;}
    | var oper_val num{cor_expr++;}
    ;
//Κανόνας για την δομή for !!! ΘΕΛΕΙ ΔΟΥΛΕΙΑ ΑΚΟΜΑ
for_grammar:
    keyword_val OPEN_PARENTHESIS help_for DELIMITER expr DELIMITER help_for CLOSE_PARENTHESIS cond_body {if($1 != 11) yyerror("Invalid for statement"); cor_expr++;}
    | keyword_val OPEN_PARENTHESIS help_for DELIMITER var_oper DELIMITER help_for CLOSE_PARENTHESIS cond_body{if($1 != 11) yyerror("Invalid for statement"); cor_expr++;}
    ;

%%
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