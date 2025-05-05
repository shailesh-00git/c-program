#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("The Numbers are same");
    }
    else
    {
        printf("The numbers are not same");
    }
    return 0;
}