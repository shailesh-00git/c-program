#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The number  %d is even\n", a);
    }
    else
    {
        printf("The number %d is odd", a);
    }
    return 0;
}