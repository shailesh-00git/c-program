// Lab X
// Objective: To understand and implement the concept of pointers in C
// I.WAP to find the sum of 2 numbers using pointers.

#include <stdio.h>
int main()
{
  int a = 10, b = 5;
  int *p, *q;
  p = &a;
  q = &b;
  int sum = *p + *q;
  printf("sum = %d", sum);
  return 0;
}