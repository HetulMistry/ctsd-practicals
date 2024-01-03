//? 2's complement of a number is obtained by scanning it from right to left and complementing all the bits after the first appearance of a 1. Thus 2's complement of 11100 is 00100. Write a C program to find the 2's complement of a binary number.

#include <stdio.h>
#include <conio.h>

void findTwosComplement(char binary[])
{
  int i;

  for (i = 0; binary[i] != '\0'; i++)
  {
    if (binary[i] == '1')
    {
      break;
    }
  }

  for (i = 0; binary[i] != '\0'; i++)
  {
    binary[i] = (binary[i] == '0') ? '1' : '0';
  }

  printf("2's complement of the binary number: %s\n", binary);
}

int main(void)
{
  char binary[100];

  printf("Enter a binary number: ");
  scanf("%s", binary);

  findTwosComplement(binary);

  getch();
  return 0;
}