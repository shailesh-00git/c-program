// Write a program to display the reverse of any number using recursive function.
#include <stdio.h>

int rev(int n)
{
  static int r = 0; // static variable to accumulate the reverse
  if (n == 0)
    return r;
  r = r * 10 + n % 10;
  return rev(n / 10);
}

int main()
{
  int a = 123;

  printf("Reverse is %d\n", rev(a));
  return 0;
}