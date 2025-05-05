// enter choice ( 1 or 2) if choice is 1 convert rs into paisa and if choice is 2 convert paisa into Rs
#include <stdio.h>
int main()
{
    int choice, rs, p;
    printf("1. RS to Paisa\n2. Paisa to Rs\nEnter your choice:\n ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: // convert Rs into paisa
        printf("Enter Rs: ");
        scanf("%d", &rs);
        printf("Rs %d is equal to %d paisa", rs, rs * 100);
        break;

    case 2: // convert Rs into paisa
        printf("Enter paisa: ");
        scanf("%d", &p);
        printf(" %d paisa is equal to Rs %f", p, (float)p/100);
        break;

    default:
        printf("Enter correct choice");
    }
    return 0;
}