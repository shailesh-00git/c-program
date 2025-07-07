// write a program to find the largest number in an array using pointer
#include <stdio.h>
int main()
{
  int a[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", (a + i));
  }
  int l = *a;
  for (int i = 0; i < 5; i++)
  {

    if (*(a + i) > l)
      l = *(a + i);
  }
  printf("%d", l);
  return 0;
}