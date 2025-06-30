// To find the value of y = X^n
#include <stdio.h>
int value(int x, int n)
{
  if (n == 0)
    return 0;
    // if(n==1)
    //return 1; This code is also valid
  else
    return x * value(x, n - 1);
}
int main()
{
  int x = 2, n = 3;
  printf("%d", value(x, n));
  return 0;
}