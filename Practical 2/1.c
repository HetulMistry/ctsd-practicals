//? Write a c program to calculate Area ,Perimeter and Diagonal of a Rectangle.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
  float length, breath, area, perimeter, diagonal;

  printf("Enter the length of rectangle (m): ");
  scanf("%f", &length);

  printf("Enter the breath of rectangle (m): ");
  scanf("%f", &breath);

  area = length * breath;
  perimeter = 2 * (length + breath);
  diagonal = sqrt(length * length + breath * breath);

  printf("Area: %0.3f m^2\n", area);
  printf("Perimeter: %0.3f m\n", perimeter);
  printf("Diagonal: %0.3f m\n", diagonal);

  getch();
  return 0;
}
