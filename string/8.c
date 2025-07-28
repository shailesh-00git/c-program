// to compare to strings
#include <stdio.h>
#include <string.h>
void scomp(char name1[20], char name2[20])
{
  int i, flag = 0;
  for (i = 0; name1[i] != '\0' || name2[i] != '\0'; i++)
  {
    if (name1[i] != name2[i])
    {
      flag++;
      break;
    }
  }
  if (flag == 1)
    printf("Strings are not equal");
  else
    printf("strings are  equal");
}
int main()
{
  char name1[20], name2[30];
  printf("Enter name1: ");
  ;
  gets(name1);
  printf("Enter name2: ");
  gets(name2);
  scomp(name1, name2);
}