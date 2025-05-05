// time is givve into seccontd and we hane to convert it into hr min sec format.
#include <stdio.h>
int main()
{
    int t, temp;
    printf("Enter th etime into second: ");
    scanf("%d", &t);
    int hr;
    hr = t / 3600;
    temp = t % 3600;
    int sec;
    sec = temp % 60;
    int min;
    min = temp / 60;
    printf("Time is %dhr %dmin %dsec", hr, min, sec);
    return 0;
}