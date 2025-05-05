//swap the value of two intrgers
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping a= %d \t b=%d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nafter swapping a=%d \t b=%d",a,b);
    return 0;
}