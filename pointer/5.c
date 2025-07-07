// Pointer to array
//  to find the largest  in the array using pointer
#include <stdio.h>
int main()
{
  int a[3] = {1, 5, 30};
  int *p[3];

  int i;

  for (i = 0; i < 3; i++)
  {
    p[i] = &a[i];
  }
  int l = *p[0];
  for (i = 1; i < 3; i++)
  {
    if (*p[i] > l)
      l = *p[i];
  }
  printf("%d is large", l);
  return 0;
}