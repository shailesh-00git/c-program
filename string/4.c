// WAP to enter a string and display its length using the user defined function
#include <stdio.h>
#include <string.h>
int disp(char str[10])
{

  int i, count=0;
  for (i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}
int main()
{
  char str[10];
  printf("enter a string: ");
  gets(str);
  printf("The length of string is %d", disp(str));
  return 0;
}