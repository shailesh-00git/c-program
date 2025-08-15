// bool list
#include <stdio.h>
struct book
{
  char name[12];
  int p;
};
int main()
{
  int i, min, max;
  struct book b[10];
  printf("Enter the price of 10 book\n: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%s%d", b[i].name, &b[i].p);
  }
  int imax = 0, imin = 0;
  max = b[0].p;
  min = b[0].p;
  for (i = 1; i < 5; i++) // 1
  {

    if (b[i].p > max) // max= 1
    {
      imax = i;
      max = b[i].p;
    }
    if (b[i].p < min)
    {
      imin = i;
      min = b[i].p;
        }
  }
  printf("Max price:\nName = %s.\tprice =  %d\n\n", b[imax].name, b[imax].p);
  printf("Min price:\nName = %s.\tprice =  %d", b[imin].name, b[imin].p);
}