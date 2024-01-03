//? Write a C program to read in two numbers, x and n, and then compute the sum of this geometric progression: 1 + x +x^2 + x^3 +...+ x^n. For example: if n is 3 and x is 5, then the program computes 1 + 5 + 25 + 125. Print x, n, and the sum. Perform error checking. For example, the formula does not make sense for negative exponents if n is less than 0. Have your program print an error - message if n<0, then go back and read in the next pair of numbers without computing the sum. Are any values of x also illegal? If so, test for them too.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
  int x, n;
  double sum;

  while (1)
  {
    printf("Enter the value of X: ");
    scanf("%d", &x);

    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 0 || x < 0)
    {
      printf("Error: Negative exponent base is not allowed.\n");
    }
    else
    {
      for (int i = 1; i <= n; ++i)
      {
        sum += pow(x, i);
      }

      printf("X: %d\n", x);
      printf("N: %d\n", n);

      printf("Sum of geometric progression: %0.01f\n", sum);

      break;
    }
  }

  getch();
  return 0;
}