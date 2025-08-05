// count alphabets,spaces,words
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  int space = 0, alpha = 0, word = 0;
  fp = fopen("copy.txt", "r");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  while ((ch = fgetc(fp)) != EOF)
  {
    if (ch == ' ')
      space++;
    else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
      alpha++;
  }
  word = space + 1;
  printf("Spaces = %d\nAlphabets = %d\nwords = %d", space, alpha, word);
  fclose(fp);
}