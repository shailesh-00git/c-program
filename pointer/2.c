// To find the largest among three numbers using pointer
#include <stdio.h>
int main()
{
  int a = 1, b = 2, c = 3;
  int *p, *q, *r;
  p = &a;
  q = &b;
  r = &c;
  if (*p > *q && *p > *r)
    printf("%d is greatest", *p);
  else if (*q > *p && *q > *r)
    printf("%d is greatest", *q);
  else
    printf("%d is greatest", *r);
  return 0;
}