#include <stdio.h>
int main()
{
    char a, u;
    int r;
    printf("Enter a letter in lower case: ");
    scanf("%c", &a);
    r = (int)a; // r =97
    r -= 32;    // r =65
    u = (char)r;
    printf("%c", u);
    return 0;
}