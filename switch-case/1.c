// to print sunday - saturday using switch case
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number between 1 - 7 : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("sunday");
        break;

    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("saturday");
        break;
    default:
        printf("please enter valid number");
    }
    return 0;
}