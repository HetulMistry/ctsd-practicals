//? Write a c program to calculate Area ,Perimeter and Diagonal of a Rectangle.

#include <stdio.h>
#include <math.h>

int main(void)
{
  float length, breath, area, perimeter, diagonal;

  // Taking user input
  printf("Enter the length of rectangle (m): ");
  scanf("%f\n", &length);

  printf("Enter the breath of rectangle (m): ");
  scanf("%f\n", &breath);

  // Calculating area, perimeter and diagonal
  area = length * breath;
  perimeter = 2 * (length + breath);
  diagonal = sqrt(length * length + breath * breath);

  // Printing result upto 3 decimal points
  printf("Area: %0.3f\n m^2", area);
  printf("Perimeter: %0.3f\n m", perimeter);
  printf("Diagonal: %0.3f\n m", diagonal);

  return 0;
}
