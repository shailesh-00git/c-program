// to display the sum of all elements numbers of the array using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int i, n, sum = 0;
  printf("Enter the size of elements: ");
  scanf("%d", &n);
  ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    exit(0);
  }
  else
  {
    for (i = 0; i < n; i++)
    {
      scanf("%d", ptr + i);
    }
  }
  printf("\nDisplaying the elements:\n");
  for (i = 0; i < n; i++)
  {
    sum += *(ptr + i);
  }
  printf("%d is sum", sum);
  free(ptr);
  return 0;
}