//? Write a c program to calculate Area and Volume of a cylinder.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{

  float radius, height, area, volume;

  printf("Enter the radius of cylinder (m): ");
  scanf("%f", &radius);

  printf("Enter the height of cylinder (m): ");
  scanf("%f", &height);

  area = 2 * M_PI * radius * (radius + height);
  volume = M_PI * (radius * radius) * height;

  printf("Area: %0.3f m^2\n", area);
  printf("Volume: %0.3f m^3\n", volume);

  getch();
}