//? Write a C program to find the sum of individual digits of a positive integer.

#include <stdio.h>
#include <conio.h>

void main()
{
  int number, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  while (number > 0)
  {
    sum = sum + number % 10;
    number = number / 10;
  }

  printf("Sum of individual positive integer is %d", sum);
}