// enter  5 positive number and calculate the sum of even numbers only
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &n);
        if (n > 0)
        {
            if (n%2==0)
            {
                sum += n;
            }
        }
        else
        {
            printf("Enter a positive number\n");
        }
    }
    printf("Sum = %d",sum);
    return 0;
}