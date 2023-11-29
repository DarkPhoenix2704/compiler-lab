# Algorithm - Shift Reduce Parser

1. Initialize a stack to keep track of symbols during parsing.
   1. Initialize an index variable to traverse the input string.
2. Print the initial status of the stack and input.
3. While there are symbols in the input string:
   - a. Shift the current symbol onto the stack.
   - b. Print the updated status of the stack, input, and the "Shift" action.
   - c. Check for possible reductions in a loop:
     - i. If the top symbols on the stack match any production rule:
       - A. Perform the reduction by popping symbols from the stack.
       - B. Print the updated status of the stack, input, and the "Reduce" action.
       - C. Push the non-terminal symbol resulting from the reduction onto the stack.
   - d. Print the final status of the stack and input after processing the current symbol.
4. Check if the stack contains only the start symbol and is empty.
   - a. If true, the input is accepted as a valid expression.
   - b. If false, the input is rejected as an invalid expression.
5. End of the algorithm.
