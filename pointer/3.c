// To find the largest among three numbers using pointer usong function
#include <stdio.h>
int greater(int *p, int *q, int *r)
{
  if (*p > *q && *p > *r)
    printf("%d is greatest", *p);
  else if (*q > *p && *q > *r)
    printf("%d is greatest", *q);
  else
    printf("%d is greatest", *r);
}
int main()
{
  int a = 1, b = 2, c = 3;
  int *p, *q, *r;
  p = &a;
  q = &b;
  r = &c;
  greater(p, q, r);

  return 0;
}