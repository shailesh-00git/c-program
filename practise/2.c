// to generate fabinacoo series up to 13th terms using recursive function
#include <stdio.h>
int fab(int n)
{
  if (n == 0)
  {
    return 0; // Base case: 0th term is 0
  }
  else if (n == 1)
  {
    return 1; // Base case: 1st term is 1
  }
  else
    return fab(n - 1) + fab(n - 2);
}
int main()
{
  int i, n = 13;
  for (i = 0; i < n; i++)
  {
    printf("%d\t", fab(i));
  }
}