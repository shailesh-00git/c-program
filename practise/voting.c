// to checking the voting eligibility.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter thr age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible for voting");
    }
    return 0;
}