#include <stdio.h>
int main()
{
    int b, h; // b = base and h = height
    printf("Enter the value of b and h: ");
    scanf("%d%d", &b, &h);
    float a; // a= area
    a = 0.5 * (b * h);
    printf("The are of the right angle triangle is %f ", a);
    return 0;
}