// Write a program in C to find a subarray with a given sum from the given array.

#include <stdio.h>

// Function to print subarrays
void print(int arr1[], int i, int j)
{
    // Print subarray elements within range [i..j]
    printf("[%d..%d] -- { ", i, j);
    for (int k = i; k <= j; k++)
    {
        printf("%d ", arr1[k]);
    }
    printf("}\n");
}

// Function to find subarrays with a given sum
void PickSubarrayFromArray(int arr1[], int n, int sum)
{
    // Loop through each element in the array
    for (int i = 0; i < n; i++)
    {
        int sum_upto = 0;
        // Find subarrays starting from index i
        for (int j = i; j < n; j++)
        {
            sum_upto += arr1[j]; // Increment sum with the element at index j
            if (sum_upto == sum)
            {
                // If the sum matches the target sum, print the subarray
                print(arr1, i, j);
            }
        }
    }
}

int main()
{
    int arr1[] = { 3, 4, -7, 1, 3, 3, 1, -4 };
    int sum = 7;
    int ctr = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is :  ");
    for (i = 0; i < ctr; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find subarrays with the given sum and print them
    PickSubarrayFromArray(arr1, ctr, sum);
    return 0;
}
