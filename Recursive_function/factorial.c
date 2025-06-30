// To find the factorial using recursion
#include <stdio.h>
int fact(int x)
{
  if (x == 0 || x == 1)
    return 1;
  else
    return x * fact(x - 1);
}
int main()
{
  int n = 5;
  int result = fact(n);
  printf("The factorial of %d is %d\n", n, result);
  return 0;
}