//to check eithrer the entered 2x2 matrix is identity or not
#include <stdio.h>      
int main(){
    int a[2][2], i, j, result = 1;

    // Input the 2x2 matrix
    printf("Enter the elements of the 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the entered matrix
    printf("The entered matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is an identity matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
                result = 0;
                break;
            }
        }
        if (result == 0) break;
    }

    // Output the result
    if (result == 1) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}