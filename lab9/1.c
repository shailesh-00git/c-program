// Using recursive function
// Write a program to print "Sagarmatha Engineering College "10 times.

#include <stdio.h>
void print(int n)
{
  if (n > 0)
  {
    printf("Sagarmatha\n");
    print(n - 1);
  }
}
int main()
{
  int n = 10;
  print(n);
  return 0;
}