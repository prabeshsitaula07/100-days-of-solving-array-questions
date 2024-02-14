// Write a program in C to find a pair with given sum in the array.

#include <stdio.h>

// Function to check if there exists a pair of elements in the array that sums up to a given value
void checkForSum(int arr1[], int n, int s) {
    // Iterate through array elements up to the second last element
    for (int i = 0; i < n - 1; i++) {
        // Iterate through array elements from the (i + 1)th element to the last element
        for (int j = i + 1; j < n; j++) {
            // Check if the sum of the current pair of elements equals the given sum
            if (arr1[i] + arr1[j] == s) {
                printf("Pair of elements can make the given sum by the value of index %d and %d", i, j);
                return; // Exit the function as pair found
            }
        }
    }
    printf("No pair can make the given sum.");
}

// Main function
int main() {
    // Array and sum initialization
    int arr1[] = { 6, 8, 4, -5, 7, 9 };
    int s = 15;

    // Display the given array
    printf("The given array : ");
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\nThe given sum : %d\n\n", s);

    // Check for a pair of elements that sum up to the given value
    checkForSum(arr1, n, s);

    return 0;
}
