// write a program to write a sentenc in file and display it
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  char ch[20];
  fp = fopen("write.txt", "w");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  printf("Enter a small sentence: ");
  gets(ch);
  fprintf(fp, "%s", ch);
  printf("\nFile written ssucessfully");
  fclose(fp);
  // for reading the file
  fp = fopen("write.txt", "r");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  char c;
  while (1)
  {
    c = fgetc(fp);
    if (c == EOF)
      break;
    printf("%c", c);
  }
  fclose(fp);
}