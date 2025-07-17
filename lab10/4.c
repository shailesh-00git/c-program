// 4.WAP to read an array of size n and display it in ascending order using concept of pointer.

#include <stdio.h>
int main()
{
  int i, j, a[6] = {1, 3, 5, 7, 4, 2}, temp;
  for (i = 0; i < 6; i++)
  {
    for (j = i + 1; j < 6; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i = 0; i < 6; i++)
  {
    printf("%d\t", a[i]);
  }
  return 0;
}