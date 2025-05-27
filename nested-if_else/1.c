// to find the prime number between 5 to 10
#include<stdio.h>
int main(){
    int i,j,count,sp =0 ;
    for(i=5;i<=10;i++){
        count = 0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count ++;
            }
        }
        if(count==2){
            printf("%d is prime\n",i);
            sp ++;
        }
    }
    printf("There are %d prime numbers",sp);
    return 0;
}