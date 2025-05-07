// to enter a number and find its factors
#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Factors of %d are:", a);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("\t%d", i); 
        }
    }
    return 0;
}