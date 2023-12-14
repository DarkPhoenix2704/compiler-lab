#include <stdio.h>
#include <string.h>

void main() {
  char code[10][30], temp[20], operator[10];
  int index = 0;

  printf("\nEnter the set of intermediate code (terminated by exit):\n");
  do {
    scanf("%s", code[index]);
  } while (strcmp(code[index++], "exit") != 0);

  printf("\nTarget code generation");
  printf("\n*******************");

  index = 0;
  do {
    strcpy(temp, code[index]);

    switch (temp[3]) {
    case '+':
      strcpy(operator, "ADD");
      break;
    case '-':
      strcpy(operator, "SUB");
      break;
    case '*':
      strcpy(operator, "MUL");
      break;
    case '/':
      strcpy(operator, "DIV");
      break;
    }

    printf("\n\tMov %c,R%d", temp[2], index);
    printf("\n\t%s%c,R%d", operator, temp[4], index);
    printf("\n\tMov R%d%c", index, temp[0]);

  } while (strcmp(code[++index], "exit") != 0);
}
