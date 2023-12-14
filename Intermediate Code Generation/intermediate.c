#include<stdio.h>
#include<string.h>

char operation[2], operand1[5], operand2[5], resultVar[5];

void main()
{
  FILE *inputFile, *outputFile;
  inputFile = fopen("input.txt", "r");
  outputFile = fopen("output.txt", "w");

  while (!feof(inputFile))
  {
    fscanf(inputFile, "%s%s%s%s", operation, operand1, operand2, resultVar);

    if (strcmp(operation, "+") == 0)
    {
      fprintf(outputFile, "\nMOV R0, %s", operand1);
      fprintf(outputFile, "\nADD R0, %s", operand2);
      fprintf(outputFile, "\nMOV %s, R0", resultVar);
    }
    if (strcmp(operation, "*") == 0)
    {
      fprintf(outputFile, "\nMOV R0, %s", operand1);
      fprintf(outputFile, "\nMUL R0, %s", operand2);
      fprintf(outputFile, "\nMOV %s, R0", resultVar);
    }
    if (strcmp(operation, "-") == 0)
    {
      fprintf(outputFile, "\nMOV R0, %s", operand1);
      fprintf(outputFile, "\nSUB R0, %s", operand2);
      fprintf(outputFile, "\nMOV %s, R0", resultVar);
    }
    if (strcmp(operation, "/") == 0)
    {
      fprintf(outputFile, "\nMOV R0, %s", operand1);
      fprintf(outputFile, "\nDIV R0, %s", operand2);
      fprintf(outputFile, "\nMOV %s, R0", resultVar);
    }
    if (strcmp(operation, "=") == 0)
    {
      fprintf(outputFile, "\nMOV R0, %s", operand1);
      fprintf(outputFile, "\nMOV %s, R0", resultVar);
    }
  }

  fclose(inputFile);
  fclose(outputFile);
}
