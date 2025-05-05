// enter the marks of three subjects and  calculate average
#include <stdio.h>
int main()
{
    int comp, eng, nep;
    printf("enter the marks of 3 subjects comp,eng,nep: ");
    scanf("%d%d%d", &comp, &eng, &nep);
    float avg = (comp + nep + eng) / 3;
    printf("The average marks is %f", avg);
    return 0;
}