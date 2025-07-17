// to store 10 el in memory and find the mon , max using DMA in c
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p; // Declare an integer pointer
  int i, min, max;
  int n = 10;

  p = (int *)malloc(n * sizeof(int));

  if (p == NULL)
  {
    exit(0);
  }

  printf("Enter 10 integer elements:\n");
  for (i = 0; i < n; i++)
  {

    scanf("%d", p + i);
  }

  min = *p;
  max = *p;

  // Find the minimum and maximum elements
  for (i = 1; i < n; i++)
  {
    if (*(p + i) < min)
    {
      min = *(p + i);
    }
    if (*(p + i) > max)
    {
      max = *(p + i);
    }
  }

  printf("\nMinimum element: %d\n", min);
  printf("Maximum element: %d\n", max);

  free(p);

  return 0;
}