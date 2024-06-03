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
%type <sval> eq_oper
%type <dval> compare

%left OPERATORS
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
    | num END { printf("Number: %f\n", $1); }
    | operator END {printf("Operator: %s\n", $1);}
    | declaration END {printf("Valid declaration of type %s\n",$1);}
    | assignment END {printf("Valid assignment of %f\n", $1);}
    | compare END {printf("Comparison: %f\n", $1);}
    ;
operator:
    OPERATORS { $$ = strdup(yytext); cor_words++;}
    ;
keyword: 
    KEYWORD { $$ = strdup(yytext); cor_words++;}
    ;
eq_oper:
    operator { if(!strcmp($1, "=")) $$ = $1;}
    ;
identifier_sym:
    IDENTIFIERS
    | IDENTIFIERS SYMBOL{}
    ;
num:
    INTEGER { $$ = atof(yytext); cor_words++; }
    | FLOAT { $$ = atof(yytext); cor_words++;}
    | IDENTIFIERS { $$ = 0; cor_words++;}
    | num operator num { 
        if (!strcmp($2, "+"))
            $$ = $1 + $3;
        else if (!strcmp($2, "-"))
            $$ = $1 - $3;
        else if (!strcmp($2, "*"))
            $$ = $1 * $3;
        else if (!strcmp($2, "/"))
            $$ = $1 / $3;
     } 
    | operator num { 
        if (!strcmp($1, "-"))
            $$ = -$2;
        else if (!strcmp($1, "+"))
            $$ = $2;
    }
    ;
declaration:
    keyword IDENTIFIERS DELIMITER {$$ = $1;}
    | keyword IDENTIFIERS eq_oper num DELIMITER { 
        if (strcmp($1, "int") && strcmp($1, "float")) yyerror("Invalid type");
        $$ = $1}
    | keyword IDENTIFIERS eq_oper 
    ;
assignment:
    IDENTIFIERS eq_oper num DELIMITER {$$ = $3;}
    | identifier_sym IDENTIFIERS eq_oper num DELIMITER {$$ = $4;} //multiple assignments -> only works for two for now
    ;
compare:
    num operator num {  
        if (!strcmp($2, "=="))
            $$ = $1 == $3;
        else if (!strcmp($2, "!="))
            $$ = $1 != $3;
        else if (!strcmp($2, ">"))
            $$ = $1 > $3;
        else if (!strcmp($2, "<"))
            $$ = $1 < $3;
        else if (!strcmp($2, ">="))
            $$ = $1 >= $3;
        else if (!strcmp($2, "<="))
            $$ = $1 <= $3;
    }
    ;

%%
/* H synarthsh yyerror xrhsimopoieitai gia thn anafora sfalmatwn. Sygkekrimena kaleitai
   apo thn yyparse otan yparksei kapoio syntaktiko lathos. Sthn parakatw periptwsh h
   synarthsh epi ths ousias typwnei mhnyma lathous sthn othonh. */
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
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