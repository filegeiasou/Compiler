func_call:
    keyword_val OPEN_PARENTHESIS IDENTIFIERS CLOSE_PARENTHESIS 
        {if($1 != 3) yyerror("Invalid function call");}
    | keyword OPEN_PARENTHESIS IDENTIFIERS SYMBOL IDENTIFIERS CLOSE_PARENTHESIS {
        if(!strcmp($1, "cmp"))
                $$ = $1;
        else yyerror("Other function was called"); // Case that we have
    }
    | keyword OPEN_PARENTHESIS STRINGS SYMBOL STRINGS CLOSE_PARENTHESIS {
        if(!strcmp($1, "cmp"))
                $$ = $1;
    }
    | keyword OPEN_PARENTHESIS STRINGS SYMBOL IDENTIFIERS CLOSE_PARENTHESIS {
        if(!strcmp($1, "cmp"))
                $$ = $1;
    }
    | keyword OPEN_PARENTHESIS IDENTIFIERS SYMBOL STRINGS CLOSE_PARENTHESIS {
        if(!strcmp($1, "cmp"))
                $$ = $1;
    }
    ;


// COMMA FOR ASSIGNMENT
/* identifier_sym:
    var
    | identifier_sym SYMBOL var {}
    ; */
/* integer_sym:
    INTEGER
    | integer_sym SYMBOL INTEGER {}
    ; */
// Κανόνας για την συνάρτηση scan