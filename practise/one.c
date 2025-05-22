#include <stdio.h>
int main()
{
    int i, j, e;
    int total;
    char* sub;
    for (i = 1; i <= 2; i++)
    {
        printf("Student no %d \n", i);
        total = 0;
        for (j = 1; j <= 5; j++)
        {
            if(j==1){
                sub = "English";
            }
            else if(j==2){
                sub = "Maths";
            }
            else if(j==3){
                sub = "Microprocessor";
            }
            else if(j==4){
                sub = "C program";
            }
            else if(j==5){
                sub = "Account";
            }

            printf("Enter the marks of %s:",sub);
            scanf("%d", &e);
            total += e;
        }
        printf("Total marks is %d\n", total);
        printf("Percentage = %f\n", (total / 500.00) * 100);
    }
}