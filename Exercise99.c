// Write a program in C to return true if an array can be split in such a way that the left side of the splitting is equal to the sum of the right side.

#include<stdio.h>
#include <stdbool.h>

// Function to check if the array can be split at a position where the sum of both sides are equal
bool canBalance(int arr1[], int n) 
{
    int l = n;
    // Iterate through each element of the array
    for (int i = 0; i < l; i++) 
    {
        int rhs = 0, lhs = 0;

        // Nested loop to calculate the sums of left-hand side (lhs) and right-hand side (rhs)
        for (int k = 0; k < l; k++) 
        {
            if (k > i) 
            {
                lhs += arr1[k]; // Add elements to lhs if the index is greater than the current position (i)
            } 
            else 
            {
                rhs += arr1[k]; // Add elements to rhs if the index is less than or equal to the current position (i)
            }
        }

        // Check if the sum of both sides (rhs and lhs) is equal
        if (rhs == lhs) 
        {
            return true; // If found, return true
        }
    }
    return false; // Return false if no such position is found
}

int main()
{
    int arr1[] = {1, 3, 3, 8, 4, 3, 2, 3, 3};
    int arr_size = sizeof(arr1) / sizeof(arr1[0]);
    int i;
    bool bl;

    // Print the original array
    printf("The given array is:  ");
    for (i = 0; i < arr_size; i++) 
    {
        printf("%d  ", arr1[i]);
    } 
    printf("\n");

    // Check if the array can be split into two parts with equal sum and print the result
    bl = canBalance(arr1, arr_size);
    if (bl == true)
    {
        printf("The array can be split at a position where the sum of both sides are equal. ");
    }
    else
    {
        printf("The array cannot be split at any position where the sum of both sides are equal. ");
    }

    return 0;
}
