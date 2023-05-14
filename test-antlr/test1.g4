grammar test1;

program
    : func+
    | program_line+ EOF;

program_line
    : (declare  | expression) ';'
    ;

expression
    : '(' expression ')'                                                 #zagradeIzraz
    | op='!' expression                                                     #opIzraz
    | left=expression op=('*' | '/') right=expression                      #opIzraz
    | left=expression op=('+' | '-') right=expression                      #opIzraz
    | left=expression op=('&' | '|' | '^') right=expression               #opIzraz
    | left=expression op=('==' | '>' | '<' | '>=' | '<=') right=expression #opIzraz
    | func_call                                                         #funkPoziv
    | ID                                                                 #promIzraz
    | INT                                                                #intIzraz;

declare
    : left=ID op='=' right=expression 
    ;

func_call
    : ID '(' ((ID | INT) (',' (ID | INT) )* )? ')';

func
    : 'funk' ID '(' (ID (',' ID)*)? ')' '{' func_line* ret '}';

func_line
    : (declare | expression) ';';

ret
    : 'ret' expression ';';

/* TOKENI */

CLAN_VEKTORA
    : INT ',';

VEKTOR
    : '[' CLAN_VEKTORA* INT']';

INT
    : '0' | '-'?[1-9][0-9]*;

ID
    : [a-z][a-zA-Z0-9_]*;

WS 
    : [ \t\n]+ -> skip;
