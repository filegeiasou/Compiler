/* 
   File name:           syntax_analyzer.y

   Description:         Syntax analyzer using Bison Tool

   Authors:             Dimitrios Kontoulis(21390095), Aggelos Konstantinos Mentzelos(21390132),
                        Efrsosini Barsou(21390021), Leonidas Alexopoulos(21390006)
                        Compilers Lab, Department of Informatics and Computer Engineering,
                        University of West Attica

   Comments:            The program implemented below implements (using the Bison tool) a syntax analyzer.
                        It checks if the code given as input to it is, in terms of syntax, correct. It works
                        with the lexer (Lexical Analyzer) in order to retrieve the required tokens for the analysis.
                        When the analysis is over, it prints a report that contains some details about the whole
                        analysis procedure, such as what is correct and what isn't. It can identify the following:
                            * Variable declaration and assignment
                            * Arrays
                            * Built-in functions which are scan, len, cmp and print.
                            * Custom, User-defined functions.
                            * Comparisons
                            * Array Concatenation
                            * Conditional Statements like if
                            * while and for loops

Execution Instructions: Type make into the console. Alternatively you can type the following commands:
                            bison -d syntax_analyzer.y
                            flex lexical_analyzer.l
                            gcc -o syntax_analyzer syntax_analyzer.tab.c lex.yy.c -lm
                            ./syntax_analyzer

                        If you want to give a text file as input, you should either
                            1) change the Makefile and type "make" again, or
                            2) modify the commands above like so:
                                bison -d syntax_analyzer.y
                                flex lexical_analyzer.l
                                gcc -o syntax_analyzer syntax_analyzer.tab.c lex.yy.c -lm
                                ./syntax_analyzer input_file.txt
    
    Unimplemented syntax rules:
                        - 2.1.2.1 Κανόνες σύνδεσης φυσικών γραμμών
*/

%{
        /* Orismoi kai dhlwseis glwssas C. Otidhpote exei na kanei me orismo h arxikopoihsh
        metablhtwn & synarthsewn, arxeia header kai dhlwseis #define mpainei se auto to shmeio */

        // Including all the necessary C libraries
        #include <stdio.h>
        #include <math.h>
        #include <stdlib.h>
        #include <string.h>
        
        // Definition of function and variables required for the program.
        extern char *yytext;
        extern void yyerror(char *);
        extern int yylex(void);
        void print_report(void);
        extern FILE *yyin;

        extern int line; // line counter
        // Counters for the comma (,) symbol (defined as SYMBOL in the lexer)
        int var_com = 0, val_com = 0, val_arr_com = 0, val_ass_com = 0;
        char* func_arg;
        int errflag = 0;   // error counter
        int cor_words;     // correct word counter (flex)
        int cor_expr  = 0; // correct expressions counter
        int inc_words = 0; // incorrect words counter
        int inc_expr  = 0; // incorrect expressions counter
%}

/* Definition of the identifiable lectical units. */
%union {
    int ival;
    double dval;
    char *sval;
}

%token <dval> INTEGER FLOAT
%token <sval> OPERATORS IDENTIFIERS STRINGS KEYWORD
%token SYMBOL OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_BRACE CLOSE_BRACE END EOP UNKNOWN_TOKEN DELIMITER OPEN_BRACKET CLOSE_BRACKET

%type <dval> num assignment expr help_num
%type <sval> operator keyword declaration var str func_decl
%type <ival> oper_val keyword_val scan_len_print cmp_print arr if_while_grammar help_for

/* Definition of the priorities between operations */
%left  '+' '-'
%left  '*' '/'
%right '='
%start program

%%

/* Between the two percentage signs (%%) are all the grammar rules for the syntax analysis.
   Everytime there is a match for a grammar rule, the C code inside the brackets is executed (if there is code).
   The expected syntax is:
        name : grammar rule { C code } */
program:
    | program valid
    ;
