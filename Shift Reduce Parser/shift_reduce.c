#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stack operations
typedef struct {
    char stack[100];
    int top;
} Stack;

void initializeStack(Stack* s) {
    s->top = -1;
}

void push(Stack* s, char item) {
    s->stack[++s->top] = item;
}

char pop(Stack* s) {
    return s->stack[s->top--];
}

// Shift-Reduce parser
int shiftReduceParser(const char* input) {
    Stack stack;
    initializeStack(&stack);
    int i = 0;

    printf("Stack\tInput\tAction\n");

    while (input[i] != '\0') {
        // Print current status
        printf("%s\t%s\t", stack.stack, input + i);

        // Shift operation
        printf("Shift\n");
        push(&stack, input[i]);
        i++;

        // Reduce step
        while (stack.top >= 2 && stack.stack[stack.top] == 'E' && stack.stack[stack.top - 1] == '2'
               && stack.stack[stack.top - 2] == 'E' && stack.stack[stack.top - 3] == '2') {
            // Print current status
            printf("%s\t%s\t", stack.stack, input + i);

            // Reduce operation for E -> 2E2
            printf("Reduce by '2E2'\n");
            pop(&stack); // pop '2'
            pop(&stack); // pop 'E'
            pop(&stack); // pop '2'
            push(&stack, 'E'); // push 'E'
        }

        while (stack.top >= 2 && stack.stack[stack.top] == 'E' && stack.stack[stack.top - 1] == '3'
               && stack.stack[stack.top - 2] == 'E' && stack.stack[stack.top - 3] == '3') {
            // Print current status
            printf("%s\t%s\t", stack.stack, input + i);

            // Reduce operation for E -> 3E3
            printf("Reduce by '3E3'\n");
            pop(&stack); // pop '3'
            pop(&stack); // pop 'E'
            pop(&stack); // pop '3'
            push(&stack, 'E'); // push 'E'
        }

        while (stack.top >= 0 && stack.stack[stack.top] == 'E' && stack.stack[stack.top - 1] == '4') {
            // Print current status
            printf("%s\t%s\t", stack.stack, input + i);

            // Reduce operation for E -> 4
            printf("Reduce by '4'\n");
            pop(&stack); // pop '4'
            push(&stack, 'E'); // push 'E'
        }
    }

    // Print final status
    printf("%s\t%s\t", stack.stack, input + i);

    // If the stack contains only 'E', the input is accepted
    if (stack.top == 0 && stack.stack[0] == 'E') {
        printf("Accepted: Input is a valid expression.\n");
        return 1;
    } else {
        printf("Rejected: Input is not a valid expression.\n");
        return 0;
    }
}

int main() {
    const char* input = "32423";
    int result = shiftReduceParser(input);

    return 0;
}
