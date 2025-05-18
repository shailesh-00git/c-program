//write a program to find the x to the power n . but using for loop not using power function
#include<stdio.h>
int main(){
    int i,x,n,y=1;
    printf("Enter the x and n: ");
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++){
        y = y * x;
    
    }
    printf(" %d to the power %d = %d",x,n,y);
    return 0;
}