// to find the greatest among the 5 entered by the users
#include <stdio.h>
int main()
{
    int a[6], i;
    printf("Enter f numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = a[0];
    for (i = 0; i < 5; i++)
    {
        if(a[i]>a[0])
        largest = a[i];
    }

    printf("%d is largest",largest);
    return 0;
}