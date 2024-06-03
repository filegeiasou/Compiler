%{
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>
        #include <string.h>
        extern char *yytext;
        void yyerror(char *);
        int yylex(void);
%}

%union {
    double dval;
    char *sval;
}

%token <dval> INTEGER FLOAT
%token <sval> OPERATORS
%token DELIMITER STRINGS IDENTIFIERS KEYWORD SYMBOL
%token OPEN_BRACKET CLOSE_BRACKET OPEN_PARENTHESIS CLOSE_PARENTHESIS
%token OPEN_BRACE CLOSE_BRACE UNKNOWN_TOKEN
%token END

%type <dval> exp
%type <sval> operator
%start program

%%

program:
    | program Line
    ;

Line:
    END
    | exp END { printf("Result: %f\n", $1); }
    ;

operator:
    OPERATORS { $$ = strdup(yytext); printf("Operator: %s\n", $$);}
    ;

exp:
    INTEGER { $$ = atof(yytext); }
    | FLOAT { $$ = atof(yytext); }
    | exp operator exp {
        if (!strcmp($2, "+"))
            $$ = $1 + $3;
        else if (!strcmp($2, "-"))
            $$ = $1 - $3;
        else if (!strcmp($2, "*"))
            $$ = $1 * $3;
        else if (!strcmp($2, "/"))
            $$ = $1 / $3;
        else if (!strcmp($2, "^"))
            $$ = pow($1, $3);
    }
    ;

%%

void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    if (yyparse() == 0)
        fprintf(stderr, "Successful parsing.\n");
    else
        fprintf(stderr, "Error found.\n");
    return 0;
}