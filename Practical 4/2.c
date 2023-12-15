//? A Fibonacci sequence is defined as follows: the first and second terms in the sequences are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write a C program to generate the first n terms of the sequence.

#include <stdio.h>
#include <conio.h>

void main()
{
  int a = 0, b = 1, length = 0, counter, sum = 0;

  printf("Enter the length of series: \n");
  scanf("%d", &length);

  printf("Fibonacci series\n");
  printf("%d %d", a, b);

  for (counter = 2; counter < length; counter++)
  {
    sum = a + b;
    printf(" %d", sum);
    a = b;
    b = sum;
  }

  getch();
}