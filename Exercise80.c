// Write a program in C to count all distinct pairs for a specific difference.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 1000000

// Comparison function for qsort
int cmpfunc(const void * arr1, const void * b) {
    return (*(int*)arr1 - *(int*)b);
}

int main() {
    int n, k; // Variables to hold array size and difference value
    int ctr = 0; // Counter for distinct pairs
    int i;
    int arr1[] = {5, 2, 3, 7, 6, 4, 9, 8}; // Given array
    n = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
    k = 5; // Given difference value

    // Print original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Sort the array using qsort function
    qsort(arr1, n, sizeof(int), cmpfunc);

    int l = 0; // Left pointer for the pair
    int r = 0; // Right pointer for the pair

    // Find distinct pairs with difference equal to 'k'
    printf("The distinct pairs for difference %d are: ", k);
    while (r < n) {
        if (arr1[r] - arr1[l] == k) {
            printf("[%d, %d] ", arr1[r], arr1[l]); // Print the pair
            ctr++; // Increment counter for distinct pairs
            l++;
            r++;
        } else if (arr1[r] - arr1[l] > k) {
            l++; // Increment left pointer
        } else {
            r++; // Increment right pointer
        }
    }
    printf("\nNumber of distinct pairs for difference %d are: %d", k, ctr); // Print total distinct pairs
    return 0;
}
