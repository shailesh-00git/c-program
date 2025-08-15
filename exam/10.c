// fabinace series unsing recursuve function
#include <stdio.h>
int fabi(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fabi(n - 1) + fabi(n - 2);
}
int main()
{
  int i, n;
  printf("Entet the number of terms: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%d\n", fabi(i));
  }
  return 0;
}