valid:
    END
    | declaration DELIMITER END {printf("Valid declaration\n");}
    | assignment  DELIMITER END {printf("Valid assignment\n");}
    | func_call   DELIMITER END {printf("Valid function call\n");}
    | func_decl                 {printf("Valid function declaration\n");}
    | if_while_grammar          {printf("Valid if/while statement\n");}
    | for_grammar               {printf("Valid for statement\n");}
    | EOP                       {print_report();}
    | UNKNOWN_TOKEN             {inc_words++;}
    ;

keyword: 
    KEYWORD { $$ = strdup(yytext); cor_words++;}
    ;

operator:
    OPERATORS { $$ = strdup(yytext); cor_words++;}
    ;

// Rule for keywords.
keyword_val:
    keyword{
        // regarding the type of variables.
        if(!strcmp($1, "int") )  $$ = 1;   
        if(!strcmp($1, "float")  || !strcmp($1, "double")) $$ = 13;
        if(!strcmp($1, "const")  || !strcmp($1, "long"))   $$ = 2; // these regard the keyword the is before the type and they are assigned a different value
        
        // for functions
        if(!strcmp($1, "scan"))  $$ = 3;
        if(!strcmp($1, "len"))   $$ = 4;
        if(!strcmp($1, "cmp"))   $$ = 5;
        if(!strcmp($1, "print")) $$ = 6;
        if(!strcmp($1, "func"))  $$ = 7;
        
        // for conditionals
        if(!strcmp($1, "if"))    $$ = 8;
        if(!strcmp($1, "else"))  $$ = 9;
        if(!strcmp($1, "while")) $$ = 10;
        if(!strcmp($1, "for"))   $$ = 11;
        if(!strcmp($1, "void"))  $$ = 12;
    }
    ;

// Rule for operators. Every operator is assigned a different value,
// so it can be recognized in different parts of program below.
oper_val:
    operator { 
        if (!strcmp($1, "+"))  $$ = 1;
        if (!strcmp($1, "-"))  $$ = 2;
        if (!strcmp($1, "*"))  $$ = 3;
        if (!strcmp($1, "/"))  $$ = 4;
        if (!strcmp($1, "==")) $$ = 5;
        if (!strcmp($1, "!=")) $$ = 6;
        if (!strcmp($1, ">"))  $$ = 7;
        if (!strcmp($1, "<"))  $$ = 8;
        if (!strcmp($1, ">=")) $$ = 9;
        if (!strcmp($1, "<=")) $$ = 10;  
        if (!strcmp($1, "%"))  $$ = 11;
        if (!strcmp($1, "="))  $$ = 12;
        if (!strcmp($1, "+=")) $$ = 13;
        if (!strcmp($1, "-=")) $$ = 14;
        if (!strcmp($1, "*=")) $$ = 15;
        if (!strcmp($1, "/=")) $$ = 16;
        if (!strcmp($1, "++")) $$ = 17;
        if (!strcmp($1, "--")) $$ = 18;
        if (!strcmp($1, "&"))  $$ = 19;
    }
    ;

