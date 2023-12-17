//? Write a c program to take multiline string input and print individual string length.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void)
{
  char input[1000];

  printf("Enter a multiline string (Ctrl+D to end input):\n");

  while (fgets(input, sizeof(input), stdin) != NULL)
  {
    for (int i = 0; input[i] != '\0'; i++)
    {
      if (input[i] == ' ' || input[i] == '\n')
      {
        printf("\n");
      }
      else
      {
        printf("%c", input[i]);
      }
    }
  }

  getch();
}