// to find the sum of square terms up to 5
#include <stdio.h>
int sum(int x)
{
  int s = 0;
  if (x == 1)
    return x;
  s= x * x + sum(x - 1);
  return s;
}
int main()
{
  int n = 5;
  printf("The sum is  = %d", sum(5));
}