// To count number until 10 positive numbers
#include<stdio.h>
int main(){
    int i,n,count = 0;
    for(i=0;i<10;i++){
        printf("enter a number : ");
        scanf("%d",&n);
        if(n>0){
            count ++;
        }

    }
    printf("possitive number = %d",count);
    return 0;
}