// enter 10 elements in an array and find the largest and smallest
#include <stdio.h>
int main()
{
  int a[10], i, large, small;
  printf("Enter the 10 elements : ");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
  }
  large = a[0];
  small = a[0];
  for (i = 0; i < 10; i++)
  {

    if (a[i] > large)
    {
      large = a[i];
    }
  }
  for (i = 0; i < 10; i++)
  {
    if (a[i] < small)
    {
      small = a[i];
    }
  }
  printf("largest number is %d\n", large);
  printf("Smallest  number is %d", small);
  return 0;
}