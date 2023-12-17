//? Write a C program, which takes two integer operands and one operator from the user, performs the operation and then prints the result. (Consider the operators +,-,*,%,/ and use Switch Statement)

#include <stdio.h>
#include <conio.h>

void main(void)
{
  int a, b, c;
  char ch;

  printf("Enter the operator (+, -, /, *, %): \n");
  scanf("%c", &ch);

  printf("Enter the values of a and b: \n");
  scanf("%d%d", &a, &b);

  switch (ch)
  {
  case '+':
    c = a + b;
    printf("a + b = %d.", c);
    break;

  case '-':
    c = a - b;
    printf("a - b  %d.", c);
    break;

  case '*':
    c = a * b;
    printf("a * b  %d.", c);
    break;

  case '/':
    c = a / b;

    if (b != 0)
    {
      c = (float)a / b;
      printf("a / b  %d.", c);
    }
    else
    {
      printf("Division by zero is not allowed.\n");
    }

    break;

  case '%':
    c = a % b;
    printf("a % b  %d.", c);
    break;
  }

  getch();
}