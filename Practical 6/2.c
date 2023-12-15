//? Write C programs that use both recursive and non-recursive functions to find the GCD (greatest common divisor) of two given integers.

#include <stdio.h>
#include <conio.h>

int gcdRecursive(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcdRecursive(b, a % b);
}

int gcdNonRecursive(int a, int b)
{
  int temp;

  while (b != 0)
  {
    temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int main()
{
  int num1, num2;

  printf("Enter two positive integers: ");
  scanf("%d %d", &num1, &num2);

  printf("GCD using recursive function: %d\n", gcdRecursive(num1, num2));

  printf("GCD using non-recursive function: %d\n", gcdNonRecursive(num1, num2));

  getch();
  return 0;
}