// to find a length of string using user defined function
#include <stdio.h>
#include <string.h>
void len(char str[])
{
  int i, count = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  printf("The length of string is %d", count);
}
int main()
{
  char str[20];
  printf("Enter a string: ");
  scanf("%s", str);
  len(str);
}