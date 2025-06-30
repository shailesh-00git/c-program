// to find the sum of all elememts of a function
#include <stdio.h>
int sum(int n)
{
  if (n == 0)
    return 0;
  else

    return (n % 10) + (sum(n / 10));
}
int main()
{
  int n = 123;
  printf("%d", sum(n));
  return 0;
}