// Write a program in C to search for an element in a row wise and column wise sorted matrix.

#include <stdio.h>

// Function to search for an element in a sorted 2D matrix
int searchElement(int arr2D[4][4], int n, int x) {
    int i = 0, j = n - 1;

    // Loop to traverse the matrix diagonally
    while (i < n && j >= 0) {
        // If the element is found in the matrix
        if (arr2D[i][j] == x) {
            printf("\nThe element found at the position in the matrix is: %d, %d\n", i, j);
            return 1;
        }
        // If the element is smaller, move down in the column
        if (arr2D[i][j] < x)
            i++;
        // If the element is larger, move left in the row
        else
            j--;
    }

    printf("\nThe given element was not found in the 2D array.\n");
    return 0;
}

int main() {
    // Initializing a 4x4 2D array
    int arr2D[4][4] = {
        {15, 23, 31, 39},
        {18, 26, 36, 43},
        {25, 28, 37, 48},
        {30, 34, 39, 50}
    };
    int v = 37;

    // Printing the original 2D array in matrix form
    printf("The given array in matrix form is:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d  ", arr2D[i][j]); // Print each element of the matrix
        }
        printf("\n");
    }

    // Printing the value for searching
    printf("The given value for searching is: %d\n", v);

    // Searching for the element in the 2D matrix
    searchElement(arr2D, 4, v);

    return 0;
}
