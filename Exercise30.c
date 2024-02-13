// Write a program in C to accept two matrices and check whether they are equal.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[50][50], brr1[50][50];
    int i, j, r1, c1, r2, c2, flag = 1;

    // Display the purpose of the program
    printf("\n\nAccept two matrices and check whether they are equal :\n");
    printf("-----------------------------------------------------------\n");

    // Input Rows and Columns of the 1st matrix
    printf("Input Rows and Columns of the 1st matrix :");
    scanf("%d %d", &r1, &c1);

    // Input Rows and Columns of the 2nd matrix
    printf("Input Rows and Columns of the 2nd matrix :");
    scanf("%d %d", &r2, &c2);

    // Input elements into the first matrix
    printf("Input elements in the first matrix :\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    } 

    // Input elements into the second matrix
    printf("Input elements in the second matrix :\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }   

    // Display the first matrix
    printf("The first matrix is :\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("The second matrix is :\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("% 4d", brr1[i][j]);
        }
        printf("\n");
    }

    // Comparing two matrices for equality
    if(r1 == r2 && c1 == c2) {
        printf("The Matrices can be compared : \n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                if(arr1[i][j] != brr1[i][j]) {
                    flag = 0;
                    break;
                }
            }
        }
    } else {
        printf("The Matrices Cannot be compared :\n");
        exit(1);
    }

    // Display whether matrices are equal or not
    if(flag == 1)
        printf("Two matrices are equal.\n\n");
    else
        printf("But, two matrices are not equal.\n\n");

    return 0;
}
