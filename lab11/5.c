// to enter the name of 5 students and sort them in ascending order using pointer concept
#include <stdio.h>
#include <string.h>

int main()
{
  char str[20][20], temp[20];
  int i, j;

  printf("Enter 5 names:\n");
  for (i = 0; i < 5; i++)
  {
    scanf("%s", str + i);
  }

  // Sort names using bubble sort
  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (strcmp(str[i], str[j]) > 0)
      {
        // Swap strings using temp
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }

  // Print sorted names
  printf("\nNames in ascending order:\n");
  for (i = 0; i < 5; i++)
  {
    printf("%s\n", str[i]);
  }

  return 0;
}