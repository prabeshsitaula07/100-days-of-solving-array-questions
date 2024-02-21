// Write a program in C to return the maximum sum such that no two elements are adjacent.

#include <stdio.h>

// Function to find the maximum sum of elements in an array such that no two elements are adjacent
int maxSumSubseq(int arr1[], int n) {
int incl = arr1[0];  // Initialize incl as the first element of the array
int excl = 0;         // Initialize excl as 0, representing no elements chosen initially
int excl_new;         // Temporary variable to store the updated value of excl
int i;

for (i = 1; i < n; i++) {
        // Store the larger of incl and excl in excl_new
        excl_new = (incl > excl) ?incl : excl;

        // Update incl to the sum of the current element and excl
incl = excl + arr1[i];

        // Update excl to the larger of previous excl and excl_new (which was either incl or excl)
excl = excl_new;
    }

    // Return the maximum of incl and excl as the final result
return ((incl > excl) ? incl : excl);
}

int main() {
int arr1[] = {1, 3, 5, 9, 7, 10, 1, 10, 100};
int n = sizeof(arr1) / sizeof(arr1[0]);
int i;

    // Printing the original array
printf("The given array is :  ");
for (i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    } 
printf("\n");

    // Finding and printing the maximum sum of non-adjacent elements in the array
printf("The maximum sum from the array such that no two elements are adjacent is: %d \n", maxSumSubseq(arr1, n));
return 0;
}
