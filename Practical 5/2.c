//? Write a C program to find the roots of a quadratic equation.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{
  float a, b, c, root1, root2, discriminant;

  printf("Enter the values of a b c: ");
  scanf(" %f %f %f", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  if (discriminant > 0)
  {
    root1 = -b + sqrt(discriminant) / (2 * a);
    root2 = -b - sqrt(discriminant) / (2 * a);
    printf("The real roots = %f %f", root1, root2);
  }
  else if (discriminant == 0)
  {
    root1 = -b / (2 * a);
    root2 = -b / (2 * a);
    printf("Roots are equal =%f %f", root1, root2);
  }
  else
  {
    printf("Roots are imaginary");
  }

  getch();
}
