// To print this pattern:
// 11111
//  111
//   1

#include <stdio.h>
int main()
{
    int i, j, c = 2;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= 3 - c && j <= 3 + c)
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
        c--;
    }
    return 0;
}
