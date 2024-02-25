// Write a program in C to find the maximum repeating number in a given array. The array range is [0..n-1] and the elements are in the range [0..k-1] and k<=n.

#include <stdio.h>

// Function to find the number with maximum repetition
int numToRepeatMax(int* arr1 , int n, int k) {
    int mx = arr1[0], result = 0;

    // Adjusting the elements in the array to identify the maximum repeating element
    for (int i = 0; i < n; i++)
        arr1[arr1[i] % k] += k;

    // Finding the number with the maximum repetition
    for (int i = 1; i < n; i++) {
        if (arr1[i] > mx) {
            mx = arr1[i];
            result = i;
        }
    }

    return result;
}

int main() {
    int arr1[] = {2, 3, 3, 5, 3, 4, 1, 7, 7, 7, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Printing the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    int k = 8; // Given value 'k'
    printf("The maximum repeating number is: %d", numToRepeatMax(arr1, n, k)); // Finding and printing the number with maximum repetition
    return 0;
}
