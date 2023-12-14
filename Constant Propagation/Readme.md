# Algorithm - Constant Propagation

1. Read the maximum number of expressions (`n`).
2. Read each expression's operator, operand1, operand2, and result.
3. For each expression:
   - Check if both operand1 and operand2 are digits or if the operator is an assignment (`=`).
   - If true, convert operand1 and operand2 to integers.
   - Perform the operation based on the operator (+, -, \*, /, =).
   - Convert the result back to a string.
   - Mark the expression as optimized.
4. For each optimized expression:
   - Iterate over the remaining expressions.
   - If the result of the optimized expression matches an operand in subsequent expressions:
     - Replace the operand with the constant result.
5. Display the optimized code:
   - For each expression that is not optimized, print the operator, operand1, operand2, and result.
6. Terminate the algorithm.

   ## How to Run?

   ```
   gcc constant_prop.c -o constant
   ./constant
   
   Enter the maximum number of expressions: 4
   
   Enter the input:
   = 4 + a
   + a b t1
   - a c t2
   * t1 t2 t3
   ```