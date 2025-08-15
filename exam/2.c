// Write a program to calculate the su and average of the weights of the 5 person using array
#include <stdio.h>
int main()
{
  int a[5];
  int sum = 0, avg = 0;
  printf("Enter the weight of 5 persons: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  printf("sum = %d", sum);
  printf("Average = %d", sum / 5);
  return 0;
}