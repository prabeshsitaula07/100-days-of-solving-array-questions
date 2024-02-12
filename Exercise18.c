// Write a program in C for a 2D array of size 3x3 and print the matrix.

#include <stdio.h>

int main() {
    int arr1[3][3], i, j;

    // Prompt user for input
    printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
    printf("------------------------------------------------------\n");

    // Input values for the matrix
    printf("Input elements in the matrix :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is : \n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", arr1[i][j]);
    }
    printf("\n\n");

    return 0;
}
