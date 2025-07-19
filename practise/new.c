// pro
#include <stdio.h>
int swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a = 2, b = 3;
    int *p = &a;
    int *q = &b;
    printf("After swapping a = %d, b = %d", a, b);
    swap(&a, &b);
    printf("After swapping a = %d, b = %d", a, b);
}