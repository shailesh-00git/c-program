// to create a strusture and display it
#include <stdio.h>
struct student
{
  char name[20];
  int id;
  int roll;
  char address[30];
};
int main()
{
  struct student s;
  int i;
  printf("Enter the details of a student: \n");
  printf("Name\t id\troll\tAddress\n");
  for (i = 0; i < 3; i++)
  {
    printf("Student NO %d\n", i + 1);
    scanf("%s%d%d%s", s.name, &s.id, &s.roll, s.address);
  }

  printf("\nDisplaying the detail of students:\n");
  for (i = 0; i < 3; i++)
  {
    printf("Name = %s\nId = %d\nRoll.No = %d,\nAddress = %s", s.name, s.id, s.roll, s.address);
  }
  return 0;
}