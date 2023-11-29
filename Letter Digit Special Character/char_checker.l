%{
#include <stdio.h>
%}

%%
[0-9]   { printf("%c is a digit\n", yytext[0]); }
[^a-zA-Z0-9\n]   { printf("%c is a special character\n", yytext[0]); }
.   { printf("%c is not a digit or special character\n", yytext[0]); }
%%

int main() {
    yylex();
    return 0;
}
