// to display the elements of a 2D matrix
#include <stdio.h>

void disp(int[][3], int, int);
int main()
{
  int a[2][3] = {{1, 2, 3}, {1, 2, 3}};
  disp(a, 2, 3);
}
void disp(int a[][3], int r, int c)
{
  int s = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      s += a[i][j];
    }
    }
  printf("%d", s);
}