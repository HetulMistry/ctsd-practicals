//? Write a c program in c to find the area and perimeter of a circle.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{
  float radius, area, perimeter;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = M_PI * r * r;
  perimeter = 2 * M_PI * r;

  printf("Area of circle: %f\n", area);
  printf("Perimeter of circle: %f", perimeter);

  getch();
}