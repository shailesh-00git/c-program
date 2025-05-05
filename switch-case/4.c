// resturant ment
#include <stdio.h>
int main()
{
    int ch, qty, amt;
    printf("**********Menu**********\n");
    printf("1.Momo        Rs30\n2.Chowmin     Rs25\n3.Tea         Rs10\n4.Coffee      Rs15\nEnter your choice: ");
    scanf("%d", &ch);
    printf("Enter Quqntity:  ");
    scanf("%d", &qty);

    switch (ch)
    {
    case 1:
        amt = qty * 30;

        break;

    case 2:
        amt = qty * 25;

        break;
    case 3:
        amt = qty * 10;

        break;
    case 4:
        amt = qty * 15;
        break;

    default:
        printf("Enter correct choice");
    }
    printf("Total amount = %d", amt);
    return 0;
}