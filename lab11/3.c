// to find the reverse of the given string using the concept of pointer
#include <stdio.h>
int main()
{
  char str[20], rev[20];
  int i, j, c = 0;
  printf("Enter a string: ");

  scanf("%s", str);

  // find the leength of the string
  for (i = 0; str[i] != '\0'; i++)
  {
    c++;
  }

  // to reverse of string
  for (i = c - 1; i >= 0; i--)
  {
    *(rev + j) = *(str + i);
    j++;
  }
  rev[j] = '\0';

  // printing the reversed string
  printf("%s", rev);
  return 0;
}