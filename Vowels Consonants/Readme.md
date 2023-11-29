# Algorithm Vowel Count

1. Input a string.
2. Initialize variables for counting vowels and consonants to zero.
3. Loop through each character in the string.
   - If the character is a vowel (a, e, i, o, u), increment the vowel count.
   - If the character is an alphabetic character (a-z or A-Z), increment the consonant count.
   - Ignore other characters.
4. Print the counts of vowels and consonants.
5. End.

## How to Run?

```
flex count_vowels_consonants.l
gcc lex.yy.c -o count_vowels_consonants -lfl
./count_vowels_consonants
```
