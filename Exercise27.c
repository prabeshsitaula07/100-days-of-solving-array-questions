// Write a program in C to print or display an upper triangular matrix.

#include <stdio.h>

int main() {
    int arr1[10][10], i, j, n;
    float determinant = 0;

    // Display the purpose of the program
    printf("\n\nDisplay the upper triangular of a given matrix :\n");
    printf("----------------------------------------------\n");

    // Input the size of the square matrix
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    // Input elements into the matrix
    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the original matrix
    printf("The matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Display upper triangular matrix by setting lower triangular elements to zero
    printf("\nSetting zero in upper triangular matrix\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            if (i >= j) {
                printf("% 4d", arr1[i][j]); // Print the original elements if i >= j (upper triangular)
            } else {
                printf("% 4d", 0); // Print zero if i < j (lower triangular)
            }
        }
    }
    printf("\n\n");

    return 0;
}
