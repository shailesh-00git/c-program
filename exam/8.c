// tp copy the file  content from one to another text
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
  FILE *src;
  FILE *des;
  char ch;
  src = fopen("file.txt", "r");
  des = fopen("destination.txt", "w");
  while (fscanf(src, "%c", &ch) == 1)
  {
    fprintf(des, "%c", ch);
  }
  printf("File written sucessfully.....");
  getch();
  fclose(src);
  fclose(des);
  return 0;
}