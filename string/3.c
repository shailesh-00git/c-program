// WAP to reverse a string
#include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  char new[20];
  printf("Enter a string: ");
  gets(str);
  int len = 0;
  int j = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    len++;
  }
  for (int i = len - 1; i >= 0; i--)
  {
    new[j] = str[i];
    j++;
  }
  new[j] = '\0';
  printf("There reversed string is ");
  puts(new);
  return 0;
}
