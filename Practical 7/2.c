#include <stdio.h>
#include <conio.h>

void addMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rows, int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
    }
  }
}

void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rows1, int cols1, int cols2)
{
  for (int i = 0; i < rows1; ++i)
  {
    for (int j = 0; j < cols2; ++j)
    {
      result[i][j] = 0;
      for (int k = 0; k < cols1; ++k)
      {
        result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
      }
    }
  }
}

void printMatrix(int matrix[10][10], int rows, int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

int main(void)
{
  int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
  int rows1, cols1, rows2, cols2;

  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &rows1, &cols1);

  printf("Enter elements of first matrix:\n");
  for (int i = 0; i < rows1; ++i)
  {
    for (int j = 0; j < cols1; ++j)
    {
      scanf("%d", &firstMatrix[i][j]);
    }
  }

  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &rows2, &cols2);

  printf("Enter elements of second matrix:\n");
  for (int i = 0; i < rows2; ++i)
  {
    for (int j = 0; j < cols2; ++j)
    {
      scanf("%d", &secondMatrix[i][j]);
    }
  }

  if (rows1 == rows2 && cols1 == cols2)
  {
    addMatrices(firstMatrix, secondMatrix, result, rows1, cols1);
    printf("Sum of matrices:\n");
    printMatrix(result, rows1, cols1);
  }
  else
  {
    printf("Matrices cannot be added due to mismatched dimensions.\n");
  }

  if (cols1 == rows2)
  {
    multiplyMatrices(firstMatrix, secondMatrix, result, rows1, cols1, cols2);
    printf("Product of matrices:\n");
    printMatrix(result, rows1, cols2);
  }
  else
  {
    printf("Matrices cannot be multiplied due to mismatched dimensions.\n");
  }

  getch();
  return 0;
}