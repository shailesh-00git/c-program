#include <stdio.h>
#include <stdlib.h>
void main()
{
  FILE *fp;
  char ch;
  fp = fopen("abc.txt", "r");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  while (1)
  {
    ch = fgetc(fp);
    if (ch == EOF)
    {
      break;
    }
    else
    {
      printf("%c", ch);
    }
  }
  // fprintf(fp, "\nThis is my first program in file handling\n");
  fclose(fp);
}