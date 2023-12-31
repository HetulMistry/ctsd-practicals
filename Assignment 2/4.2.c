//?	Write a c program to reverse the individual word of a given string.
//! Explanation:
//* Input : Welcome To ParulUniversity
//* Output: emocleW oT ytisrevinUluraP.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverse(char word[])
{
  int start = 0;
  int end = strlen(word) - 1;

  while (start < end)
  {
    char temp = word[start];
    word[start] = word[end];
    word[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  char input[1000];

  printf("Enter a string: ");
  gets(input);

  char word[100];

  for (int i = 0; i <= strlen(input); i++)
  {
    if (input[i] == ' ' || input[i] == '\0')
    {
      word[i] = '\0';
      reverse(word);
      printf("%s ", word);
      memset(word, 0, sizeof(word));
    }
    else
    {
      word[i] = input[i];
    }
  }

  getch();
  return 0;
}