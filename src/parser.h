
void parseStrToken(char* string){
    if (strcmp(string,IF)==0) {
        printf("if ");
    } else if (strcmp(string, ELSE) == 0) {
        printf("else ");
    } else if (strcmp(string, THEN) == 0) {
        printf("{ ");
    } else if (strcmp(string, IFEND) == 0) {
        printf("} ");
    } else if (strcmp(string, LARGER) == 0) {
        printf("> ");
    } else if (strcmp(string, SMALLER) == 0) {
        printf("< ");
    } else if (strcmp(string, ASSIGN) == 0) {
        printf("= ");
    } else if (strcmp(string, EQUAL) == 0) {
        printf("== ");
    } else if (strcmp(string, NOTEQUAL) == 0) {
        printf("!= ");
    }
}

void parseCharToken(char ch) {
    switch(ch) {
        case PLUS:
            printf("+ "); break;
        case MINUS:
            printf("- "); break;
        case MULT:
            printf("* "); break;
        case DIV:
            printf("/ "); break;
        case STATEMENTEND:
            printf("; "); break;
        case OUTPUT:
            printf("console.log"); break;
        case POWER:
            printf("** "); break;
        case LEFTPAREN:
            printf("( "); break;
        case RIGHTPAREN:
            printf(") "); break;
        default:
            break;
    }
}

