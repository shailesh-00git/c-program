// to chexk either the entered number us armstrong or not
#include<stdio.h>
int main(){
    int temp , n,d,sum =0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    do{
        d= n%10;
        sum = sum + (d*d*d);
        n = n/10;
    }while(n>0);
    if(sum == temp){
        printf("It is armstrong number");

    }
    else{
        printf("Is is not a armstrong number");
    }
    return 0;
}