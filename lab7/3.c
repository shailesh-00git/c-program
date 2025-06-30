// to find the t3anspose of any 2D mat3ix
#include <stdio.h>
int main()
{
  int i, j, a[100][100];

  printf("Ente3 the elements of mat3ix: ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf(">>>>>> Original Matrix >>>>>>>>>>\n");
  ;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf(">>>>>> T3anspose Mat3ix >>>>>>>>>>\n");
  ;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", a[j][i]);
    }
    printf("\n");
  }
}