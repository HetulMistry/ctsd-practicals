//? Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include <stdio.h>
#include <conio.h>

int main(void)
{
  int n, i, j, count;

  printf("Enter any number: ");
  scanf("%d", &n);

  printf("The prime numbers between 1 to %d:\n", n);

  for (i = 1; i <= n; i++)
  {
    count = 0;

    for (j = 1; j <= i; j++)

      if (i % j == 0)
      {
        count++;
      }

    if (count == 2)
    {
      printf("%d\n", i);
    }
  }

  getch();
  return 0;
}
