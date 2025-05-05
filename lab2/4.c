// to check either the number is pallindrom or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int org = n;
    int sum = 0;
    int r;
    while(n>0){
        r = n%10;
        sum = r + (sum*10);
        n=n/10;
    }
    if(org == sum){
        printf("Pallindrome");

    }
    else{
        printf("Not pallindrome");
    }
    return  0;
}