// to enter 5 elements in an array and diaplay their sum
#include <stdio.h>
int main()
{
  int a[5], i, sum = 0;
  printf("Enter 5 numbers: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 5; i++)
  {
    sum = sum + a[i];
  }
  printf("Sum of five numbers is %d",sum);
  return 0;
}