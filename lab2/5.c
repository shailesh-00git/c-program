// to dispaly thr roots of quadratic equation.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c; // a,b,c are constants
    printf("enter the value if a,b & c: ");
    scanf("%d%d%d", &a, &b, &c);
    float d = ((b * b) - 4 * a * c);
    printf("%f\n", d);
    float r1, r2;
    if (d > 0)
    { // two roots are real but different
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1 = %d\n", r1);
        printf("r2 = %d", r2);
    }
    else if (d < 0)
    { // two roots are imageniry
        // for real part
        float real = (float)-b / (2 * a);
        // for imegainary part
        float img = sqrt(-d) / (2 * a);

        printf("r1 = %f + i%f\n", real, img);
        printf("r2 = %f - i%f", real, img);
    }
    else
    {
        r1 = -b / (2 * a);
        printf("r1 = r2 = %d", r1);
    }
    return 0;
}