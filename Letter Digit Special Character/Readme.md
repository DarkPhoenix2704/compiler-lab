# Algorithm - Character Checker

1. Import necessary header files.

2. Define the Lex program sections using `%{ ... %}` to include the required headers.

3. Define the Lex rules using the `%%` delimiter.

4. Use regular expressions to specify patterns for digits, special characters, and other characters.

5. Print appropriate messages using `printf` statements based [on the iden](http://patterns.In)tified patterns.

6. In the main function, call `yylex()` to start the Lexical Analyzer.

## To Run

```
lex char_checker.l
gcc lex.yy.c -o char_checker -ll
```
