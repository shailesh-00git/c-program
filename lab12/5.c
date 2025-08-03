// Write a program to create structure complex and find the sum of two complex numbers using a function.
#include <stdio.h>
struct complex
{
  int r;
  int i;
};
struct complex sum(struct complex c1, struct complex c2)
{
  struct complex c3;
  c3.r = c1.r + c2.r;
  c3.i = c1.i + c2.i;
  return c3;
}
void main()
{
  struct complex c1 = {1, 2};
  struct complex c2 = {1, 2};
  struct complex c3;
  c3 = sum(c1, c2);
  printf("The sum of complex number is %d+%di", c3.r, c3.i);
 
}