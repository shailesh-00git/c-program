//To find the factorial of a number using recursion
#include<stdio.h>
int fact(int x){
  if(x==0||x==1)
  return 1;
  else
  return x*fact(x-1);
}
int main(){
  int n=5;
  printf("%d",fact(n));
  return 0;

}