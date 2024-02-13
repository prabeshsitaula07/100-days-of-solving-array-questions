// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>

/* A sparse matrix is a matrix that has more zero elements than nonzero elements */
int main() {
    static int arr1[10][10];
    int i, j, r, c;
    int ctr = 0;

    // Display the purpose of the program
    printf("\n\nDetermine whether a matrix is a sparse matrix :\n");
    printf("----------------------------------------------------\n");

    // Input the number of rows of the matrix
    printf("Input the number of rows of the matrix : ");
    scanf("%d", &r);

    // Input the number of columns of the matrix
    printf("Input the number of columns of the matrix : ");
    scanf("%d", &c);

    // Input elements into the matrix and count zeros
    printf("Input elements in the matrix :\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
            if (arr1[i][j] == 0) {
                ++ctr; // Increment the counter for zero elements
            }
        }
    }

    // Check if zeros are more than half of total elements to determine sparsity
    if (ctr > ((r * c) / 2)) {
        printf("The given matrix is a sparse matrix.\n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }

    printf("There are %d number of zeros in the matrix.\n\n", ctr);

    return 0;
}
