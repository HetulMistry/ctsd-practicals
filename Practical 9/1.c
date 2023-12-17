//? Write a C program that displays the position or index in the string S where the string T begins, or -1 if S doesn't contain T.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int findSubstring(char S[], char T[])
{
  int Slen = strlen(S);
  int Tlen = strlen(T);

  for (int i = 0; i <= Slen - Tlen; ++i)
  {
    int j;

    for (j = 0; j < Tlen; ++j)
    {
      if (S[i + j] != T[j])
      {
        break;
      }
    }

    if (j == Tlen)
    {
      return i;
    }
  }

  return -1;
}

void main(void)
{
  char S[100], T[100];

  printf("Enter the main string (S): ");
  scanf("%s", S);

  printf("Enter the substring to find (T): ");
  scanf("%s", T);

  int position = findSubstring(S, T);

  if (position != -1)
  {
    printf("Substring T begins at position %d in string S.\n", position);
  }
  else
  {
    printf("String S does not contain substring T.\n");
  }

  getch();
}