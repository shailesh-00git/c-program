//To dispaly the total  prime numbers between 10 to 20
#include<stdio.h>
int main(){
    int i,j,count,pn=0;
    for(i=10;i<=20;i++){
        count = 0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count ++;
            }
        }
        if(count==2){
            pn ++;
        }
    }
    printf("Total prime number between 10 to 20 is %d",pn);
    return 0;
}