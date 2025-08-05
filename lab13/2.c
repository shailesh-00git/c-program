// to copy the content of one file into another
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  FILE *dp;
  fp = fopen("write.txt", "r");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  dp = fopen("copy.txt", "w");
  if (dp == NULL)
  {
    printf("Error");
    exit(0);
  }
  char str;
  while ((str = fgetc(fp)) != EOF)
  {
    fputc(str, dp);
  }
  
  printf("File written sucesfully \n");
  fclose(fp);
  fclose(dp);
}