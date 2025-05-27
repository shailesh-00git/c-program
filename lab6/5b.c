//To generate : 
// a
// ab
// abc
// abcd
#include<stdio.h>
int main(){
    int i,j;
    char ch;
    for(i=1;i<=4;i++){
        ch = 'a';
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch ++;
        }
        
        printf("\n");
    }
    return 0;
}