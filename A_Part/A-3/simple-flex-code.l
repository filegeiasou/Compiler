/* Onoma arxeiou:       simple-flex-code.l
   Perigrafh:           Ypodeigma gia anaptyksh lektikou analyth me xrhsh tou ergaleiou Flex
   Syggrafeas:          Ergasthrio Metaglwttistwn, Tmhma Mhxanikwn Plhroforikhs kai Ypologistwn,
                        Panepisthmio Dytikhs Attikhs
   Sxolia:              To paron programma ylopoiei (me th xrhsh flex) enan aplo lektiko analyth
			pou anagnwrizei kena (space kai tab) kai akeraious (dekadikou systhmatos
			mono!) gia th glwssa Uni-C enw diaxeirizetai tous eidikous xarakthres
			neas grammhs '\n' (new line) kai 'EOF' (end of file). Yparxoun anafores
			gia thn anagnwrish metablhtwn, me ton pragmatiko kwdika na exei antikatastathei
			apo to lektiko FILL ME wste na symplhrwthei apo esas. Proairetika o lektikos
			analyths dexetai orismata arxeiwn gia eisodo kai eksodo.
   Odhgies ekteleshs:   Dinete "make" xwris ta eisagwgika ston trexonta katalogo. Enallaktika:
			flex -o simple-flex-code.c simple-flex-code.l
                        gcc -o simple-flex-code simple-flex-code.c
                        ./simple-flex-code
*/

/* H anagnwsh periorizetai se ena mono arxeio kai termatizei sto prwto EOF */
%option noyywrap


/* Kwdikas C gia orismo twn apaitoumenwn header files kai twn metablhtwn.
   Otidhpote anamesa sta %{ kai %} metaferetai autousio sto arxeio C pou
   tha dhmiourghsei to Flex. */

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Header file pou periexei lista me ola ta tokens */
#include "token.h"

/* Orismos metrhth trexousas grammhs */
int line = 1;
int i=0;

%}


/* Onomata kai antistoixoi orismoi (ypo morfh kanonikhs ekfrashs).
   Meta apo auto, mporei na ginei xrhsh twn onomatwn (aristera) anti twn,
   synhthws idiaiterws makroskelwn kai dysnohtwn, kanonikwn ekfrasewn */

DELIMITER         ;
SYMBOLS           [#$^@]	
NUMBERS           (0[xX][0-9A-F]+)|(0[0-7]+)|(([1-9][0-9]*|0)(\.[0-9]+)?([eE][-]?([1-9][0-9]*|0))?)
IDENTIFIERS       [a-zA-Z_]+[a-zA-Z_0-9]*
STRINGS           \"([^"\\]*(\\[\\n\"][^"\\]*)*)\"
COMMENTS          \/\*(.|\n)*\*\/|\/\/.*
OPERATORS         ([\+\-\*\/\=\!\<\>]=)|[\*\/\=\!\<\>%]|&{1,2}|\-{1,2}|\+{1,2}|(\|\|)
KEYWORD           FILLME
OPEN_BRACKET      \{
CLOSE_BRACKET     \}
OPEN_PARENTHESIS  \(
CLOSE_PARENTHESIS \)
OPEN_BRACE        \[
CLOSE_BRACE       \]
WHITESPACE        [ \t]+


/* Gia kathe pattern (aristera) pou tairiazei ekteleitai o antistoixos
   kwdikas mesa sta agkistra. H entolh return epitrepei thn epistrofh
   mias arithmhtikhs timhs mesw ths synarthshs yylex() */

%%

{DELIMITER}     { return DELIMITER; }
{NUMBERS}       { return NUMBERS; }
{STRINGS}       { return STRINGS; }
{COMMENTS}      { 
                        if(yytext[1]=='*') 
                        {       
                                while(yytext[i]!='\0')
                                {
                                        if(yytext[i]=='\n')
                                        {
                                                line++;
                                                
                                        }
                                        i++;
                                }
                        }
                }
{WHITESPACE}    { /* FILL ME */ }
{OPERATORS}     { return OPERATORS; }
{IDENTIFIERS}   { 
                    if      ( !strcmp(yytext,"break"   ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"case"    ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"func"    ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"const"   ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"continue") )    return KEYWORD;
                    else if ( !strcmp(yytext,"do"      ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"double"  ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"else"    ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"float"   ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"for"     ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"if"      ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"int"     ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"long"    ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"return"  ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"short"   ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"sizeof"  ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"struct"  ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"switch"  ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"void"    ) )    return KEYWORD;
                    else if ( !strcmp(yytext,"while"   ) )    return KEYWORD;
                    else return IDENTIFIERS;
                }
{OPEN_BRACKET}  { return OPEN_BRACKET; }
{CLOSE_BRACKET} { return CLOSE_BRACKET; }
{OPEN_PARENTHESIS} { return OPEN_PARENTHESIS; }
{CLOSE_PARENTHESIS} { return CLOSE_PARENTHESIS; }
{OPEN_BRACE}    { return OPEN_BRACE; }
{CLOSE_BRACE}   { return CLOSE_BRACE; }
{SYMBOLS}       { return SYMBOLS; }
\n              { line++; printf("\n"); }
<<EOF>>		{ printf("#END-OF-FILE#\n"); exit(0); }
.               { return UNKNOWN_TOKEN; }

%%

/* Pinakas me ola ta tokens se antistoixia me tous orismous sto token.h */
char *tname[17] = {"DELIMITER","NUMBERS","STRINGS","OPERATORS","IDENTIFIERS","SYMBOLS","COMMENTS","EOF","KEYWORD","OPEN_BRACKET","CLOSE_BRACKET","OPEN_PARENTHESIS","CLOSE_PARENTHESIS","OPEN_BRACE","CLOSE_BRACE","WHITESPACE","UNKNOWN TOKEN"};


/* H synarthsh main: O kwdikas autos tha topotheththei autousios sto
   programma C pou tha dhmiourghsei to Flex kai tha apotelesei to arxiko
   shmeio ekteleshs ths efarmoghs tou lektikou analyth. */

int main(int argc, char **argv){
        int token;

        /* Ginetai o elegxos twn orismatwn ths grammhs entolwn. Ean ta
           orismata einai 3, to programma diabazei apo to arxeio tou 2ou
           orismatos kai grafei sto arxeio tou 3ou. Ean ta orismata einai
           2 diabazei apo to arxeio tou 2ou kai grafei sthn othonh.
           Ypenthymizetai oti to 1o orisma (argv[0]) sth C einai to onoma
           tou idiou tou ektelesimou arxeiou. */

        if(argc == 3){
                if(!(yyin = fopen(argv[1], "r"))) {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                if(!(yyout = fopen(argv[2], "w"))) {
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
        else if(argc == 2){
                if(!(yyin = fopen(argv[1], "r"))) {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
        }

        /* H synarthsh yylex diabazei xarakthres apo thn eisodo kai prospathei
           na angnwrisei tokens. Ta tokens pou anagnwrizei einai auta pou exoun
           oristei sto paron arxeio, anamesa sta %% kai %%. An o kwdikas pou
           antistoixei se kapoio pattern periexei thn entolh 'return TIMH', h
           yylex() epistrefei thn timh auth h opoia kai apothhkeyetai sth
           metablhth token. */

        while( (token=yylex()) >= 0){
                /* Gia kathe token pou anagnwristhke, ektypwnetai h grammh pou auto
                   brethhke kathws kai to onoma tou mazi me thn timh tou. */
                fprintf(yyout, "\tLine=%d, token=%s, value=\"%s\"\n", line, tname[token-1], yytext);
        }
        return 0;
}
