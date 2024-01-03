//? Write a c program to calculate Area ,Perimeter and Diagonal of a square.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
  float length, area, perimeter, diagonal;

  printf("Enter the length of square (m): ");
  scanf("%f", &length);

  area = length * length;
  perimeter = 4 * length;
  diagonal = sqrt(2) * length;

  printf("Area: %0.3f m^2\n", area);
  printf("Perimeter: %0.3f m\n", perimeter);
  printf("Diagonal: %0.3f m\n", diagonal);

  getch();
  return 0;
}