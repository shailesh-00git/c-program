// to show the concept of nexted structure in c
#include <stdio.h>
struct dob
{
  int day;
  int month;
  int year;
};
struct student
{
  char name[20];
  struct dob d;
};

int main()
{
  struct student s = {"shailesh", 2, 2, 2025};
  printf("Name = %s\nDOB = %d/%d/%d", s.name, s.d.day, s.d.month, s.d.year);
}