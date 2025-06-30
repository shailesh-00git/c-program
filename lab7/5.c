// Write a program to find the multiplication of 2D matric of size 2x3 and 3x2
#include <stdio.h>
int main()
{
  int a[2][3], b[3][2], c[2][2], i, j, k;
  printf("enter the elements of first matrix (2x3): ");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("enter the elements of second matrix (3x2): ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  // Matrix multiplication
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      c[i][j] = 0;
      for (k = 0; k < 3; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  printf("resultant matrix is:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}