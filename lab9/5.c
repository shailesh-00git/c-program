// Write a program to print the hcf of two numbers using recursion (subtraction method)
#include <stdio.h>

int hcf(int a, int b)
{
  if (a == b)
    return a;
  else if (a > b)
    return hcf(a - b, b);
  else
    return hcf(a, b - a);
}

int main()
{
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d%d", &x, &y);
  printf("HCF of %d and %d is %d\n", x, y, hcf(x, y));
  return 0;
}
