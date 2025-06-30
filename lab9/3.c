// To find the sm of the series 1^2+2^2+3^2+....... to n terms

#include<stdio.h>
int sum(int n)
{
  if (n == 1)
    return 1;
  else
    return n * n + sum(n - 1);
}
int main()
{
  int n = 5;
  printf("%d", sum(n));
  return 0;
}