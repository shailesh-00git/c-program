// to find the sum of the series: 1 + x - x^2/2 + x^3/3......to n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, x,sign = 1;
    float sum = 1;
    printf("Enter the value of x & number of terms: ");
    scanf("%d%d", &x, &n);
    for (i = 1; i <= n - 1; i++)
    {
        if (sign == 1)
        {
            sum = sum + (pow(x, i)) / i;
            sign = 0;
        }
        else
        {
            sum = sum - (pow(x, i)) / i;
            sign = 1;
        }
    }
    printf("%f",sum);
    return 0;
}