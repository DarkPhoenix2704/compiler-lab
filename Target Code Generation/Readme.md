# Target Code Generation

1. Initialize an array named "code" to store the intermediate code.
2. Initialize variables: "temp" to store a temporary string, "operator" to store the operation type.
3. Initialize an integer variable "index" to keep track of the current position in the code array.
4. Prompt the user to enter the set of intermediate code until "exit" is encountered, storing each input in the "code" array.
5. Display a message indicating the start of target code generation.
6. Use a loop to iterate through each entry in the "code" array. a. Copy the current entry into the "temp" variable. b. Use a switch statement to determine the operation type based on the character at position 3 in the "temp" string. c. Print target code instructions using the "temp" string and the determined operation type. d. Increment the "index" variable. e. Continue the loop until "exit" is encountered in the "code" array.
7. End the program.

```
gcc target.c -o target
./target
```