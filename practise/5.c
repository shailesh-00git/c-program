// to print the fabino serie upto n terms
#include <stdio.h>
int fab(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fab(n - 1) + fab(n - 2);
}
int main()
{
  int n, i;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%d\t", fab(i));
  }
}