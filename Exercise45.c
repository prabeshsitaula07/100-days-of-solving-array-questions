// Write a program in C to find two elements whose sum is closest to zero.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to find and display the pair of elements whose sum is minimum
void findMinSumPair(int *arr1, int arr_size) {
    int i, j, sum, minSum, min1Pair, min2Pair;

    // Check for valid input array
    if (arr1 == NULL || arr_size < 2)
        return;

    // Initialize variables to track minimum sum and respective pair elements
    min1Pair = arr1[0];
    min2Pair = arr1[1];
    minSum = min1Pair + min2Pair;

    // Iterate through the array to find the pair with the minimum sum
    for (i = 0; i < arr_size - 1; i++) {
        for (j = i + 1; j < arr_size; j++) {
            sum = arr1[i] + arr1[j];
            // Update minimum sum and pair elements if the current sum is smaller
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                min1Pair = arr1[i];
                min2Pair = arr1[j];
            }
        }
    }
    // Print the pair of elements whose sum is minimum
    printf("[%d, %d]\n", min1Pair, min2Pair);
}

int main() {
    int arr1[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46}; 
    int ctr = sizeof(arr1) / sizeof(arr1[0]);
    int i;  

    // Print the original array
    printf("The given array is :  ");
    for (i = 0; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    } 
    printf("\n");

    // Find and display the pair of elements whose sum is minimum
    printf("The Pair of elements whose sum is minimum are: \n");
    findMinSumPair(arr1, ctr);
    return 0;
}
