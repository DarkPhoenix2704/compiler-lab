# Algorithm - Lines Words Characters

1. Initialize variables for character count, word count, and line count, all set t[o zero.](http://zero.Open)

2. Open the input file for reading.

3. Loop through each character in the file. a. If the character is part of a word (alphabetical characters), increment the word count and add to the character count. b. If the character is a newline character, increment the line count and character count. c. For any other character, just increment the character count.

4. After processing all characters in the file, close the file.

5. Display the final counts of lines, words, and characters.

6. End the algorithm.

   ## How to Run?

   ```
   lex ./lines_words.l
   gcc lex.yy.c -o lines_words -ll
   ./line_words
   ```
