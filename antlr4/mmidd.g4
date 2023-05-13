grammar mmidd;


program
    : program_line* EOF;

program_line
    : (decl | expression)+ ';';


expression
    : left=expression '*' right=expression  #opIzraz
    | left=expression '+' right=expression  #opIzraz
    | ID                                    #promIzraz
    | INT                                   #intIzraz;

decl
    : ID '=' INT;

/* TOKENI */

INT
    : '0' | '-'?[1-9][0-9]*;

ID
    : [a-z][a-zA-Z0-9_]*;

WS 
    : [ \t\n]+ -> skip;
