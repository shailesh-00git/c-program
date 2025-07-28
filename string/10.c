// to concatenate two strings
#include <stdio.h>
#include <string.h>
void conCat(char name1[], char name2[])
{
  int i, j;
  int l1 = strlen(name1);
  for (i = 0; i <= strlen(name2); i++)
  {
    name1[l1 + i] = name2[i];
  }
  puts(name1);
}
int main()
{
  char name1[20] = "shai";
  char name2[] = "lesh";
  conCat(name1,name2);
}