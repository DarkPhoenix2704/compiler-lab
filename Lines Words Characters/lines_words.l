%{
#include <stdio.h>

int charCount = 0;
int wordCount = 0;
int lineCount = 0;
%}

%%
[a-zA-Z]+   { wordCount++; charCount += yyleng; }
\n          { lineCount++; charCount++; }
.           { charCount++; }
%%

int main(int argc, char* argv[]) {
    yyin = fopen(argv[1], "r");
    yylex();

    printf("Number of lines: %d\n", lineCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of characters: %d\n", charCount);

    return 0;
}
