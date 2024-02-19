// Write a program in C to return the minimum number of jumps to reach the end of the array.

#include <stdio.h>
#include <limits.h>

// Function to calculate the minimum number of jumps needed to reach the end
int noOfJumps(int arr1[], int low, int high) {
    // If the start and end point are the same, no jump is needed
    if (high == low)
        return 0;

    // If the current position is 0, it's impossible to move forward
    if (arr1[low] == 0)
        return INT_MAX;

    int min = INT_MAX; // Initialize the minimum jumps to a maximum value
    // Iterate through all possible steps from the current position
    for (int i = low + 1; i <= high && i <= low + arr1[low]; i++) {
        // Recursively find the minimum jumps needed from the next position
        int jumps = noOfJumps(arr1, i, high);
        // If it's possible to jump from the next position and it's minimum, update min
        if (jumps != INT_MAX && jumps + 1 < min)
            min = jumps + 1; // Update the minimum jumps
    }
    return min; // Return the minimum number of jumps
}

int main() {
    int arr1[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9, 1, 1, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    //------------- print original array ------------------
    printf("The given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //------------------------------------------------------

    // Calculate and display the minimum number of jumps needed to reach the end
    printf("The minimum number of jumps required to reach the end is: %d\n", noOfJumps(arr1, 0, n - 1));

    return 0;
}
