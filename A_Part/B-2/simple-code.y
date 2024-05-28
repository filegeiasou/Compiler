/* Onoma arxeiou:       simple-bison-code.y
   Perigrafh:           Ypodeigma gia anaptyksh syntaktikou analyth me xrhsh tou ergaleiou Bison
   Syggrafeas:          Ergasthrio Metaglwttistwn, Tmhma Mhxanikwn Plhroforikhs kai Ypologistwn,
                        Panepisthmio Dytikhs Attikhs
   Sxolia:              To paron programma ylopoiei (me th xrhsh Bison) enan aplo syntaktiko analyth
			pou anagnwrizei thn prosthesh akeraiwn arithmwn (dekadikou systhmatos) & metablhtwn
			kai ektypwnei to apotelesma sthn othonh (thewrontas oti oi metablhtes exoun
			panta thn timh 0). Leitourgei autonoma, dhladh xwris Flex kai anagnwrizei kena
			(space & tab), akeraious (dekadikou systhmatos) kai onomata metablhtwn ths glwssas
			Uni-C enw diaxeirizetai tous eidikous xarakthres neas grammhs '\n' (new line)
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
	#include <stdlib.h>
	#define YYSTYPE int
%}

/* Orismos twn anagnwrisimwn lektikwn monadwn. */
%token INTCONST VARIABLE PLUS NEWLINE /* FILL ME */

/* Orismos proteraiothtwn sta tokens */
%left PLUS

%%

/* Orismos twn grammatikwn kanonwn. Kathe fora pou antistoixizetai enas grammatikos
   kanonas me ta dedomena eisodou, ekteleitai o kwdikas C pou brisketai anamesa sta
   agkistra. H anamenomenh syntaksh einai:
				onoma : kanonas { kwdikas C } */
program:
        program a1 NEWLINE { printf("%d\n", $2); }
        |
        ;
a1:
        INTCONST         { $$ = $1; }
		| VARIABLE	 { $$ = $1; }
        | a1 PLUS a1 { $$ = $1 + $3; }
/* FILL ME */
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
int main(void)  {

    int res =yyparse();
	if(res==0)
		printf("Syntax OK\n");
	else
		printf("Syntax Error\n");
    
	
	return 0;
}
