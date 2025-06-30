// Write a program to print the Fibonacci series using a function
#include <stdio.h>
void fabi()
{
  int n, i;
  int prev = 0, curr = 1, nxt;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n <= 0)
  {
    printf("Enter a positive number.\n");
    return;
  }
  else
  {
    printf("%d\t%d\t", prev, curr);

    for (i = 2; i < n; i++)
    {
      nxt = prev + curr;
      printf("%d\t", nxt);
      prev = curr;
      curr = nxt;
    }
    
  }
}
int main()
{
  fabi();
}