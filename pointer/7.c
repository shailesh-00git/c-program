// Example of relationship between pointer and array
#include <stdio.h>
int main()
{
  int a[5] = {10, 20, 30, 40, 50};
  int *q;
  q = a;
  printf("\n%d",&a[2]);
  printf("\n%d",*(a+2
  ));
  printf("\n%d",*q);
  printf("\n%d",2[a]);
  for (int i = 0; i < 5; i++)
    printf("\n%d", *(q + i));

  return 0;
}