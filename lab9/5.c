//To find the HCF using recursive function
#include<stdio.h>
int hcf(int a, int b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}
int main() {
    int a = 12, b = 6;
    printf("HCF of %d and %d is %d\n", a, b, hcf(a, b));
    return 0;
}