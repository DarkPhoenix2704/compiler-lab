# Algorithm - First and Follow

1. **Calculate First Sets:**

   - Initialize arrays and variables.
   - Loop through each production in the grammar.
     - Extract the leftmost symbol (`c`) of the current production.
     - Check if the First of `c` has already been calculated.
     - If not, call the `findfirst` function to calculate First sets.
     - Print the First sets for the current non-terminal.
     - Update variables and arrays accordingly.

2. **Calculate Follow Sets:**

   - Initialize arrays and variables.
   - Loop through each production in the grammar.
     - Extract the leftmost symbol (`ck`) of the current production.
     - Check if the Follow of `ck` has already been calculated.
     - If not, call the `follow` function to calculate Follow sets.
     - Print the Follow sets for the current non-terminal.
     - Update variables and arrays accordingly.

3. `findfirst` **Function:**

   - Parameters: `c`, `q1`, `q2`.
   - Loop through the productions to find the production that matches the current symbol.
   - Check if the symbol is a terminal or non-terminal.
   - If terminal, add it to the First set.
   - If non-terminal:
     - If it produces ε, recursively call `findfirst` for the next symbol in the production.
     - If it produces a terminal, add it to the First set.
     - If it produces a non-terminal, recursively call `findfirst` for the non-terminal.

4. `follow` **Function:**

   - Parameter: `c`.
   - Add `$` to the Follow set of the start symbol.
   - Loop through productions to find the production containing the current symbol.
   - If the symbol is at the end of the production, recursively call `follow` for the leftmost symbol of the production.
   - If the symbol is followed by another symbol, call `followfirst` for the next symbol in the production.

5. `followfirst` **Function:**

   - Parameters: `c`, `c1`, `c2`.
   - Loop through the First set of the current symbol.
   - If the symbol is a terminal, add it to the Follow set.
   - If the symbol is ε, recursively call `follow` for the leftmost symbol of the production.
   - If the symbol is a non-terminal, recursively call `followfirst` for the non-terminal.