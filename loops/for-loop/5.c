// Wap to enter 8 numbers and display its sum
#include <stdio.h>
int main()
{
    int i, n,sum =0;
    for (i = 0; i < 8; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&n);
        sum += n;
    }
    printf("sum  = %d",sum);
    return 0;
}