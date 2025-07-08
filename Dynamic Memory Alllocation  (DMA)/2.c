// to display the even numbers of the element using DMA
// to display the elements of a array insig DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int i, n;
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
    if (*(ptr +i) % 2 == 0)
    {
      printf("%d", *(ptr + i));
    }
  }
  free(ptr);
  return 0;
}