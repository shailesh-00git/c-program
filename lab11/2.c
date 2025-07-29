// to concate two strings using user defined funcction
#include <stdio.h>
void concat(char str[], char str1[])
{
  int i, len = 0, len1 = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    len++;
  }
  for (i = 0; str1[i] != '\0'; i++)
  {
    len1++;
  }
  // main login
  for (i = 0; i <= len1; i++)
  {
    str[len + i] = str1[i];
  }
  // displaying concated string
  printf("%s", str);
}
int main()
{
  char str[10], str1[20];
  printf("Enter first string: ");
  scanf("%s", str);
  printf("Enter second string: ");
  scanf("%s", str1);
  concat(str, str1);
}