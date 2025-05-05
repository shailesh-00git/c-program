// to check odd or even
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd numnber");
    }
    return 0;
}