#include <stdio.h>
int main()
{
  int a[2][2], b[2][2], i, j;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", a[i][j] + b[i][j]);
    }
    printf("\n");
  }
  return 0;
}