%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simple-code.tab.h"  // Include the Bison header
void handle_comment(); // definition of function to handle multiline comments

int line = 1; // Current line counter

%}

/* Regular expression definitions */
DELIMITER         ;
SYMBOL            ,
INTEGER           ([1-9][0-9]*|0)|(0[xX][0-9A-F]+)|(0[0-7]+)
FLOAT             (([1-9][0-9]*|0)(\.[0-9]+)?([eE][-]?([1-9][0-9]*|0))?)
IDENTIFIERS       [a-zA-Z_]+[a-zA-Z_0-9]*
STRINGS           \"(\\[\\n\"]|[^\n\\\"])*\"
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

%%
"/*"                { handle_comment(); }
{LINE_COMMENT}      { /* ignore line comments */ }
{DELIMITER}         { return DELIMITER; }
{INTEGER}           { return INTEGER; }
{FLOAT}             { return FLOAT; }
{STRINGS}           { return STRINGS; }
{WHITESPACE}        { /* don't return anything */ }
{OPERATORS}         { return OPERATORS; }
{KEYWORDS}          { return KEYWORD; }
{IDENTIFIERS}       { return IDENTIFIERS; }
{OPEN_BRACKET}      { return OPEN_BRACKET; }
{CLOSE_BRACKET}     { return CLOSE_BRACKET; }
{OPEN_PARENTHESIS}  { return OPEN_PARENTHESIS; }
{CLOSE_PARENTHESIS} { return CLOSE_PARENTHESIS; }
{OPEN_BRACE}        { return OPEN_BRACE; }
{CLOSE_BRACE}       { return CLOSE_BRACE; }
{SYMBOL}            { return SYMBOL; }
\n                  { line++; return END; }
<<EOF>>             { printf("#END-OF-FILE#\n"); exit(0); }
.                   { return UNKNOWN_TOKEN; }

%%

void handle_comment()
{
    register int c;
    for (;;)
    {
        while ((c = input()) != '*' && c != 0)
            if (c == '\n') line++;

        if (c == '*')
        {
            while ((c = input()) == '*');
            if (c == '/') break;
        }

        if (c == 0)
        {
            printf("Error: EOF in comment.\n");
            break;
        }
    }
}