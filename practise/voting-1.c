// age is given and to check you are eligible for voting or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    return 0;
}