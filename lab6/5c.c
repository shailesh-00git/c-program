// To print this pattern:

// ******
// *    *
// ******
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= 6; j++)
        {

            if (i == 1 && j > 0 && j < 6)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
