//? Write a c program to take multiline string input and print individual string length.

#include <stdio.h>
#include <string.h>

int main(void)
{
  char input[1000];
  int length = 0;

  printf("Enter a multiline string (Ctrl+D to end input):\n");

  while (fgets(input, sizeof(input), stdin) != NULL)
  {
    for (int i = 0; input[i] != '\0'; i++)
    {
      if (input[i] == ' ' || input[i] == '\n')
      {
        printf("Length: %d\n", length);
        length = 0;
      }
      else
      {
        // printf("%c", input[i]);
        length++;
      }
    }
  }

  return 0;
}