// Program to calculate the roots of the quadrtaic equation.
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the coefficients a, b, and c: ");
    scanf("%d%d%d", &a, &b, &c);

    float d, r1, r2, rp, ip;
    d = b * b - 4 * a * c;

    if (d > 0)
    {
        // Real and distincr roots r1 and r2
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: r1 = %f and r2 = %f\n", r1, r2);
    }
    else if (d == 0)
    {
        // Real and equal roots( in this case roots are equal)
        r1 = -b / (2 * a);
        printf("Roots are real and equal: r1 = r2 = %f\n", r1);
    }
    else
    {
        // imiginary roots
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Roots are complex: r1 = %f + %fi and r2 = %f - %fi\n", rp, ip, rp, ip);
    }

    return 0;
}