// void pointer
#include <stdio.h>
int main()
{
  int a = 2;
  void *p;
  p = &a;
  printf("%d", *(int *)p); // typecating of pointer
  return 0;
}