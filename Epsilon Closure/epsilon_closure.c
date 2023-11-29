#include <stdio.h>
#include <string.h>

int EpsilonTransitions[20];

int main() {
    int i, numStates, numSymbols, numFinalStates, finalStates[20];

    printf("Enter the number of states: ");
    scanf("%d", &numStates);

    printf("Enter the number of symbols: ");
    scanf("%d", &numSymbols);

    printf("Enter the number of final states: ");
    scanf("%d", &numFinalStates);

    printf("Enter the final states: ");
    for (i = 0; i < numFinalStates; ++i) {
        scanf("%d", &finalStates[i]);
    }

    for (i = 0; i < numStates; ++i) {
        printf("Enter Delta[%d, E): ", i);
        scanf("%d", &EpsilonTransitions[i]);
    }

    for (i = 0; i < numStates; ++i) {
        printf("\nE-closure of Q[%d]: ", i);

        printf("%d,", i);
        int currentState = i;
        while (currentState != EpsilonTransitions[currentState]) {
            currentState = EpsilonTransitions[currentState];
            printf("%d,", currentState);
        }

        printf("\n");
    }

    return 0;
}
