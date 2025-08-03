#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("Enter the rardius of the crcle: ");
    scanf("%d", &r);
    float a;
    a = pi * r * r;
    printf("The area of the circle =  %f", a);
    return 0;
}
