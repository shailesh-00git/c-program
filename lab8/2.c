// to find the value of y by taking the input of x and n as y = x^n
#include<stdio.h>
void value(int x, int n){
  int y = 1;
  for(int i=0;i<n;i++){
    y *= x;
  }
  printf("%d",y);
}
int main(){
  int x,n;
  printf("Enter the value of x and y: ");
  scanf("%d%d",&x,&n);
  value(x,n);
  return 0;
}