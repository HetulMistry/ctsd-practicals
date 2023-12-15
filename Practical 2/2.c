//? Write a c program to calculate Area ,Perimeter and Diagonal of a square.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{
  float length, area, perimeter, diagonal;

  printf("Enter the length of square (m): ");
  scanf("%f\n", &length);

  area = length * length;
  perimeter = 4 * length;
  diagonal = sqrt(2) * length;

  printf("Area: %0.3f\n", area);
  printf("Perimeter: %0.3f\n", perimeter);
  printf("Diagonal: %0.3f\n", diagonal);

  getch();
}