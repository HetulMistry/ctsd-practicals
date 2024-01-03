//? Write a C program to calculate the following Sum: Sum=1-x^2/2! +x^4/4!-x^6/6!+x^8/8!-x^10/10!.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
  int counter, f_count;
  float sum = 0, x, power, fact;

  printf("Equation series : 1- X^2/2! + X^4/4! - X^6/6! + X^8/8! - X^10/10!\n");

  printf("Enter value of X : ");
  scanf("%f", &x);

  for (counter = 0, power = 0; power <= 10; counter++, power = power + 2)
  {
    fact = 1;
    for (f_count = power; f_count >= 1; f_count--)
      fact *= f_count;
    sum = sum + (pow(-1, counter) * (pow(x, power) / fact));
  }

  printf("Sum : %f", sum);

  getch();
  return 0;
}