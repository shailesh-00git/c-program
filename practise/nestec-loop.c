#include <stdio.h>
int main()
{
    int a;
    printf("Enter a nimber  : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The square of %d is %d", a, a * a);
    }
    else
    {
        printf("The cube of %d is %d", a, a * a * a);
    }
    return 0;
}