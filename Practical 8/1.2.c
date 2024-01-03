//? Write a C program that uses functions to delete n Characters from a given position in a given string.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void deleteCharacters(char str[], int position, int numCharacters)
{
  int length = strlen(str);
  int i, j;

  for (i = position; i < length - numCharacters; ++i)
  {
    str[i] = str[i + numCharacters];
  }

  str[length - numCharacters] = '\0';

  printf("Modified String after deleting %d characters: %s\n", numCharacters, str);
}

int main()
{
  char str[100];
  int position, numCharacters;

  printf("Enter the string: ");
  scanf("%s", str);

  printf("Enter the position to start deleting characters: ");
  scanf("%d", &position);

  printf("Enter the number of characters to delete: ");
  scanf("%d", &numCharacters);

  deleteCharacters(str, position, numCharacters);

  getch();
  return 0;
}