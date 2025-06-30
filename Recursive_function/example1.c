// To find the sum of natural numbers up to 6=5
#include <stdio.h>
int sum(int);
int main()
{
  int n = 5;
  printf("Sum = %d", sum(n));
}
int sum(int x)
{
  int s;
  if (x == 1)
  {
    return x;
  }
  s = x + sum(x - 1);
  return s;
}