//? Write a C program to find the roots of a quadratic equation.

#include <math.h>
#include <stdio.h>
int main()
{
  double a, b, c, discriminant, root1, root2, realPart, imagPart;
  printf("Enter coefficients a, b and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  // Condition for real and different roots
  if (discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Root1 = %0.2lf and Root2 = %0.2lf", root1, root2);
  }

  // Condition for real and equal roots
  else if (discriminant == 0)
  {
    root1 = root2 = -b / (2 * a);
    printf("Root1 = Root2 = %0.2lf;", root1);
  }

  // If roots are not real
  else
  {
    realPart = -b / (2 * a);
    imagPart = sqrt(-discriminant) / (2 * a);
    printf("Root1 = %0.2lf+%0.2lfi and Root2 = %0.2f-%0.2fi", realPart, imagPart, realPart, imagPart);
  }

  return 0;
}
