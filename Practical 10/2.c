//? Write a C program to construct a pyramid of numbers.

#include <stdio.h>
#include <conio.h>

int main(void)
{
  int rows, space, num, count = 0;

  printf("Enter the number of rows for the pyramid: ");
  scanf("%d", &rows);

  int i;

  for (i = 1; i <= rows; ++i)
  {
    for (space = 1; space <= rows - i; ++space)
    {
      printf("  ");
    }

    num = i;

    for (count = 1; count <= i; ++count)
    {
      printf("%2d", num);
      ++num;
    }

    num -= 2;

    for (count = 1; count < i; ++count)
    {
      printf("%2d", num);
      --num;
    }
    printf("\n");
  }

  getch();
  return 0;
}