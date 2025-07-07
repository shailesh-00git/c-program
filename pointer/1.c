// To wap the number using pointer
#include <stdio.h>
int swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
int main()
{
  int a = 1, b = 2;
  printf("a = %d and b = %d\n",a, b);
  swap(&a, &b);
  printf("a = %d and b = %d", a, b);
  return 0;
}