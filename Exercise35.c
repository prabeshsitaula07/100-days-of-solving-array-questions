// Write a program in C to find the largest sum of contiguous subarrays in an array.

#include <stdio.h>

// Function to find the maximum sum of a contiguous subarray
int maxSum(int a[], int n) {
    int i, j, k;
    int sum, maxSum = 0;

    // Nested loops to explore all possible subarrays
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            sum = 0;

            // Calculating sum of the subarray [i, j]
            for (k = i; k <= j; k++) {
                sum = sum + a[k];
            }

            // Updating the maximum sum found so far
            if (sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum; // Returning the maximum sum of a contiguous subarray
}

// Main function
int main() {
    int i;
    int arr1[] = {8, 3, 8, -5, 4, 3, -4, 3, 5};
    int ctr = sizeof(arr1) / sizeof(arr1[0]);

    // Displaying the given array
    printf("The given array is :  ");
    for (i = 0; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Finding and displaying the largest sum of a contiguous subarray
    printf("The largest sum of a contiguous subarray is : %d \n", maxSum(arr1, ctr));

    return 0;
}
