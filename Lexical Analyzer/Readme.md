# Lexical Analyzer Algorithm

1. Open the file containing the C program for reading.

2. If the file opening fails, print an error message and exit.

3. Initialize variables:

   - FILE pointer: fp
   - Character variable: ch
   - Character array: token (for storing the current token)
   - Integer: tokenIndex (to keep track of the current position in the token array)

4. Loop through the characters in the file until the end of the file is reached: a. Read a character from the file. b. If the character is a space, newline, or special character: i. If a token is in progress (tokenIndex &gt; 0), complete the token, process it, and reset tokenIndex to zero. ii. If the character is a special character, print a message. c. If the character is not a space or newline, add it to the current token.

5. If there is a token in progress at the end of the file, complete the token, process it, and print the results.

6. Close the file.

7. Exit the program.

8. Token Processing Function: a. Check if the token is a keyword. b. If it is, print a message indicating that it's a keyword. c. If it is not a keyword, check if it's a numeric constant. d. If it is, print a message indicating that it's a numeric constant. e. If it is neither a keyword nor a numeric constant, print a message indicating that it's an identifier.

9. Run the program and observe the output.
