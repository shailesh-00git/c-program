// to the enter the data of type int, char, float and diaplay them
#include<stdio.h>
int main(){
    int a;
    float b;
    char c;

    printf("Enter an integer type data: ");
    scanf("%d", &a);

    printf("Enter a float type data: ");
    scanf("%f", &b);

    // Clear the input buffer before reading a character
    getchar(); // Consumes the leftover newline character

    printf("Enter a character type data: ");
    scanf("%c", &c);

    printf("a = %d\nb = %f\nc = %c\n", a, b, c);
    return 0;
}