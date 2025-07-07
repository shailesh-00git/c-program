//pointer
#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("Value of a: %d\n", a);
    printf("Value at pointer p: %d\n", *p);
    printf("address of a: %p\n", &a);
    printf("address of a: %p\n", p);

    return 0;
}