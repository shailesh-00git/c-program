// pointer  pointing to pointer(pointer to pointer) example
#include <stdio.h>
int main()
{
  int a = 1;
  int *p;
  int **q;
  p = &a;
  q = &p;
  printf("%d %d %d", a, *p, **q);
  return 0;
}