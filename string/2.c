// WAp to enter a character and display the length of chracter
#include <stdio.h>
#include <string.h>
int main()
{
  char str[23];
  int count = 0;
  printf("Enter a string: ");
  gets(str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  printf("The length of sstring is %d", count);
  return 0;
}