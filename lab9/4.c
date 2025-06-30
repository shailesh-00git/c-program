// To find the reverse of a number using recursive function
#include <stdio.h>
int reverse(int n)
{
  static int rev = 0;
  if (n == 0)
    return rev;
  else
  {
    int d = n%10;
    rev = rev * 10 + d;
    return reverse(n / 10);
  }
}
int main()
{
  int n = 123;
  printf("Reverse of %d is %d\n", n, reverse(n));
  return 0;
}