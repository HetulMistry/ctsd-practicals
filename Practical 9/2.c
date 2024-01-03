//? Write a C program to count the lines, words and characters in a given text.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char text[1000], ch, prevChar = ' ';
  int lines = 0, words = 0, characters = 0;

  printf("Enter the text (Ctrl+D to end input):\n");

  while ((ch = getchar()) != EOF)
  {
    characters++;

    if (ch == '\n')
    {
      lines++;
    }

    if (isspace(ch) && !isspace(prevChar))
    {
      words++;
    }

    prevChar = ch;
  }

  if (!isspace(prevChar))
  {
    words++;
  }

  printf("Number of lines: %d\n", lines);
  printf("Number of words: %d\n", words);
  printf("Number of characters: %d\n", characters);

  return 0;
}