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

void handle_comment(); // definition of function to handle multiline comments

int line = 1; // Current line counter

%}

/* Name and corresponding regular expressions (in canonical form).
   After this, the names can be used (left) instead of the
   particularly long and cumbersome, canonical expressions */

DELIMITER         ;
SYMBOLS           [#$^@,:?]	
NUMBERS           (0[xX][0-9A-F]+)|(0[0-7]+)|(([1-9][0-9]*|0)(\.[0-9]+)?([eE][-]?([1-9][0-9]*|0))?)
IDENTIFIERS       [a-zA-Z_]+[a-zA-Z_0-9]*
STRINGS           \"([^"\\]*(\\[\\n\"][^"\\]*)*)\"
LINE_COMMENT      \/\/.*
OPERATORS         ([\+\-\*\/\=\!\<\>]=)|[\*\/\=\!\<\>%]|&{1,2}|\-{1,2}|\+{1,2}|(\|\|)
KEYWORDS          break|case|func|const|continue|do|double|else|float|for|if|int|long|return|short|sizeof|struct|switch|void|while
OPEN_BRACKET      \{
CLOSE_BRACKET     \}
OPEN_PARENTHESIS  \(
CLOSE_PARENTHESIS \)
OPEN_BRACE        \[
CLOSE_BRACE       \]
WHITESPACE        [ \t]+
COMMENT1          \/\*[^*]*\*\/


/* For each pattern on the left that matches, the corresponding code is executed in the braces.
   The return command allows the return of a numerical value through the function yylex() */

%%
"/*"                { handle_comment(); }
{LINE_COMMENT}      { /* ignore line comments */}
{DELIMITER}         { return DELIMITER; }
{NUMBERS}           { return NUMBERS; }
{STRINGS}           { return STRINGS; }
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
<<EOF>>             { printf("#END-OF-FILE#\n"); exit(0); }
.                   { return UNKNOWN_TOKEN; }

%%


/* Υπήρξαν κάποια προβλήματα κατά τη υλοποίηση του κώδικα για την εύρεση των σχολίων.
   Συγκεκριμένα το πρόβλημα αφορούσε τη σωστή εύρεση και διαχείριση των σχολίων πολλαπλής γραμμής.
   Αν είχε τοποθετηθεί σχόλιο πολλαπλών γραμμών, έπειτα ακολουθούσε μία αλληλουχία από λεκτικές μονάδες (κώδικα)
   και μετά ξαναυπήρχε σχόλιο πολλαπλών	γραμμών, τότε ο λεκτικός αναλυτής δεν εντόπιζε τον κώδικα που ήταν ανάμεσα στα σχόλια.
   Αυτό το πρόβλημα με τη σειρά του μας δημιούργησε το πρόβλημα της λανθασμένης μέτρησης του αριθμού των γραμμών
   που όντως αποτελούν κομμάτι κώδικα. Για την καλύτερη κατανόηση του προβλήματος, παρακάτω παρατίθεται ένα
   παράδειγμα το μας προκαλούσε το πρόβλημα που προαναφέρθηκε. Το παράδειγμα είναι μία απλοποιημένη μορφή
   του κώδικα που έχει δημιουργηθεί στο input.txt αρχείο.

      /* sample
         multiple line
         comment */
 
      int main(int argc, char** argv)
      {                
          // sample code that will be ignored
          // due to the problem described
          int a = 5;
          int b = 10;

          /* another sample
             multiple line
             comment */

          // This will be the first lexical unit recognized by the analyzer
          printf("Sum: %d", a+b);

          return 0;
      }

   Οπότε το πρόβλημα ήταν ότι ο λεκτικός αναλυτής δεν έβρισκε τα σχόλια πολλαπλών γραμμών ως μία μονάδα.
   Όπως φαίνεται και παραπάνω, κανονικά θα έπρεπε το πρώτο σχόλιο να ήταν μία μονάδα μόνο του, και το δεύτερο άλλη.
   Αλλά στο πρόβλημα αυτά θεωρούνταν ένα σχόλιο, επειδή απλώς βρέθηκε το closing tag '*/' των σχολίων.

   Για αυτό και παρακάτω αναπτύχθηκε η συνάρτηση handle_comment η οποία επιλύει το παραπάνω πρόβλημα.
   Ο κώδικας της συνάρτησης αντλήθηκε απο το αρχείο "Παραδειγματα FLEX αρχείων" το οποίο υπάρχει στο E-Class
   στα έγγραφα του εργαστηρίου. Συγκεκριμένα το αρχείο μέσα έχει ένα κομμάτι κώδικα με τίτλο
   "the following is one way to eat up C comments".
 */



/* Implementation of function that handles multi-line comments

void handle_comment()
{
        /* this function handles multi-line comments 
           It detects them, but it does not take them into account
           and handles the line counting appropriately*/


        int c; // current character that is read

        for (;;)
        {
                // while character read is not '*' (indicating comment end) or EOF
                while ((c = input()) != '*' && c != EOF)
                {
                        // if it's a new line
                        if (c == '\n')
                        {
                                ++yylineno; /* increment line number */
                                line++;
                        }
                } /* eat up text of comment. */
                
                // if there is a '*' found, indicating maybe the end of the comment
                if (c == '*')
                {
                        /* the loop below detects if there are many
                           '*' symbols in a row, basically skipping them
                           and not regarding them as the end of the comment. */

                        while ((c = input ()) == '*')
                        {
                                if (c == '\n') 
                                {
                                        ++yylineno; /* increment line number */
                                        line++;
                                }
                        }

                        if (c == '/') break; /* found the end of the comment */
                }

                // if there is EOF contained in the multiple line comment
                if (c == EOF)
                {
                        printf ("Error: EOF in comment.\n");
                        break;
                }
        }
}

/* Array with all the tokens that are defined in the token.h file */
char *tname[17] = {"DELIMITER","NUMBERS","STRINGS","OPERATORS","IDENTIFIERS","SYMBOLS","COMMENTS","KEYWORD","OPEN_BRACKET","CLOSE_BRACKET","OPEN_PARENTHESIS","CLOSE_PARENTHESIS","OPEN_BRACE","CLOSE_BRACE","WHITESPACE","UNKNOWN TOKEN","EOF"};

/* The code of the main function will be automatically placed in the C file that Flex will create
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