// to find the factorial of a number
#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Enter a positive number");
    }
    else if (n == 0 || n == 1)
    {
        printf("The factorial is 1");
    }

    else
    {
        for (i = n; i >= 1; i--)
        {
            fact *= i;
        }
        printf("Factorial of %d is %d", n, fact);
    }

    return 0;
}