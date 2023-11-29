%{
int vowels = 0;
int consonants = 0;
%}

%%
[aeiouAEIOU]   { vowels++; }
[a-zA-Z]        { consonants++; }
%%
int yywrap() {}
int main() {
    printf("Enter String with Vowels and Consonants: ");
    yylex();
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
