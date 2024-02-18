// Write a program in C to print a matrix in spiral form.

#include <stdio.h>

#define R 4 // Number of rows in the matrix
#define C 5 // Number of columns in the matrix

// Function to print the elements of the matrix in a spiral order
void spiralOfMatrix(int enrow, int encol, int arr1[R][C])
{
    int i, rowind = 0, colind = 0;

    // Loop through the matrix elements in a spiral pattern
    while (rowind < enrow && colind < encol)
    {
        // Print elements of the first row
        for (i = colind; i < encol; ++i)
        {
            printf("%d ", arr1[rowind][i]);
        }
        rowind++;

        // Print elements of the last column
        for (i = rowind; i < enrow; ++i)
        {
            printf("%d ", arr1[i][encol - 1]);
        }
        encol--;

        // Print elements of the last row if it is within matrix boundaries
        if (rowind < enrow)
        {
            for (i = encol - 1; i >= colind; --i)
            {
                printf("%d ", arr1[enrow - 1][i]);
            }
            enrow--;
        }

        // Print elements of the first column if it is within matrix boundaries
        if (colind < encol)
        {
            for (i = enrow - 1; i >= rowind; --i)
            {
                printf("%d ", arr1[i][colind]);
            }
            colind++;
        }
    }
}

int main()
{
    int i, j;
    int arr1[R][C] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    // Print the original matrix
    printf("The given array in matrix form is:\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Print the matrix in spiral order
    printf("The spiral form of the above matrix is:\n");
    spiralOfMatrix(R, C, arr1);
    return 0;
}
