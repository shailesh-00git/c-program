// To find the sum of the series: 1 - x/1! + x^2/2! - x^3/3! + ... up to n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, x, fact, sign = 0;
    float sum = 1.0;

    printf("Enter the number of terms and value of x: ");
    scanf("%d%d", &n, &x);

    for (i = 1; i < n-1; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        if (sign == 0)
        {
            sum -= (pow(x, i) / fact);
            sign = 1;
        }
        else{
             sum += (pow(x, i) / fact);
             sign = 0;
        }

        
    }

    printf("The sum of series up to %d terms is : %f\n", n, sum);
    return 0;
}