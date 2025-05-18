// WAP to print the sum of the series: 1, (1+2), (1+2+3),.....n

#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            sum += j;
            // printf("%d\t",j);
        }
        // printf("\n");
    }
    printf("%d", sum);
    return 0;
}