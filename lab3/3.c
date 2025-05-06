// roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, ch;
    float x1, x2;
    printf("Enter a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - (4 * a * c);
    if (d > 0)
    {
        ch = 1;
    }
    else if (d < 0)
    {
        ch = 2;
    }
    else
    {
        ch = 3;
    }
    switch (ch)
    {
    case 3:
        x1 = (float)-b / (2 * a);
        printf(" x1 = x2 = %f", x1);
        break;

    case 1:
        x1 = (float)(-b / (2 * a) - (sqrt(d)));
        x2 = (float)(-b / (2 * a) + (sqrt(d)));
        printf(" x1 = %f \t x2 = %f", x1, x2);
        break;

    case 2:
        printf("Roots are unequal and imaginary");
    }
    return 0;
}