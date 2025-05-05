#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    int s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",area);
    return 0;

}
