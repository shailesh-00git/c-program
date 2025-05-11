//writa a program to find the sum of 5 natural numbers
#include<stdio.h>
int main(){
    int i,sum =0;
    for(i=1;i<6;i++){
        sum += i;
    }
    printf("sum = %d",sum);
    return 0;
}