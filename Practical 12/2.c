//? Write a C program to convert a Roman numeral to its decimal Equivalent.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int romanToDecimal(char roman[])
{
  int i, decimal = 0;
  int values[7] = {1000, 500, 100, 50, 10, 5, 1};
  char symbols[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};

  for (i = 0; roman[i] != '\0'; i++)
  {
    int j;

    for (j = 0; j < 7; j++)
    {
      if (roman[i] == symbols[j])
      {
        break;
      }
    }

    if (values[j + 1] > values[j] && roman[i + 1] != '\0' && roman[i + 1] == symbols[j + 1])
    {
      decimal += (values[j + 1] - values[j]);
      i++;
    }
    else
    {
      decimal += values[j];
    }
  }

  return decimal;
}

void main(void)
{
  char roman[20];

  printf("Enter a Roman numeral: ");
  scanf("%s", roman);

  int decimal = romanToDecimal(roman);

  printf("Decimal equivalent: %d\n", decimal);

  getch();
}