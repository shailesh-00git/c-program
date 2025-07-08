// Write a program to find the factorial of any number using recursion.

#include <stdio.h>
int fact(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fact(n - 1);
}
int main()
{
  int n = 5;
  printf("%d is the factorial", fact(n));
}