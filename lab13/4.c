// read the value for 3 emplayes i.e name,basic salary,age
// and display the recoro fo those employee whose salary is less tha 1000
#include <stdio.h>
#include <stdlib.h>
struct employe
{
  char name[20];
  int age;
  int salary;
};
int main()
{
  struct employe b[4];
  FILE *fp;
  fp = fopen("employe.txt", "w");
  if (fp == NULL)
  {
    printf("Error");
    exit(0);
  }
  for (int i = 0; i < 3; i++)
  {

    printf("Enter the name: ");
    scanf("%s", b[i].name);
    printf("Enter age : ");
    scanf("%d", &b[i].age);
    printf("Enter salary :");
    scanf("%d", &b[i].salary);
    fprintf(fp, "%s %d %d\n", b[i].name, b[i].age, b[i].salary);
  }
  printf("File added sucessfully\n");
  fclose(fp);
  struct employe b1[4];
  int total = 0;
  fp = fopen("employe.txt", "r");
  for (int i = 0; i < 3; i++)
  {
    fscanf(fp, "%s%d%d", b1[i].name, &b1[i].age, &b1[i].salary);
    if (b1[i].salary < 1000)
    {
      printf("Name = %s\tAge = %d\tSalary = %d\n", b1[i].name, b1[i].age, b1[i].salary);
    }
  }

  fclose(fp);
}