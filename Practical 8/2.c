//? Write a C program to determine if the given string is a palindrome or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int isPlaindrome(char str[])
{
  int length = strlen(str);

  for (int i = 0; i < length; ++i)
  {
    if (str[i] != str[length - i - 1])
    {
      return 0;
    }
  }
  return 1;
}

int main(void)
{
  char str[100];

  printf("Enter the string: ");
  scanf("%s", &str);

  if (isPlaindrome(str))
  {
    printf("The given string is a palindrome.\n");
  }
  else
  {
    printf("The given string is not a palindrome.\n");
  }

  getch();
  return 0;
}