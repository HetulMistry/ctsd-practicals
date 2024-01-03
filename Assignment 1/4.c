//? Write a c program in c to find the area and perimeter of a circle.

#include <stdio.h>
#include <conio.h>

#define M_PI 3.14159265358979323846

int main(void)
{
  float radius, area, perimeter;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = M_PI * radius * radius;
  perimeter = 2 * M_PI * radius;

  printf("Area of circle: %0.3f\n", area);
  printf("Perimeter of circle: %0.3f", perimeter);

  getch();
  return 0;
}