// Write a program in C to calculate the determinant of a 3 x 3 matrix.

#include <stdio.h>

int main() {
    int arr1[10][10], i, j, n;
    int det = 0;

    // Display the purpose of the program
    printf("\n\nCalculate the determinant of a 3 x 3 matrix :\n");
    printf("-------------------------------------------------\n");

    // Input elements into the matrix
    printf("Input elements in the matrix :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the matrix
    printf("The matrix is :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Calculate the determinant of the 3x3 matrix
    for (i = 0; i < 3; i++) {
        det = det + (arr1[0][i] * (arr1[1][(i + 1) % 3] * arr1[2][(i + 2) % 3] - arr1[1][(i + 2) % 3] * arr1[2][(i + 1) % 3]));
    }

    // Display the determinant of the matrix
    printf("\nThe Determinant of the matrix is: %d\n\n", det);

    return 0;
}
