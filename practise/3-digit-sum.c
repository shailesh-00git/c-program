#include <stdio.h>
#include <conio.h>
int main()
{
    int a, sum;
    printf("Enter a 3 digit number: ");
    scanf("%d", &a);
    sum = 0;
    sum = (a / 100);
    sum += (a % 100) % 10;
    sum += (a % 100) / 10;
    printf("the sum of its digit is %d", sum);
    return 0;
}