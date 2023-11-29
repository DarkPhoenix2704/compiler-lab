#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int isKeyword(const char *buffer) {
    char keywords[][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                            "do", "double", "else", "enum", "extern", "float", "for", "goto",
                            "if", "int", "long", "register", "return", "short", "signed",
                            "sizeof", "static", "struct", "switch", "typedef", "union",
                            "unsigned", "void", "volatile", "while"};

    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(keywords[i], buffer) == 0) {
            return 1;
        }
    }

    return 0;
}

int isNumericConstant(const char *buffer) {
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (!isdigit(buffer[i])) {
            return 0;
        }
    }

    return 1;
}

void processToken(const char *token) {
    if (isKeyword(token)) {
        printf("%s is a Keyword\n", token);
    } else if (isNumericConstant(token)) {
        printf("%s is a Numeric Constant\n", token);
    } else {
        printf("%s is an Identifier\n", token);
    }
}

int main() {
    FILE *fp = fopen("program.txt", "r");

    if (fp == NULL) {
        perror("Error Opening File: program.txt");
        exit(1);
    }

    int ch;
    char token[15];
    int tokenIndex = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch) || strchr("+-*/%=,;[]{}", ch) != NULL) {
            if (tokenIndex > 0) {
                token[tokenIndex] = '\0';
                processToken(token);
                tokenIndex = 0;
            }
            if (ch != ' ' && ch != '\n') {
                printf("%c is a Special Character\n", ch);
            }
        } else {
            token[tokenIndex++] = ch;
        }
    }

    fclose(fp);
    return 0;
}
