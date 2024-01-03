//? Write a C program to find the largest integer in a list of integers.

#include <stdio.h>
#include <conio.h>

int main(void)
{
  int arr[25], large, small, size;

  printf("Enter size of array (max 25):");
  scanf("%d", &size);

  printf("Enter integer array elements:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  large = arr[0];
  small = arr[0];

  for (int i = 1; i < size; ++i)
  {

    if (arr[i] > large)
    {
      large = arr[i];
    }
    if (arr[i] < small)
    {
      small = arr[i];
    }
  }

  printf("Largest element in array: %d\n", large);
  printf("Smallest element in array: %d", small);

  getch();
  return 0;
}
