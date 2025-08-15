// to find the reverse of string without the strring handling function
#include <stdio.h>
int main()
{
  char str[20];
  char str1[20];
  int i, j = 0, len = 0;
  printf("Enter a string: ");
  scanf("%s", str);
  for (i = 0; str[i] != '\0'; i++)
  {
    len++;
  }

  for (i = len - 1; i >= 0; i--)
  {
    str1[j] = str[i];
    j++;
  }
  str1[j] = '\0';
  printf("%s", str1);
  return 0;
}