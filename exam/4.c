// create a structure name emplayee and name addresss salary as its menbers whose salary is between 30  50 and lives in ktm
#include <stdio.h>
#include<string.h>
struct employee
{
  char name[20];
  char address[30];
  int age;
};
int main()
{
  int i;
  struct employee e[5];
  printf("Enter the detail for 5 empployee\n");
  for (i = 0; i < 5; i++)
  {
    scanf("%s%s%d", e[i].name, e[i].address, &e[i].age);
  }
  // printing
  for (i = 0; i < 5; i++)
  {
    if (strcmp(e[i].address, "k") == 0 && e[i].age > 30 && e[i].age < 50)
    {
      printf("\n%s\n%s\n%d", e[i].name, e[i].address, e[i].age);
    }
  }
  return 0;
}
