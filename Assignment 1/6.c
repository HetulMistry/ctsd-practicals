//? Write a program to print n even numbers.

#include <stdio.h>
#include <conio.h>

int main(void)
{
  int s, i, n;

  printf("Enter the number of even number you want to display: ");
  scanf("%d", &n);

  for (i = 0; i < n; ++i)
  {
    s = 2 * i;
    printf("%d ", s);
  }

  getch();
  return 0;
}