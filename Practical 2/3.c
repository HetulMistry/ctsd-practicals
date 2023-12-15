//? Write a c program to calculate Area and Volume of a cylinder.

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{

  float radius, height, area, volume;

  // Taking user input
  printf("Enter the radius of cylinder (m): ");
  scanf("%f", &radius);

  printf("Enter the height of cylinder (m): ");
  scanf("%f", &height);

  // Calculating area and volume
  area = 2 * M_PI * radius * (radius + height);
  volume = M_PI * (radius * radius) * height;

  // Printing the result upto 3 decimal points
  printf("Area: %0.3f m^2\n", area);
  printf("Volume: %0.3f m^3\n", volume);

  getch();

  return 0;
}