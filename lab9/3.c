
// Write a program to print the sum of the following series 12-22+32-42+...

#include <stdio.h>

int sum(int n)
{
  if (n == 0)
    return 0;
  if (n % 2 == 0)
    return -n * n + sum(n - 1); // subtract even squares
  else
    return n * n + sum(n - 1); // add odd squares
}

int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Sum of the series is %d\n", sum(n));
  return 0;
}