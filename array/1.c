
#include <stdio.h>
int main()
{
    int a[2][2], i, j, res;
    printf("Enter the elements of the 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // logic
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                res = 0;
                break;
            }
            else
            {
                res = 1;
            }
        }
    }
    if (res == 1)
    {
        printf("\nIdentity");
    }
    else
    {
        printf("Not identity");
    }
    return 0;
}