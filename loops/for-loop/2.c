// to enter a number for three times and diaplay it
#include<stdio.h>
int main(){
    int a,i;
    for(i=0;i<3;i++){
        printf("Enter the number: ");
        scanf("%d",&a);
        printf("Number is %d\n",a);
    }
    return 0;
}