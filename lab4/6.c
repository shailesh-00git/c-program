// to enter the numbers until the user enter the 5 positive number and find the average of these numbers
#include <stdio.h>
int main()
{

    int n, count = 0, sum = 0;
    while (count != 5)  //count = 5 flase
    {
        printf("Enter a number:    "); //n = 1 2 3 4 5
        scanf("%d", &n);
        if (n > 0)
        {
            sum = sum + n;  //sum = 10 + 5  sum = 15
            count++;  //count = 5
        }
    }
    printf("agv = %f", (float)sum / 5);  //15/5 = 3
    return 0;
}