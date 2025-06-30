// Write a program to display all the prime numbers between n1 and n2
#include <stdio.h>
void prime()
{
  int i, count;
  int n1, n2;
  printf("Enter boundry points: ");
  scanf("%d%d", &n1, &n2);
  for (i = n1; i <= n2; i++)
  {
    count = 0;
    for (int j = 1; j <= i; j++)
    {

      if (i % j == 0)
      {
        count++;
      }
    }
    if (count == 2)
    {
      printf("%d\t", i);
    }
  }
}
int main()
{
  prime();
}