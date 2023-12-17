//? Write a C program to generate Pascal's triangle.

#include <stdio.h>
#include <conio.h>

long factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

void main(void)
{
  int rows, coeff, space;

  printf("Enter the number of rows for Pascal's triangle: ");
  scanf("%d", &rows);

  for (int i = 0; i < rows; i++)
  {
    int j;
    for (space = 1; space <= rows - i; space++)
    {
      printf("  ");
    }
    for (j = 0; j <= i; j++)
    {
      coeff = factorial(i) / (factorial(j) * factorial(i - j));
      printf("%4d", coeff);
    }
    printf("\n");
  }

  getch();
}