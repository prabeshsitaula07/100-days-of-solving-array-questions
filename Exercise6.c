// Write a program in C to print all unique elements in an array.

#include <stdio.h>
int main() {
    int n, i, j;

    // take value of n from user
    printf("Number of array elements: ");
    scanf("%d", &n);

    int nums[n];
    bool is_Unique[n];   // Declare an array to store whether each element is unique or not
    
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        is_Unique[i] = true;  // Assume all elements are unique initially
    }

    // Loop to check for duplicate elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                is_Unique[i] = false;  // Mark the current and duplicate element as not unique
                is_Unique[j] = false;
            }
        }
    }

    // display output
    printf("Unique elements in the array are: ");
    for (i = 0; i < n; i++) {
        if (is_Unique[i]) {
            printf("%d ", nums[i]);
        }
    }

    return 0;
}
