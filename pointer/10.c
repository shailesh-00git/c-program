// to find the sum of elements of an array
#include <stdio.h>
int main()
{
  int a[5];
  int s = 0;
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", (a + i));
  }
  for (int i = 0; i < 5; i++)
  { 
    s += *(a + i);
  }
  printf("sum = %d", s);
  return 0;
}