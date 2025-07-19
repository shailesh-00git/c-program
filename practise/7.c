// to find the hce of two numbers
#include <stdio.h>

// rev using recursive ffunction
int rev(int n)
{
  static int r = 0;
  if (n == 0)
    return r;
  else
  {
    r = r + ((n % 10) * (n % 10) * (n % 10));
    return rev(n / 10);
  }
}
int main()
{
  int n = 342;
  // int rev = 0, d;
  // int temp = n;
  // while (n > 0)
  // {
  //   d = n % 10;
  //   rev = rev + d * d * d;
  //   n = n / 10;
  // }
  int temp = n;

  if (rev(n) == temp)
    printf("pallin drome");
  else
    printf("not");
}