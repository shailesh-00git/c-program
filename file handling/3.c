// to write into a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  FILE *pt;
  // storing string
  char ch[20];
  int num = 23;
  pt = fopen("write.txt", "w");
  if (pt == NULL)
  {
    exit(0);
  }
  else
  {
    printf("Enter a string: ");
    gets(ch);
    // for (int i = 0; i != strlen(ch); i++)
    // {
    //   fputc(ch[i], pt);
    // }
    fprintf(pt, "Name = %s,Number = %d", ch, num);
  }
  printf("File written sucessfully");
  fclose(pt);
}