#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include "tokens.h"
#include "parser.h"

void getTokenType(char* buf) {
    if (strlen(buf) > 0) {
        if (isStrKeyword(buf)) {
            parseStrToken(buf);
            // printf("String Keyword: %s\n",buf);
        } else {
            // Check if is NUMBER or IDENTIFIER
            int isNum = 1;
            for (int y = 0; y < strlen(buf); y++) {
            if (isdigit(buf[y]) == 0) {
                isNum = 0;
                }
            }
        
            if (isNum) {
                // Number
                printf("%s ",buf);
            } else {
                // Identifier
                printf("%s ",buf);
            }
        }
    }
} 

void lexer(char* srcfile) {
    char* buf = malloc(20);
    
    int index = 0;
    int i = 0;
    while (srcfile[i] != '\0') {
        // Check each word, identify its type
        
        if (isCharKeyword(srcfile[i])) {
            getTokenType(buf);    

            index = 0;
            memset(buf,0,20);    
           // printf("Char Keyword: %c\n",srcfile[i]);
            parseCharToken(srcfile[i]);
        } else if (isspace(srcfile[i])) {
            getTokenType(buf); 

            index = 0;
            memset(buf,0,20);
        } else {
            buf[index] = srcfile[i]; 
            index++;
        }
        i++;
    }
    free(buf);
}

int main(int argc, char** argv) {
    // Read file from argv
    FILE *fptr = fopen(argv[1], "r");
    char ch;
    char buffer[1024];
    int cnt = 0;
    while ((ch = fgetc(fptr)) != EOF) {
        buffer[cnt] = ch;
        cnt++;
    }
    lexer(buffer);
    fclose(fptr);

    return 0;
}
