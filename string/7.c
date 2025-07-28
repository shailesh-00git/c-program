// to find the reverse of string using a user definedd function
#include <stdio.h>
#include <string.h>
void srev(char name[])
{
  char rev[20];
  int i, c = 0, j = 0;
  for (i = 0; name[i] != '\0'; i++)
  {
    c++;
  }
  for (i = c - 1; i >= 0; i--)
  {
    rev[j] = name[i];
    j++;
  }
  rev[j] = '\0';
  printf("The reverse of string is : ");
  puts(rev);
}
int main()
{
  char name[20];
  printf("Enter a name: ");
  scanf("%s", name);
  srev(name);
}