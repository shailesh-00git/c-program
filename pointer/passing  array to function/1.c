// WAP to display the elements of a function using array
#include <stdio.h>
void disp(int [],int);
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  disp(a, 5);
  return 0;
}
void disp(int a[5], int x)
{
  for (int i = 0; i < x; i++)
  {
    printf("%d\t", a[i]);
  }
}