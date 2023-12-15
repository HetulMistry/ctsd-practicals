//? Write a c program on Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.

#include <stdio.h>
#include <conio.h>

void leftRotateByDSteps(int arr[], int N, int D)
{
  D = D % N;

  for (int i = D; i < N; i++)
  {
    printf("%d ", arr[i]);
  }

  for (int i = 0; i < D; i++)
  {
    printf("%d ", arr[i]);
  }
}

void main(void)
{
  int arr[100], N, D;

  printf("Enter the size of the array: ");
  scanf("%d", &N);

  printf("Enter the elements of the array: ");
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number of steps to rotate the array: ");
  scanf("%d", &D);

  printf("Rotated array: ");
  leftRotateByDSteps(arr, N, D);

  getch();
}