// Write a program to enter operator and two operan sto In t e resu t. esu m
// displayed from the main()
#include <stdio.h>
int sum(int a, int b)
{
  return a + b;
}
int diff(int a, int b)
{
  return a - b;
}
int product(int a, int b)
{
  return a * b;
}
int div(int a, int b)
{
  return a / b;
}

int main()
{
  int a, b;
  char op;
  printf("Enter the two number: ");
  scanf("%d%d %c", &a, &b, &op);
  switch (op)
  {
  case '+':
    printf("Sum = %d", sum(a, b));
    break;
  case '-':
    printf("difference = %d", diff(a, b));
    break;
  case '*':
    printf("Product = %d", product(a, b));
    break;
  case '/':
    printf("Divison = %d", div(a, b));
    break;
  default:
    printf("Enter valit operator");
  }
  return 0;
}