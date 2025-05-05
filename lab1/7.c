//to ente time into seccond and convert into hr min sec
#include<stdio.h>
int main(){
    int t;
    printf("Enter the time : ");
    scanf("%d",&t);
    int hr = t/3600;
    int temp = t%3600;
    int min = temp/60;
    int sec = temp%60;
    printf("The time is %dhr\t%dmin\t%dsec",hr,min,sec);
    return 0;

}