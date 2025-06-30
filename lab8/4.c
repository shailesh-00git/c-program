// Write a program to check whether a number entered is palindrome or not
#include <stdio.h>
void palin()
{
  int n, d, rev = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  int temp = n;
  while (n > 0)
  {
    d = n % 10;
    rev = rev * 10 + d;
    n = n / 10;
  }
  if (rev == temp)
    printf("Palindrome");
  else
    printf("Not palindrome");
}
int main()
{
  palin();
}