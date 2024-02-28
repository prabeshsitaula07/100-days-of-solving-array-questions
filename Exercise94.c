// Write a program in C to find the largest element of each and every contiguous subarray of size k from a given array.

#include<stdio.h>

// Function to print the subarray from index x to x+(k-1)
void contSubArr(int arr1[], int x, int k) 
{ 
    for (int i = x; i <= x + (k - 1); i++) 
    { 
        printf("%d ", arr1[i]); // Print the elements of the subarray
    } 
}

// Function to find the maximum in each subarray of length k
void findMaxFrom(int arr1[], int n, int k) 
{ 
    int j, maxofn, m = 0; 
    for (int i = 0; i <= n - k; i++) // Loop through the array from start to n-k
    { 
        maxofn = arr1[i]; // Set the first element of subarray as the initial maximum

        for (j = 1; j < k; j++) // Loop within the subarray
        { 
            if (arr1[i + j] > maxofn) // Update maximum if a larger element is found
               maxofn = arr1[i + j]; 
        } 
        contSubArr(arr1, m, k); // Print the subarray
        printf("----> %d \n", maxofn); // Print the maximum value of the subarray
        m++; // Move to the next subarray
    } 
}  

int main() 
{ 
    int arr1[] = {1, 3, 6, 21, 4, 9, 12, 3, 16, 10}; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    int i, k = 4; 

    //------------- print original array ------------------	
    printf("The given array is:  \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]); // Print the original array
    }
    printf("\n");
    //-----------------------------------------------------------

    printf("The length of each subarray is: %d\n", k);
    printf("The contiguous subarrays of length %d and their maximum value are: \n", k);
    findMaxFrom(arr1, n, k); // Find and print max in subarrays of length k

    return 0; 
}
