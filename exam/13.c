#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  char name[20];
  int id;
};

int main()
{
  struct student s[2];
  FILE *ptr;
  int i;

  // Open file for writing
  ptr = fopen("student.txt", "w");
  if (ptr == NULL)
  {
    printf("Error opening file for writing!\n");
    exit(1);
  }

  printf("Enter the details of 5 students (name id):\n");
  for (i = 0; i < 2; i++)
  {
    printf("Student %d: ", i + 1);
    scanf("%s %d", s[i].name, &s[i].id);
    fprintf(ptr, "%s %d\n", s[i].name, s[i].id); // write to file
  }
  fclose(ptr);
  printf("\n.....Record Added Successfully......\n");

  // Open file for reading
  ptr = fopen("student.txt", "r");
  if (ptr == NULL)
  {
    printf("Error opening file for reading!\n");
    exit(1);
  }

  struct student temp;
  while (fscanf(ptr, "%s %d", temp.name, &temp.id) == 2)
  {
    if (strcmp(temp.name, "ram") == 0)
    {
      printf("Name = %s ID = %d\n", temp.name, temp.id);
    }
  }

  fclose(ptr);
  return 0;
}
