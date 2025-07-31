// create a stucture of student containing name,rollno and mask as its member.Take inpput for 5 students and display the detail of student who has highest mask
#include <stdio.h>

struct student
{
  char name[23];
  int roll;
  float marks;
};

int main()
{
  struct student s[5]; // Array of structures for 5 students
  int i;
  float highest_marks = 0;
  int index = 0;

  printf("Enter the details of 5 students:\n");
  for (i = 0; i < 5; i++)
  {
    printf("\nStudent no %d\n", i + 1);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Roll: ");
    scanf("%d", &s[i].roll);
    printf("Marks: ");
    scanf("%f", &s[i].marks);

    // Track highest marks
    if (s[i].marks > highest_marks)
    {
      highest_marks = s[i].marks;
      index = i;
    }
  }

  printf("\nStudent with highest marks:\n");
  printf("Name: %s\n", s[index].name);
  printf("Roll: %d\n", s[index].roll);
  printf("Marks: %.2f\n", s[index].marks);

  return 0;
}