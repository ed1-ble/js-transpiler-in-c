#include<string.h>

#define ASSIGN "=>"
#define OUTPUT '$'

#define LEFTPAREN '('
#define RIGHTPAREN ')'

#define IF "If"
#define ELSE "Else"
#define THEN "Then"
#define IFEND "IfEnd"

#define PLUS '+'
#define MINUS '-'
#define MULT '*'
#define DIV '/'
#define POWER '^'

#define EQUAL "=="
#define NOTEQUAL "<>"

#define LARGER ">>"
#define SMALLER "<<"

#define STATEMENTEND ':'

int isStrKeyword(char* string) {
    
    if (strcmp(string, ASSIGN) == 0 ||
        strcmp(string, EQUAL) == 0 ||

        strcmp(string, IF) == 0 ||
        strcmp(string, ELSE) == 0 ||
        strcmp(string, THEN) == 0 || 
        strcmp(string, IFEND) == 0 ||

        strcmp(string, LARGER) == 0 ||
        strcmp(string, SMALLER) == 0 ||
        strcmp(string,NOTEQUAL) == 0
        ){
        return 1;
    }
    
    return 0;
}

int isCharKeyword(char ch) {
    switch(ch) {
        case PLUS:
        case MINUS:
        case MULT:
        case DIV:
        case STATEMENTEND:
        case OUTPUT:
        case LEFTPAREN:
        case RIGHTPAREN:
        case POWER:
            return 1;
    }
    return 0;
}

