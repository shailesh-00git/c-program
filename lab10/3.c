// 3.WAP to display the largest and smallest number out of n elements passed to a function and result
// must be displayed from main ().

#include <stdio.h>
int laSum(int a[6], int x, int *min, int *max)
{
  *max = *a; // *a==a[0]
  *min = a[0];
  // for finding large
  for (int i = 1; i < x; i++)
  {
    if (*(a + i) > *max) /// a[i]=(a+i)
    {
      *max = a[i];
    }
    if (*(a + i) < *min) /// a[i]=(a+i)
    {
      *min = a[i];
    }
  }
}
int main()
{
  int a[] = {1, 2, 3, 4, 5, 6};
  int min, max;

  laSum(a, 6, &min, &max);
  printf("large = %d, small  = %d", max, min);
  return 0;
}