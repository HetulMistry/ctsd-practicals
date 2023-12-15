//? The total distance traveled by vehicle in t seconds is given by distance s = ut+1/2at? where u and a are the initial velocity (m/sec.) and acceleration(m/sec?). Write a C program to find the distance traveled at regular intervals of time given the values of u and a. The program should provide the flexibility to the user to select his own time intervals and repeat the calculations for different values of u and a.

#include <stdio.h>
#include <conio.h>

int main(void)
{
  float interval, velocity, time, acceleration, distance;

  // Taking input from user
  printf("Enter the number of intervals: ");
  scanf("%f\n", &interval);

  // Running loop for the given amount of interval
  for (int i = 1; i <= interval; i++)
  {
    // Taking user input
    printf("Enter the time (s): ");
    scanf("%f\n", &time);

    printf("Enter the velocity (m/s): ");
    scanf("%f\n", &velocity);

    printf("Enter the acceleration (m/s^2): ");
    scanf("%f\n", &acceleration);

    // Calculation
    distance = distance + ((velocity * time) + (acceleration + (time * time)) / 2);
  }

  printf("Total distance covered is %0.2f m", distance);
  getch();

  return 0;
}