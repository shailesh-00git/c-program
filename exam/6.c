#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int i, n, sum = 0;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Allocate memory for n integers
  ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory allocation failed.\n");
    exit(1);
  }

  // Input elements
  // printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &ptr[i]);
  }

  // Calculate sum
  for (i = 0; i < n; i++)
  {
    sum += ptr[i];
  }

  printf("\nThe sum of elements is: %d\n", sum);

  // Free allocated memory
  free(ptr);
  return 0;
}
