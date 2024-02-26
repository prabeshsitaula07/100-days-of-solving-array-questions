// Write a program in C to find the minimum distance between two numbers in a given array.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to find the minimum distance between two given numbers in an array
int findMinDistance(int *input, int n1, int n2, int length) {
    int pos_one = INT_MAX; // Initialize position of first number as maximum possible integer
    int pos_two = INT_MAX; // Initialize position of second number as maximum possible integer
    int d = length + 1; // Initialize minimum distance as length+1
    int newD;

    // Iterate through the array
    for (int i = 0; i < length; i++) {
        if (input[i] == n1) // If element is the first number
            pos_one = i; // Store its position
        else if (input[i] == n2) // If element is the second number
            pos_two = i; // Store its position

        // If both numbers are found
        if (pos_one < length && pos_two < length) {
            newD = abs(pos_one - pos_two); // Calculate distance between positions
            if (d > newD) // Update minimum distance
                d = newD;
        }
    }

    return d == length + 1 ? -1 : d; // Return minimum distance or -1 if no such pair found
}

int main() {
    int arr1[] = {7, 9, 5, 11, 7, 4, 12, 6, 2, 11};
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
    int p = 7; // First number
    int q = 11; // Second number
    int i;

    // Printing the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Calculate and print the minimum distance between the given numbers
    printf("The minimum distance between %d and %d is:  %d\n", p, q, findMinDistance(arr1, p, q, n));
    return 0;
}
