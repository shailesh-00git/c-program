// use of library function strlen
#include <stdio.h>
#include <string.h>
int main()
{
  char str[2] = {'a'};

  char str1[2];
  strcpy(str1, str);
  puts(str1);
  return 0;
}