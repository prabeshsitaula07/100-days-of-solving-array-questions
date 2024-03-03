// Write a program in C to return the number of clumps (a series of 2 or more adjacent elements of the same value) in a given array.

#include<stdio.h>

// Function to count the number of clumps in an array
int countClumps(int arr1[], int m) 
{
    int l = m;
    int current = -1, clump = 0;

    // Iterate through the array to find clumps
    for(int i = 0; i < l - 1; i++) 
    {
        // Check if the current element is equal to the next element and different from the current clump
        if(arr1[i] == arr1[i + 1] && arr1[i] != current) 
        {
            current = arr1[i]; // Set the current clump value
            clump++; // Increment clump count
        } 
        else 
        {
            if(arr1[i] != current) 
            {
                current = -1; // Reset current clump value if the current element is different
            }
        }
    }
    return clump; // Return the count of clumps found
}

int main() 
{ 
    int arr1[] = {17, 42, 42, 7, 24, 24, 17, 54, 17}; 
    int arr_size = sizeof(arr1) / sizeof(arr1[0]); 
    int i = 0; 

    // Print the original array
    printf("The given array is:  \n");
    for(i = 0; i < arr_size; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Count the number of clumps in the array and print the result
    printf("The number of clumps in the array is:  %d", countClumps(arr1, arr_size)); 
    return 0; 
}
