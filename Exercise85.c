// Write a program in C to count all possible paths from top left to bottom right of a m X n matrix.

#include <stdio.h>

// Function to count all possible paths from top-left to bottom-right in a matrix of size m x n
int PathCounting(int m, int n)
{
    int ctr[m][n]; // Define a matrix to store path counts

    // Initialize the leftmost column elements to 1 (only one way to reach each cell in the leftmost column)
    for (int i = 0; i < m; i++)
    {
        ctr[i][0] = 1;
    }

    // Initialize the top row elements to 1 (only one way to reach each cell in the top row)
    for (int j = 0; j < n; j++)
    {
        ctr[0][j] = 1;
    }

    // Calculate the number of paths for each cell in the matrix
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            ctr[i][j] = ctr[i - 1][j] + ctr[i][j - 1]; // Number of paths to reach current cell = paths from left + paths from top
        }
    }

    return ctr[m - 1][n - 1]; // Return the number of paths to reach the bottom-right cell
}

int main()
{
    int p, q;
    p = 4; // Number of rows in the matrix
    q = 4; // Number of columns in the matrix

    printf("The size of matrix is: %d, %d\n", p, q);
    printf("The all possible paths from top left to bottom right is: %d\n", PathCounting(p, q));

    return 0;
}
