// WAP to enter your name and display it using the string
#include <stdio.h>
#include <string.h>
int main()
{
  char name[21];
  printf("Enter your name: ");
  gets(name);
  printf("Your name is ");
  puts(name);
  return 0;
}