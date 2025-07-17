// to input ages of 30 people and find the lecond largest age
#include <stdio.h>
int main()
{
  int a[30], i, large, slarge;
  printf("Enter the age of 30 people: \n");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }

  // find large and second large
  if (a[0] > a[i])
  {
    large = a[0];
    slarge = a[1];
  }
  else
  {
    large = a[1];
    slarge = a[0];
  }

  // main logic

  for (i = 2; i < 5; i++) // loop start leftin first two element
  {
    if (a[i] > large)
    {
      slarge = large;
      large = a[i];
    }
    else if (a[i] > slarge && a[i] != large)
    {
      slarge = a[i];
    }
  }

  printf("slarge = %d", slarge);
  return 0;
}