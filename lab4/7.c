// WAP a progrm to print fabinaco series
#include <stdio.h>
int main()
{
    int n, i;
    int prev = 0, curr = 1, nxt;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Enter a positive number");
    }
    if (n == 1)
    {
        printf("%d", prev);
    }

    printf("%d\t%d\t", prev, curr);
    for (i = 0; i < n - 2; i++)
    {
        nxt = prev + curr;
        printf("%d\t", nxt);
        prev = curr;
        curr = nxt;
    }
    return 0;
}