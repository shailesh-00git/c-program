//to find the sum of elements of an array using function
#include<stdio.h>
void disp(int [],int);
int main(){
  int a[]={1,2,3,4,5};
  disp(a,5);
return 0;
}
void disp(int x[],int n){
  int s=0;
  for(int i=0;i<n;i++){
    s+=*(x+i);
  }
  printf("%d is the sum",s);

}