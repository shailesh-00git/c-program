// to check the entered year is leap year or not
#include <stdio.h>
int main()
{
    int a;
    printf("Enter year:  ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        if (a % 100 == 0)
        {

            if (a % 400 == 0)
            {
                printf("leap year");
            }
            else
            {
                printf("not leap year");
            }
        }
        else
        {
            printf("leap year");
        }
    }
    else
    {
        printf(" not leap year");
    }
    return 0;
}