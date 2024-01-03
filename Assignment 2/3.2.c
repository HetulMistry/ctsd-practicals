//? Write a c Program on given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the kth position of the final sorted array.
//! Explanation:
//* Input :
// Array 1 - 1 4 2 3 5
// Array 2 - 7 8 6
// k = 5
//* Output : 5
//? Because The final sorted array would be -1, 2, 3, 4, 5, 6, 7, 8, The 5th element of this array is 6.

#include <stdio.h>
#include <conio.h>

int findElement(int arr1[], int N, int arr2[], int M, int K)
{
  int i = 0, j = 0, count = 0, result;

  while (i < N && j < M)
  {
    if (arr1[i] < arr2[j])
    {
      result = arr1[i];
      i++;
    }
    else
    {
      result = arr2[j];
      j++;
    }
    count++;
    if (count == K)
    {
      return result;
    }
  }

  while (i < N)
  {
    result = arr1[i];
    i++;
    count++;
    if (count == K)
    {
      return result;
    }
  }

  while (j < M)
  {
    result = arr2[j];
    j++;
    count++;
    if (count == K)
    {
      return result;
    }
  }
  return result;
}

int main(void)
{
  int arr1[100], arr2[100], N, M, K;

  printf("Enter the size of array 1: ");
  scanf("%d", &N);

  printf("Enter the elements of array 1: ");
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the size of array 2: ");
  scanf("%d", &M);

  printf("Enter the elements of array 2: ");
  for (int i = 0; i < M; i++)
  {
    scanf("%d", &arr2[i]);
  }

  printf("Enter the value of K: ");
  scanf("%d", &K);

  int result = findElement(arr1, N, arr2, M, K);

  printf("Kth element of the final sorted array: %d\n", result);

  getch();
  return 0;
}