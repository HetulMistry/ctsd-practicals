//? Write a c program to calculate Area ,Perimeter and Diagonal of a square.

#include <stdio.h>
#include <math.h>

int main(void)
{
  float length, area, perimeter, diagonal;

  // Taking user input
  printf("Enter the length of square (m): ");
  scanf("%f\n", &length);

  // Calculating area, perimeter and diagonal
  area = length * length;
  perimeter = 4 * length;
  diagonal = sqrt(2) * length;

  // Printing result upto 3 decimal points
  printf("Area: %0.3f\n", area);
  printf("Perimeter: %0.3f\n", perimeter);
  printf("Diagonal: %0.3f\n", diagonal);

  return 0;
}