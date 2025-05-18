// to find the sum of the series: 1 + x - x^2/2 + x^3/3......to n terms
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i=1, x,sign = 1;
    float sum = 1;
    printf("Enter the value of x & number of terms: ");
    scanf("%d%d", &x, &n);
   do
    {
        if (sign == 1)
        {
            sum = sum + (pow(x, i)) / i;
            sign = 0;
            i++;
        }
        else
        {
            sum = sum - (pow(x, i)) / i;
            sign = 1;
            i++;
        }
    }
    while(i<n);
    printf("%f",sum);
    return 0;
}