//to find the simple interest for 3 sets of input
#include<stdio.h>
int main(){
    int p,t,i;
    float r,si;
    for(i=0;i<3;i++){
        printf("\nEnter the principle, time, rate: ");
        scanf("%d%d%f",&p,&t,&r);
        printf("Simple interest: %f",(p*t*r)/100);
    }
    return 0;
}