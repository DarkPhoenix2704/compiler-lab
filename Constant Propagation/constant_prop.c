#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Expression {
    char operator[2], operand1[5], operand2[5], result[5];
    int optimized;
} expressions[10];

int numExpressions;

void userInput();
void performConstantFolding();
void outputOptimizedCode();
void propagateConstants(int index, char *result);

int main() {
    userInput();
    performConstantFolding();
    outputOptimizedCode();

    return 0;
}

void userInput() {
    printf("\nEnter the maximum number of expressions: ");
    scanf("%d", &numExpressions);
    printf("\nEnter the input:\n");

    for (int i = 0; i < numExpressions; i++) {
        scanf("%s %s %s %s", expressions[i].operator, expressions[i].operand1, expressions[i].operand2, expressions[i].result);
        expressions[i].optimized = 0;
    }
}

void performConstantFolding() {
    int operand1, operand2, result;
    char op, tempResult[5];

    for (int i = 0; i < numExpressions; i++) {
        if ((isdigit(expressions[i].operand1[0]) && isdigit(expressions[i].operand2[0])) || strcmp(expressions[i].operator, "=") == 0) {
            operand1 = atoi(expressions[i].operand1);
            operand2 = atoi(expressions[i].operand2);
            op = expressions[i].operator[0];

            switch (op) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                case '=':
                    result = operand1;
                    break;
            }

            sprintf(tempResult, "%d", result);
            expressions[i].optimized = 1;
            propagateConstants(i, tempResult);
        }
    }
}

void outputOptimizedCode() {
    printf("\nOptimized code is:\n");

    for (int i = 0; i < numExpressions; i++) {
        if (!expressions[i].optimized)
            printf("%s %s %s %s\n", expressions[i].operator, expressions[i].operand1, expressions[i].operand2, expressions[i].result);
    }
}

void propagateConstants(int index, char *result) {
    for (int i = index + 1; i < numExpressions; i++) {
        if (strcmp(expressions[index].result, expressions[i].operand1) == 0)
            strcpy(expressions[i].operand1, result);
        else if (strcmp(expressions[index].result, expressions[i].operand2) == 0)
            strcpy(expressions[i].operand2, result);
    }
}
