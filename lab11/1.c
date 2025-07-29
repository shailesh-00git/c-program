// to find the length of a string ussing user defined function
#include <stdio.h>
void len(char str[])
{
  int i, c = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    c++;
  }
  printf("The length of string is %d", c);
}
int main()
{
  char str[23];
  printf("Enter a string: ");
  scanf("%s", str);
  len(str);
}