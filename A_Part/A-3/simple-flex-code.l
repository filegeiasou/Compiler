/* File name:           simple-flex-code.l
   Description:         Lexical analyzer using Flex tool
   Authors:             Dimitrios Kontoulis(21390095),Aggelos Konstantinos Mentzelos(21390132),
                        Efrsosini Barsou(21390021),Enterisa Gkiozi(21390041),Leonidas Alexopoulos(21390006)
                        Compilers Lab, Department of Informatics and Computer Engineering,
                        University of West Attica
   Comments:            The current program implements (using flex) a simple lexical analyzer
                        recognizing spaces (space and tab), operators, identifiers, comments, strings,
                        integers, floats, octals and hexadecimal numbers for the Uni-C language
                        while handling the special characters of new line '\n' and 'EOF'. The lexical
                        analyzer accepts input and output file arguments.
Execution instructions: Give "make" without quotes in the current directory. Alternatively:
                        flex -o simple-flex-code.c simple-flex-code.l
                        gcc -o simple-flex-code simple-flex-code.c
                        ./simple-flex-code input.txt output.txt
*/

/* The reading of the file is limited to one file and terminates at the first EOF */
%option noyywrap

/* The following C code is for the definition of the required header files and variables.
   Anything between %{ and %} is transferred as is to the C file that Flex will create. */

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Header file containing all the required tokens */
#include "token.h"

/* Current line counter */
int line = 1;

%}

/* Below are the names of the tokens as well as the regular expressions assigned to them.
   Assigning names to regular expressions enables us to just use their name to express them,
   instead of writing the whole regular experssion which is way more complex. */ 

DELIMITER         ;
SYMBOLS           [#$^@,:?]	
NUMBERS           (0[xX][0-9A-F]+)|(0[0-7]+)|(([1-9][0-9]*|0)(\.[0-9]+)?([eE][-]?([1-9][0-9]*|0))?)
IDENTIFIERS       [a-zA-Z_]+[a-zA-Z_0-9]*
STRINGS           \"([^"\\]*(\\[\\n\"][^"\\]*)*)\"
COMMENTS          \/\*(.|\n)*\*\/|\/\/.*
OPERATORS         ([\+\-\*\/\=\!\<\>]=)|[\*\/\=\!\<\>%]|&{1,2}|\-{1,2}|\+{1,2}|(\|\|)
KEYWORDS           break|case|func|const|continue|do|double|else|float|for|if|int|long|return|short|sizeof|struct|switch|void|while
OPEN_BRACKET      \{
CLOSE_BRACKET     \}
OPEN_PARENTHESIS  \(
CLOSE_PARENTHESIS \)
OPEN_BRACE        \[
CLOSE_BRACE       \]
WHITESPACE        [ \t]+

/* For each pattern on the left that matches, the corresponding code is executed in the braces.
   The return command allows the return of a numerical value through the function yylex() */

%%

{DELIMITER}         { return DELIMITER; }
{NUMBERS}           { return NUMBERS; }
{STRINGS}           { return STRINGS; }
{COMMENTS}          { 
                        /* Count the number of lines in a comment */
                        if (yytext[1] == '*') {
                                int i = 2; // Start from the character after '*'
                                while (yytext[i])
                                        if (yytext[i++] == '\n')
                                                line++;
                        }
                    }
{WHITESPACE}        { /* DONT RETURN SOMETHING */ }
{OPERATORS}         { return OPERATORS; }
{KEYWORDS}          { return KEYWORD; }
{IDENTIFIERS}       { return IDENTIFIERS; }
{OPEN_BRACKET}      { return OPEN_BRACKET; }
{CLOSE_BRACKET}     { return CLOSE_BRACKET; }
{OPEN_PARENTHESIS}  { return OPEN_PARENTHESIS; }
{CLOSE_PARENTHESIS} { return CLOSE_PARENTHESIS; }
{OPEN_BRACE}        { return OPEN_BRACE; }
{CLOSE_BRACE}       { return CLOSE_BRACE; }
{SYMBOLS}           { return SYMBOLS; }
\n                  { line++; printf("\n"); }
<<EOF>>		    { printf("#END-OF-FILE#\n"); exit(0); }
.                   { return UNKNOWN_TOKEN; }

%%

/* Array with all the tokens that are defined in the token.h file */
char *tname[17] = {"DELIMITER","NUMBERS","STRINGS","OPERATORS","IDENTIFIERS","SYMBOLS","COMMENTS","KEYWORD","OPEN_BRACKET","CLOSE_BRACKET","OPEN_PARENTHESIS","CLOSE_PARENTHESIS","OPEN_BRACE","CLOSE_BRACE","WHITESPACE","UNKNOWN TOKEN","EOF"};

/* The main function : This code will be automatically placed in the C file that Flex will create
   and will be the starting point of the lexical analyzer application. */

int main(int argc, char **argv){
        int token;

        /* Definitions are checked for the correct number of arguments. If the arguments are 3, 
           the program reads from the file of the 2nd argument and writes to the file of the 3rd argument.
           If the arguments are 2, the program reads from the file of the 2nd argument and writes the output to the screen.
           The 1st argument (argv[0]) is always the name of the executable */

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

        /* The yylex function reads characters from the input file and tries to recognize tokens.
           The tokens the the function recognizes are the ones that are defined between the %% and %%.
           If the code corresponding to a pattern contains the command 'return VALUE', then yylex() returns
           the value that is assigned to that token. The return values of each token can be seen in the token.h file */

        while( (token=yylex()) >= 0){
                /* For each token recognized, in prints the line number that it was found
                   as well as it's name and it's assigned value (for example DELIMITER (NAME) 1 (VALUE)). */
                fprintf(yyout, "\tLine=%d, token=%s, value=\"%s\"\n", line, tname[token-1], yytext);
        }
        return 0;
}