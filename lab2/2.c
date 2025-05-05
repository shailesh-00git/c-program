// positive or nrgative

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a>=0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    return 0;
}