# Algorithm - Epsilon Closure

1. Input the number of states (`numStates`), symbols (`numSymbols`), and final states (`numFinalStates`).
2. Input the final states into an array (`finalStates`).
3. Input the epsilon transitions for each state into an array (`EpsilonTransitions`).
4. For each state (index `i` from 0 to `numStates - 1`): a. Print the epsilon closure for state `i`. b. Initialize `currentState` with `i`. c. While `currentState` is not equal to its epsilon transition (`EpsilonTransitions[currentState]`):
   - Update `currentState` to its epsilon transition.
   - Print the updated `currentState`. d. Print a newline to separate epsilon closures for different states.
5. End the program.

   ## How to Run?

   ```
   gcc -o epsilon_closure epsilon_closure.c
   ./epsilon_closure
   ```
