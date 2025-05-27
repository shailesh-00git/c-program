// to find the armstrongiumbers between 100 to 200
#include <stdio.h>
int main()
{
    int i, d, sum, temp, count = 0;
    for (i = 100; i <= 500; i++)
    {
        sum = 0;
        temp = i;

        while (i > 0)
        {
            d = i % 10;
            sum = sum + (d * d * d);
            i = i / 10;
        }
        if (sum == temp)
        {
            printf("%d is arnstrong\n", temp);
            count++;
        }
    }
    printf("Total Armstrongiumbers between 100 to 200: %d\n", count);

    return 0;
}