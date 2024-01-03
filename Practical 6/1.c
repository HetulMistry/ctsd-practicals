//? Write C programs that use both recursive and non-recursive functions to find the factorial of a given integer.

#include <stdio.h>
#include <conio.h>

int factorialRecursive(int number)
{
  if (number == 0 || number == 1)
  {
    return 1;
  }

  return number * factorialRecursive(number - 1);
}

int factorialNonRecursive(int number)
{
  int factorial = 1;

  for (int i = 1; i <= number; ++i)
  {
    factorial *= i;
  }

  return factorial;
}

int main(void)
{
  int num;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  printf("Factorial using recursive function: %d\n", factorialRecursive(num));

  printf("Factorial using non-recursive function: %d\n", factorialNonRecursive(num));

  getch();
  return 0;
}