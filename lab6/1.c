//To print the total marks of 5 students having 3 subject
#include<stdio.h>
int main(){
    int i,j,total,n;
    for(i=0;i<5;i++){
        total = 0;
        for(j=0;j<3;j++){
            printf("Enter the number: ");
            scanf("%d",&n);
            total = total + n;
        }
        printf("Total marks of three subject is %d\n",total);
    }
    return 0;
}