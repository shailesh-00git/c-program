// Calculator using switch case
#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter a and b:\n ");
    scanf("%d%d", &a,&b);
    printf("Enter Operator:\n ");
    scanf(" %c",&op);

    switch (op)
    {
    case '+': 
        printf("a + b = %d",a+b);
        break;

        case '-': 
        printf("a - b = %d",a-b);
        break;
        case '*': 
        printf("a * b = %d",a*b);
        break;
        case '/': 
        printf("a / b = %f",(float)a/b);
        break;

    default:
        printf("Enter correct choice");
    }
    return 0;
}