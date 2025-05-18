// WAP a program to find the sum of all numbers in a digit
#include <stdio.h>
int main()
{
    int n, d, sum = 0;
    printf("enter a number of any digit: ");
    scanf("%d", &n);

    // Code using while loop
    // while (n > 0)
    // {
    //     d = n % 10;
    //     sum = sum + d;
    //     n = n / 10;
    // }

    //code using do while loop
    do{
        d = n%10;
        sum +=d;
        n=n/10;
    }
    while(n>0);
    printf("sum of digits = %d", sum);
    return 0;
}