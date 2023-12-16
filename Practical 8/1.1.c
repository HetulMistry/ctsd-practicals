//? Write a C program that uses functions to insert a sub-string into a given main string from a given position.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void insertSubstring(char mainString[], char subString[], int position)
{
  int mainLength = strlen(mainString);
  int subLength = strlen(subString);
  int newLength = mainLength + subLength;
  char newString[newLength + 1];
  int i, j;

  for (i = 0; i < position; ++i)
  {
    newString[i] = mainString[i];
  }

  for (j = 0; j < subLength; ++j)
  {
    newString[i + j] = subString[j];
  }

  for (; i < mainLength; ++i)
  {
    newString[i + subLength] = mainString[i];
  }

  newString[newLength] = '\0';

  printf("Modified String after inserting sub-string: %s\n", newString);
}

void main(void)
{
  char mainString[100], subString[100];
  int position;

  printf("Enter the main string: ");
  scanf("%s", mainString);

  printf("Enter the sub-string to insert: ");
  scanf("%s", subString);

  printf("Enter the position to insert sub-string: ");
  scanf("%d", &position);

  insertSubstring(mainString, subString, position);

  getch();
}