// Rules for expressions
expr:
    num oper_val num {
        switch($2) {
            case 1:  $$ = $1 + $3; break;
            case 2:  $$ = $1 - $3; break;
            case 3:  $$ = $1 * $3; break;
            case 4:  $$ = $1 / $3; break;
            case 5:  $$ = $1 == $3; break;
            case 6:  $$ = $1 != $3; break;
            case 7:  $$ = $1 > $3; break;
            case 8:  $$ = $1 < $3; break;
            case 9:  $$ = $1 >= $3; break;
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
            case 1:  $$ = $1 + $3; break;
            case 2:  $$ = $1 - $3; break;
            case 3:  $$ = $1 * $3; break;
            case 4:  $$ = $1 / $3; break;
            case 5:  $$ = $1 == $3; break;
            case 6:  $$ = $1 != $3; break;
            case 7:  $$ = $1 > $3; break;
            case 8:  $$ = $1 < $3; break;
            case 9:  $$ = $1 >= $3; break;
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

// Rules regarding numbers
num:
    INTEGER { $$ = atof(yytext); cor_words++;} 
    | FLOAT { $$ = atof(yytext); cor_words++;}
    | expr  { $$ = $1;}
    ;

// Rule for variables
var: 
    IDENTIFIERS { $$ = strdup(yytext); cor_words++;}
    ;

// Rules for operations between variables
var_oper:
    var oper_val num    {} // e.g a + 1 
    | num oper_val var  {} // e.g 1 + a
    | var oper_val var  {} // e.g a + b
    | expr oper_val var {} // e.g a + b *c
    ;

// Rule for strings
str:
    STRINGS { $$ = strdup(yytext); cor_words++;}
    ;

// Βοηθητικοί κανόνες για αριθμούς (INTEGER, FLOAT) με κόμματα
// Assisting rules for number (INTEGER, FLOAT) with commas (SYMBOL)
help_int:
    INTEGER
    | INTEGER SYMBOL help_int {val_com++;}
    ;
help_float:
    FLOAT
    | FLOAT SYMBOL help_float {val_com++;}
    ;

// Rules for arrays
arr:    
    OPEN_BRACE help_int CLOSE_BRACE  { $$ = 1; val_com=0; }
    | OPEN_BRACE help_float CLOSE_BRACE  { $$ = 13; val_com=0;}
    | OPEN_BRACE help_str CLOSE_BRACE   { $$ = 2; val_com=0;}
    | var OPEN_BRACE INTEGER CLOSE_BRACE { $$ = 3; val_com=0;} 
    | arr oper_val arr {if ($2 != 1) yyerror("Invalid arr"); $$ = 4; val_com=0;} //concat array
    ;

// Assisting rules for the comma symbol (str, numbers, variables, arrays).
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
help_var_oper:
    var_oper
    | var_oper SYMBOL help_var_oper {var_com++;}
    ;
    
// The rule below regards different types of assignment.
// When we want to assign multiple variables in one line.
// For example x1, list1, string = 0, [A, B, C], "HELLO";
// ** NOTE: This is for the right side of the equation.
// The whole assignment rule is mentioned below.
help_assign:
    arr SYMBOL num {val_ass_com++;}
    | arr SYMBOL str {val_ass_com++;}
    | arr SYMBOL var {val_ass_com++;}
    | arr SYMBOL var_oper {val_ass_com++;}

    | var SYMBOL num {val_ass_com++;}
    | var SYMBOL arr {val_ass_com++;}
    | var SYMBOL str {val_ass_com++;}
    | var SYMBOL var_oper {val_ass_com++;}

    | str SYMBOL num {val_ass_com++;}
    | str SYMBOL var {val_ass_com++;}
    | str SYMBOL arr {val_ass_com++;}
    | str SYMBOL var_oper {val_ass_com++;}

    | num SYMBOL str {val_ass_com++;}
    | num SYMBOL var {val_ass_com++;}
    | num SYMBOL arr {val_ass_com++;}
    | num SYMBOL var_oper {val_ass_com++;}

    | var_oper SYMBOL str {val_ass_com++;}
    | var_oper SYMBOL var {val_ass_com++;}
    | var_oper SYMBOL arr {val_ass_com++;}
    | var_oper SYMBOL num {val_ass_com++;}

    | help_assign SYMBOL num {val_ass_com++;}
    | help_assign SYMBOL str {val_ass_com++;}
    | help_assign SYMBOL var {val_ass_com++;}
    | help_assign SYMBOL arr {val_ass_com++;}
    | help_assign SYMBOL var_oper {val_ass_com++;}
    ;

// The group of rules below regard the declaration of a variable.
declaration:
    
    // This covers the case of basic variable declation. e.g int varName
    keyword_val var {if($1 != 1 && $1 != 13) yyerror("Invalid declaration type"); cor_expr++;} // 1, 13 int, float, double
    
    // The rules below identify the assignation of a variable with a number
    // as well as the assignation of a variable with another variable.
    | keyword_val var oper_val INTEGER { if ($1 != 1 && $1 != 13 || $3 != 12) yyerror("Invalid declaration type"); cor_expr++;} // int a = 1
    | keyword_val var oper_val FLOAT { if ($1 != 13 || $3 != 12) yyerror("Invalid declaration type"); cor_expr++;} // float a = 1.1
    | keyword_val var oper_val var { if ($1 != 1 && $1 != 13 || $3 != 12) yyerror("Invalid declaration type"); cor_expr++;}// int a = b

    // Long int a = 1 or a = b
    // The rules below identify the keyword long or contt, so we can write const int or long int.
    // Same as above, it covers the case of just the declaration of a variable (long int a;),
    // the assignation with a number like long int a = 5 and lastly the assignation of a variable
    // with another variable like long int a = b. It works for float numbers as well like const float a = 2.5.
    | keyword_val keyword_val var { if ($1 != 2 || $2 != 1 && $2 != 13) yyerror("Invalid declaration type"); cor_expr++;}
    | keyword_val keyword_val var oper_val INTEGER { if ($1 != 2 || $2 != 1 && $2 != 13 || $4 != 12) yyerror("Invalid declaration type1"); cor_expr++;}
    | keyword_val keyword_val var oper_val FLOAT { if ($1 != 2 || $2 != 13 || $4 != 12) yyerror("Invalid declaration type"); cor_expr++;}
    | keyword_val keyword_val var oper_val var { if ($1 != 2 || $2 != 1 && $2 != 13 || $4 != 12) yyerror("Invalid declaration type"); cor_expr++;}
    
    // this rule identifies the assignation of a variable with an array (e.g int a = [1,2])
    // It also checks that the elements, inside the array, are the correct type.
    // For example: int arr = [1, 4.2, 2] is not acceptable. Every element has to be int or float
    // depending on the declaration type.
    | keyword_val var oper_val arr {
        if($1 != $4) // same type of array and variable
            yyerror("Invalid declaration type");  
        else if ($1 != 1 && $1 != 13 || $3 != 12) yyerror("Invalid declaration type"); cor_expr++;} 
    
    // this enables us to declare and assign a variable to an operation of other variables or numbers.
    // For example we can do this: int a = a + b or a + 1, 1 + a etc.
    | keyword_val var oper_val var_oper {if ($1 != 1 && $1 != 13 || $3 != 12) yyerror("Invalid declaration type"); cor_expr++;}
    ;

// Rules for value assignment
assignment:
    
    help_var oper_val help_num        {if($2 != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_arr      {if($2 != 12 || val_arr_com)            yyerror("Invalid assignment"); var_com = 0; val_arr_com = 0; cor_expr++;}
    | help_var oper_val help_var      {if($2 != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_str      {if($2 != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_var_oper {if($2 != 12 || var_com != val_com)     yyerror("Invalid assignment"); var_com = 0; val_com = 0; cor_expr++;}
    | help_var oper_val help_assign   {if($2 != 12 || var_com != val_ass_com) yyerror("Invalid assignment"); var_com = 0; val_ass_com = 0; cor_expr++;}
    /* | var oper_val var_oper {if($2 != 12) yyerror("Invalid assignment");} // π.χ α = α + b; //!!!ΚΑΝΟΝΙΚΑ ΘΕΛΕΙ ΚΑΙ ΤΗΝ ΟΜΑΔΟΠΟΙΗΣΗ ΑΜΑ ΤΟ ΒΑΛΩ ΧΑΛΑΕΙ ΤΟ num = 1; */
    ;
 
// Assisting rules for the built-in print function. It can identify multiple, either same of different,
// parameters inside the parenthesis of the function. For example print(x, "=", 100); 
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

// This set of rules is generally similar to the one above. This regards the function cmp,
// that can only take 2 arguments instead of multiple like print.
help_2args:
    var SYMBOL var
    | str SYMBOL str
    | str SYMBOL var
    | var SYMBOL str
    ;

/* The rules mentioned above (help_3args and help_2args) are helpful for the part inside the parenthesis */
/* of the functions. The whole part of the function, keyword parenthesis as well as the parameteres are  */
/* implemented below. */

// These rules are for the Built-in functions scan, len and print, only when the number of parameters is 1.
// The function scan and len, by themselves, only need 1 argument. So the rules below cover that case.
// So they enable us to do scan(x), len("this is a test string") and print("Hello World") etc.
scan_len_print: 
    keyword_val   OPEN_PARENTHESIS var CLOSE_PARENTHESIS  { if ($1 != 3 && $1 != 4 && $1 != 6) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS arr CLOSE_PARENTHESIS  { if ($1 != 4) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS str CLOSE_PARENTHESIS  { if ($1 != 4 && $1 != 6) yyerror("Invalid function call");}
    ;

// Rule for the functions cmp and print, when the number of parameters given is 2.
// Function cmp only accepts 2 parameters anyway like cmp(str1, str2). This also covers the case of
// print(a, b) for example.
cmp_print: 
    keyword_val OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS {if ($1 != 5 && $1 != 6) yyerror("Invalid function call");}
    ;

// Rules for the print function when the nubmer of parameters is 3.
print: 
    keyword_val   OPEN_PARENTHESIS scan_len_print CLOSE_PARENTHESIS {if ($1 != 6 && $3 == 4) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS cmp_print CLOSE_PARENTHESIS      {if ($1 != 6 && $3 == 5) yyerror("Invalid function call");}
    | keyword_val OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS     {if ($1 != 6) yyerror("Invalid function call");} 
    ;

// Set of rules for function calls.
func_call:
    scan_len_print {cor_expr++;}
    | cmp_print    {cor_expr++;}
    | print        {cor_expr++;}

    // The rules below regard the calls for the user defined functions.
    // For example myFunc(params).
    | var OPEN_PARENTHESIS var CLOSE_PARENTHESIS        {cor_expr++;} // function call with a variable as a parameter
    | var OPEN_PARENTHESIS num CLOSE_PARENTHESIS        {cor_expr++;} // function call with 1 num parameter
    | var OPEN_PARENTHESIS str CLOSE_PARENTHESIS        {cor_expr++;} // function call with 1 str parameter
    | var OPEN_PARENTHESIS help_2args CLOSE_PARENTHESIS {cor_expr++;} // function call with 2 parameters
    | var OPEN_PARENTHESIS help_3args CLOSE_PARENTHESIS {cor_expr++;} // function call with 3 parameters or more
    | var OPEN_PARENTHESIS CLOSE_PARENTHESIS            {cor_expr++;} // function call with no parameters
    ;

// Rule for the arguments of a function.
// This basically identifies expressions like myFunc(int a, int b)
arguments:
    declaration
    | declaration SYMBOL arguments
    ;

// The group of rules below regard the function declaration.
// It can identify the simple declaration without a body like func myFunc(int a, int b).
// It also identifies every pattern of brackets (single line, multi-line etc.).
// This is done using the group of rules uner the label body:
// that is described below.
func_decl:
    keyword_val   var   OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS DELIMITER   {if ($1 != 7) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS body        {if ($1 != 7) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS arguments CLOSE_PARENTHESIS END body    {if ($1 != 7) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}

    // This is for the parameter void (myFunc(void))
    | keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS DELIMITER {if ($1 != 7 || $4 != 12) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS body      {if ($1 != 7 || $4 != 12) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    | keyword_val var OPEN_PARENTHESIS keyword_val CLOSE_PARENTHESIS END body  {if ($1 != 7 || $4 != 12) yyerror("Invalid function definition"); func_arg = $2; cor_expr++;}
    ;

// These rules below regards every possible pattern of the brackets.
body:
    OPEN_BRACKET   all CLOSE_BRACKET
    | OPEN_BRACKET END all CLOSE_BRACKET
    | OPEN_BRACKET all END CLOSE_BRACKET
    | OPEN_BRACKET END all END CLOSE_BRACKET
    ;

// This group of rules is for the body of the conditional statements like if and while.
cond_body:
    body
    | END body     {printf("1C");}
    | body END     {printf("2C");}
    | END body END {printf("3C");}
    ;

// Rules regarding everything inside the body of the function.
all:
    func_call DELIMITER
    | assignment DELIMITER
    | declaration DELIMITER
    | if_while_grammar {printf("111111");}
    | for_grammar      {printf("222222");}

    | all func_call DELIMITER
    | all assignment DELIMITER
    | all declaration DELIMITER
    | all if_while_grammar {printf("33333");}
    | all for_grammar      {printf("44444");}

    | all END func_call DELIMITER
    | all END assignment DELIMITER
    | all END declaration DELIMITER
    | all END if_while_grammar {printf("55555");}
    | all END for_grammar      {printf("66666");}
    ;

// Rules for if and while condition. The rules for both are included under one label,
// because they are very similar in terms of syntax.
if_while_grammar:
    
    // $$ = $1. Here it's basically checking for an if statement, in order to know if there should be an else statement.
    // If there is a while statement for example, it shouldn't check for an else because the while loop can't have an else condition.
    keyword_val OPEN_PARENTHESIS num CLOSE_PARENTHESIS cond_body {if ($1 != 8 && $1 != 10) yyerror("Invalid if/while statement"); $$ = $1; cor_expr++;} 

    | keyword_val OPEN_PARENTHESIS var_oper CLOSE_PARENTHESIS cond_body {if ($1 != 8 && $1 != 10) yyerror("Invalid if/while statement"); $$ = $1; cor_expr++;}
    | if_while_grammar keyword_val cond_body {if ($2 != 9 || $1 != 8) yyerror("Invalid if/while statement"); cor_expr++;}
    | if_while_grammar END keyword_val cond_body {if ($3 != 9 || $1 != 8) yyerror("Invalid if/while statement"); cor_expr++;}
    ;

// Assisting rule for the for loop that identifies the first and third part of the condition.
// For example if we have for(i = 0; i < 5; i++), it checks for the i = 0 and i++ parts.
help_for:
    var oper_val       {if($2 != 17 && $2 != 18) yyerror("Invalid --/++ operator"); cor_expr++;}
    | var oper_val num {cor_expr++;}
    ;

// Main grammar rules for the for loop.
for_grammar:
    keyword_val   OPEN_PARENTHESIS help_for DELIMITER expr     DELIMITER help_for CLOSE_PARENTHESIS cond_body {if($1 != 11) yyerror("Invalid for statement"); cor_expr++;}
    | keyword_val OPEN_PARENTHESIS help_for DELIMITER var_oper DELIMITER help_for CLOSE_PARENTHESIS cond_body {if($1 != 11) yyerror("Invalid for statement"); cor_expr++;}
    ;

%%

/* The yyerror function is used for the reporting of any errors. It is called by yyparse
   whenever there is a syntax error. It prints an error message to the terminal and then exits. */
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
}

// Function that prints a report containing several details about the result of the syntax analyzer
// and what it identified.
void print_report() {
    printf("-------Report:-------\n");
    printf("Correct Words: %d\n", cor_words);
    printf("Correct Expressions: %d\n", cor_expr);
    printf("Incorrect Words: %d\n", inc_words);
    printf("Incorrect Expressions: %d\n", inc_expr);
}

// The main function checks if the arguments given are correct.
// If the number of arguments given is 2 then the program received the input from a txt file.
// If not, then it just takes the input from the user through the terminal.
// Then the function calls the yyparse() method, that basically connects the syntax analyzer
// and the lexer. It breaks the input into tokens that we have defined on the lexical analyzer.
int main(int argc,char **argv) {

    if(argc == 2)
	    yyin = fopen(argv[1], "r"); // open the text file given as input
	else
		yyin = stdin; // get input from the user's terminal

	int parse = yyparse();
    if (parse == 0)
        fprintf(stderr, "Successful parsing.\n");  
    else
        fprintf(stderr, "Error found.\n");
    return 0;
}