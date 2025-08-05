// writing into file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *fp = NULL;
  char ch[150];
  fp = fopen("abc.txt", "r");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  // // while ((ch = fgetc(fp)) != EOF)
  // while (!feof(fp))
  // {
  //   ch = fgetc(fp);

  //   printf("%c", ch);
  // }
  while (!feof(fp))
  {

    fgets(ch, 10, fp);
    printf("%s", ch);
  }

  fclose(fp);

  return 0;
}