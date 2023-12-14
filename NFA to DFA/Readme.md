# Algorithm NFA to DFA

1. Read the number of states (`states`) and input symbols (`inputs`) for the NFA.

2. Initialize a 3D array `transitions[10][10][10]` to store the NFA transition matrix.

3. For each input symbol, read the NFA transition matrix from the user.

4. Create a 3D array `nfa_table[10][10][10]` to represent the NFA transition table.

5. Populate the NFA transition table based on the NFA transition matrix.

6. Initialize a queue (`queue[20][10]`), `front`, `rear`, and `rows` for DFA conversion.

7. Enqueue the start state "q0" into the queue and set the initial row of the DFA table.

8. Repeat until the queue is empty: a. Dequeue a state (`current_state`) from the front of the queue. b. For each input symbol: i. Compute the set of new states (`new_states`) reachable from `current_state`. ii. Sort `new_states` in ascending order. iii. Enqueue `new_states` if not already in the queue and update the DFA table. c. Increment `rows` and move to the next row of the DFA table.

9. Print the DFA table with appropriate formatting.

   ## How to Run?

   ```
   gcc nfa_to_dfa.c -o nfa_dfa
   ./nfa_dfa
   
   Enter no. of states: 3
   Enter no. of input symbols: 2
   Enter NFA matrix for input 1: 
   1 0 0
   0 1 1
   1 1 0
   
   Enter NFA Matrix for Input 2: 
   0 1 1
   0 0 1
   0 1 0
   ```