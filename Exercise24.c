//  Write a program in C to find the sum of the left diagonals of a matrix.

#include <stdio.h>

int main() {
    // Declare variables and matrix
    int i, j, arr1[50][50], sum = 0, n, m = 0;

    // Display the purpose of the program
    printf("\n\nFind sum of left diagonals of a matrix :\n");
    printf("---------------------------------------\n");

    // Input the size of the square matrix
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    m = n; // Storing the size of matrix for left diagonal traversal

    // Input elements into the matrix
    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the matrix
    printf("The matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of left diagonals
    for (i = 0; i < n; i++) {
        m = m - 1; // Decrementing to access elements on the left diagonal
        for (j = 0; j < n; j++) {
            if (j == m) {
                sum = sum + arr1[i][j]; // Adding elements on the left diagonal
            }
        }
    }

    // Display the sum of left diagonal elements
    printf("Addition of the left Diagonal elements is : %d\n", sum);

    return 0;
}
