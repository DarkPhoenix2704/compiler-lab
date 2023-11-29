# Algorithm - Recursive Descent Parser

- Define parsing functions for each non-terminal in the grammar.
- Initialize an index variable to traverse the input string.
- Print the initial status of t[he parsing p](http://process.Call)rocess.
- Call the parsing function for the start symbol.
  - a. Inside each parsing function:
    - i. Print the non-terminal being processed.
    - ii. Check if the current symbol in the input matches the expected symbol for the non-terminal.
      - A. If true, consume the symbol and move to the next one.
      - B. If false, print an error message and exit the parsing function.
    - iii. Recursively call parsing functions for the non-terminals or terminals in the production.
  - b. Print the success of parsing the current non-terminal.
- Print the final status of the parsing process.
- Check if the entire input string has been consumed.
  - a. If true, the input is accepted as a valid expression.
  - b. If false, the input is rejected as an invalid expression.
- End of the algorithm.
