// To find the largest number among 3 numbers using function
#include <stdio.h>
void large(int x,int y,int z)
{
  if(x>y&&x>z)
  printf("%d is largest",x);
  else if(y>z&&y>x)
  printf("%d is largest",y);
  else
  printf("%d is largest",z);

}
int main()
{
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d%d%d", &a, &b, &c);
  large(a, b, c);
  return 0;
}