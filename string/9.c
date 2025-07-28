// to copy one string to another using user defined function
#include <stdio.h>
#include <string.h>
void scopy(char name[])
{
  char copy[20];
  int i,j=0;
  for (i = 0; name[i] != '\0'; i++)
  {
    copy[i] = name[i];
    
  }
  copy[i] = '\0';
  puts(copy);
}
int main()
{
  char name[20] = "shailesh";
  scopy(name);
}