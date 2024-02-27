// Write a program in C to find the maximum n – m such that array[n] > array[m] from a given array[]. Given an array arr[], find the maximum j – i such that arr[j] > arr[i].

#include <stdio.h>

// Function to find the maximum difference between indices
int findMaxDifference(int arr1[], int ar_size) 
{ 
    int max_diff = -1; // Initialize the maximum difference

    // Loop through the array to find the maximum difference between two indices
    for (int m = 0; m < ar_size; ++m) 
    { 
        for (int n = ar_size - 1; n > m; --n) 
        { 
            // Check if the element at index n is greater than element at index m
            // If so, update the max_diff if the current difference (n - m) is greater
            if(arr1[n] > arr1[m] && max_diff < (n - m))
            {
                // Print the indices, values, and the difference between them
                printf("m = %d,    n = %d,   arr1[m] =  %d   arr1[n] = %d    difference = %d\n",
                       m, n, arr1[m], arr1[n], n - m);
                max_diff = n - m; // Update the maximum difference
            }
        } 
    } 

    return max_diff; // Return the maximum difference between indices
} 

int main() 
{ 
    int arr1[] = {7, 5, 8, 2, 3, 2, 4, 2, 1, 0};	
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate the size of the array
    int i;

    // Print the original array
    printf("The given array is:  \n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find the maximum difference between indices and print it
    int max_diff = findMaxDifference(arr1, n); 
    printf("\nThe maximum difference between two positions of array indices is: %d", max_diff); 

    getchar(); 
    return 0; 
} 
