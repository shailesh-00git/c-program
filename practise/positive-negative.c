#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the tempertaure: ");
    scanf("%d", &temp);
    if (temp >= 30)
    {
        printf("The temperature is hot");
    }
    else
    {
        printf("The temperature is cold");
    }
    return 0;
}