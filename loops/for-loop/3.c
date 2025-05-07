//to enter a number and display its square for 5 numbers
#include<stdio.h>
int main(){
    int a,i;
    for(i=0;i<5;i++){
        printf("Enter the number: ");
        scanf("%d",&a);
        printf("The square of the number is : %d\n",a*a);
    }
    return 0;
}