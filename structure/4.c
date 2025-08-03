// passing structure datatype to function
// to add two complex numbers c1 and c2 using the function call by value
#include <stdio.h>
struct complex
{
  int real;
  int img;
};
struct complex sum(struct complex c1, struct complex c2)
{
  struct complex c3;
  c3.real = c1.real + c2.real;
  c3.img = c1.img + c2.img;
  printf("Sum of cimplex number is %d+%di", c3.real, c3.img);
}
int main()
{
  struct complex c1 = {1, 2};
  struct complex c2 = {1, 2};
  sum(c1, c2);
  return 0;
}