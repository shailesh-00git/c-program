// to print sagarmatha engineering college 10 times
#include<stdio.h>
int print(int n){
  if(n>0){
    print(n-1);
    printf("Sagarmatha Engineering College\n");
  }
}
int main(){
  int n = 10;
  print(n);
  return 0;
}