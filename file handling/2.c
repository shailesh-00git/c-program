#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[20];
  int id;
};

int main()
{
  struct student s;
  FILE *fp;
  char ch[100];

  fp = fopen("abc.txt", "w");
  if (fp == NULL)
  {
    printf("Error opening file.\n");
    exit(1);
  }

  printf("Enter name: ");
  scanf("%s", s.name);

  printf("Enter id: ");
  scanf("%d", &s.id);

  fprintf(fp, "Name = %s\nId = %d\n", s.name, s.id);
  printf("File created successfully.\n");
  fclose(fp);

  // Reading from the file
  fp = fopen("abc.txt", "r");
  if (fp == NULL)
  {
    printf("Error opening file.\n");
    exit(1);
  }
  char name[20];
  int id;

  printf("\nReading from file:\n");
  fscanf(fp, "%s %d", name, &id);
  printf("Name=%s ,id=%d", name, id);

      fclose(fp);
  return 0;
}
