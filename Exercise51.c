// Write a program in C to find the maximum circular subarray sum of a given array.

#include <stdio.h>

// Function to find the maximum sum using Kadane's algorithm
int kadane(int arr1[], int n);

// Function to find the maximum circular sum of a subarray
int SumOfMxCircur(int arr1[], int n)
{
    // Find maximum sum using Kadane's algorithm
    int maxKadaneSum = kadane(arr1, n);

    int maxWrap = 0, i;
    // Calculate the sum of the whole array and invert its elements
    for (i = 0; i < n; i++)
    {
        maxWrap += arr1[i];
        arr1[i] = -arr1[i];
    }

    // Find maximum circular sum by adding the total sum and Kadane's algorithm for inverted array
    maxWrap = maxWrap + kadane(arr1, n);

    // Return the maximum of maxWrap and maxKadaneSum
    return (maxWrap > maxKadaneSum) ? maxWrap : maxKadaneSum;
}

// Function to find the maximum sum of subarray using Kadane's algorithm
int kadane(int arr1[], int n)
{
    int maxUpto = 0, maxAtPos = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        maxAtPos = maxAtPos + arr1[i];
        if (maxAtPos < 0)
            maxAtPos = 0;
        if (maxUpto < maxAtPos)
            maxUpto = maxAtPos;
    }
    return maxUpto;
}

// Main function
int main()
{
    int arr1[] = {10, 8, -20, 5, -3, -5, 10, -13, 11};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is:  ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find and print the maximum circular sum in the array
    printf("The maximum circular sum in the above array is:  %d\n", SumOfMxCircur(arr1, n));

    return 0;
}
