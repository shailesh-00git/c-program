// to display the elements of a array using DMA
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int i, n, key, found;
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
    printf("%d\t", *(ptr + i));
  }
  // searching
  printf("\n  Enter search element");
  scanf("%d", &key);
  for (i = 0; i < n; i++)
  {
    if (key == *(ptr + i))
    {
      found = 1;
    }
  }
  if (found == 1)
  {
    printf("Element found");
  }

  free(ptr);
  return 0;
}