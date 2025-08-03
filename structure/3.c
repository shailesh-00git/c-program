// nested structure
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
  int roll;
  struct dob d;
};
int main()
{
  struct student s = {"shailesh", 20, 24, 6, 2025};
  printf("Name = %s\n", s.name);
  printf("Roll.NO = %d\n", s.roll);
  printf("DOB = %d/%d/%d", s.d.day, s.d.month, s.d.year);
  return 0;
}