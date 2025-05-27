// to find the prime number using the break statement
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("not Prime number");
            break;
        }
    }
    if (i==n)
    {
        printf("Primr number"); 
    }
    return 0;
}