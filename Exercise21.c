// Write a program in C for the multiplication of two square matrices.

#include <stdio.h>

int main() {
    // Declare matrices and variables
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, k, r1, c1, r2, c2, sum = 0;

    // Display multiplication of two matrices
    printf("\n\nMultiplication of two Matrices :\n");
    printf("----------------------------------\n");

    // Input rows and columns of the first matrix
    printf("\nInput the rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input rows and columns of the second matrix
    printf("\nInput the rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Multiplication of matrices is not possible.\n");
        printf("Column of the first matrix and row of the second matrix must be the same.\n");
    } else {
        // Input elements in the first matrix
        printf("Input elements in the first matrix:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }

        // Input elements in the second matrix
        printf("Input elements in the second matrix:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &brr1[i][j]);
            }
        }

        // Display the first matrix
        printf("\nThe First matrix is:\n");
        for (i = 0; i < r1; i++) {
            printf("\n");
            for (j = 0; j < c1; j++)
                printf("%d\t", arr1[i][j]);
        }

        // Display the second matrix
        printf("\nThe Second matrix is:\n");
        for (i = 0; i < r2; i++) {
            printf("\n");
            for (j = 0; j < c2; j++)
                printf("%d\t", brr1[i][j]);
        }

        // Matrix multiplication
        for (i = 0; i < r1; i++) { // Row of first matrix
            for (j = 0; j < c2; j++) { // Column of second matrix
                sum = 0;
                for (k = 0; k < c1; k++)
                    sum = sum + arr1[i][k] * brr1[k][j];
                crr1[i][j] = sum;
            }
        }

        // Display the result of matrix multiplication
        printf("\nThe multiplication of two matrices is:\n");
        for (i = 0; i < r1; i++) {
            printf("\n");
            for (j = 0; j < c2; j++)
                printf("%d\t", crr1[i][j]);
        }
    }
    printf("\n\n");
    return 0;
}
