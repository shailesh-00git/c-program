//to enter the lower case letter and display onto upper case
#include<stdio.h>
#include<ctype.h>
int main(){
    char lower;
    printf("enter a charactre into lower case: ");
    scanf("%c",&lower);
    int a = (int)(lower);
    // you can try this method also
    // char up = (char)(a-32);
    // printf("%d%c",a,up);
    char upper = toupper(lower);
    printf("%c",upper);
    return 0;
}