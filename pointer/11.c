// 2D matrix and find thw sum of all elements
#include <stdio.h>
int main()
{
  int a[2][2];
  int i, j, s = 0;
  printf("Enter the 4 elements:\n ");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {

      scanf("%d", (*(a + i) + j));
    }
  }
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {

      s += *(*(a + i) + j);
    }
  }
  printf("%d  is sum of the matrix  elements", s);
  return 0;
}