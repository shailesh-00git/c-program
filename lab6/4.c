// To find the sum pf the series: 1 - x/1! + X^2/2!-x^3/3! + ..... to n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, x, op = 0, fact;
    float  sum = 1.0;

    printf("Enter the number of terms and value of x: ");
    scanf("%d%d", &n, &x);
    for (i = 1; i <= n - 1; i++)
    {
        for (i = 1; i < n; i++)
        {
            // Calculate factorial of i
            fact = 1;
            for (int j = 1; j <= i; j++)
            {
                fact *= j;
            }
            if (op == 0)
            {
                sum = sum - (pow(x, i) / fact);
                op = 1;
            }
            else if (op == 1)
            {
                sum = sum + (pow(x, i) / fact);
                op = 0;
            }
        }
    }
    printf("The summ of series up to %d terms is : %f", n, sum);
    return 0;
}