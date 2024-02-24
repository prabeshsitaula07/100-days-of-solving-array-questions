// Write a program in C to find the sum of the upper triangular elements of a matrix.

#include <stdio.h>

int main() {
    int R, C, n, r, c, sum = 0;
    int arr1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    R = C = n = 3;
    int i, j;

    // Print original array
    printf("The given array is :  \n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("The elements being summed of the upper triangular matrix are: ");
    for (r = 0; r < R; r++) {
        for (c = 0; c < C; c++) {
            if (r < c) {
                printf("%d  ", arr1[r][c]);
                sum += arr1[r][c]; // Add the elements of the upper triangular matrix
            }
        }
    }
    printf("\nThe Sum of the upper triangular Matrix Elements are: %d", sum);
    return 0;
}
