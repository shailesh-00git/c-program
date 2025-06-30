// write a program to enter a 2D matrix and check if it is identity matrix or not
#include <stdio.h>
int main()
{
  int a[2][2], i, j;
  printf("enter the elements of the matrix: ");
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
      if (i == j && a[i][j] != 1)
      {
        printf("not an identity matrix\n");
        return 0;
      }
      else if (i != j && a[i][j] != 0)
      {
        printf("not an identity matrix\n");
       return 0;
      }
    }
  }
  printf("identity matrix\n");
  return 0;
}