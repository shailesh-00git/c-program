// 2. WAP to circularly shift their values of three variaables. Like value of x must go to y, value of
// original y must go z and that of z to x using a function.


#include <stdio.h>
void swap(int *a, int *b, int *c)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = *c;
  *c = temp;
  printf("a=%d, b=%d,c=%d", *a, *b, *c);
}
int main()
{
  int a = 1, b = 2, c = 3;
  printf("Befor swapping a=%d, b=%d,c=%d", a, b, c);
  swap(&a, &b, &c);
  return 0;
}