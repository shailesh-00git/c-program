#include <stdio.h>

int main()
{
    char op;
    int a, b, result;

    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter an op (+, -, *, /): ");
    scanf(" %c", &op); 

    switch (op)
    {
    case '+':
        result = a + b;
        printf("Result: %d", result);
        break;

    case '-':
        result = a - b;
        printf("Result: %d", result);
        break;

    case '*':
        result = a * b;
        printf("Result: %d", result);
        break;

    case '/':
        if (b != 0)
        {
            result = a / b;
            printf("Result: %d", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
        break;

    default:
        printf("Invalid op! ");
    }

    return 0;
}