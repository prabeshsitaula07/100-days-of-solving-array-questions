// Write a program in C to find the minimum element in a sorted and rotated array.

#include <stdio.h>

// Function to find the minimum element in a rotated sorted array
int findMin(int arr1[], int start, int end) {
    // If the start index and end index are the same, return the element at that index
    if (start == end) {
        return arr1[start];
    }

    // Find the middle index
    int mid = (start + end) / 2;

    // If the element at the start index is greater than the element at the middle index,
    // the minimum element lies in the left half, so search in that half
    if (arr1[start] > arr1[mid]) {
        return findMin(arr1, start, mid);
    } else if (arr1[mid] > arr1[end]) {
        // If the element at the middle index is greater than the element at the end index,
        // the minimum element lies in the right half, so search in that half
        return findMin(arr1, mid + 1, end);
    } else {
        // If none of the conditions are met, the array is not rotated or only partially rotated,
        // so the minimum element is at the start index
        return arr1[start];
    }
}

int main() {
    int arr1[] = {3, 4, 5, 6, 7, 9, 2};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    //------------- print original array ------------------
    printf("The given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //------------------------------------------------------

    // Find and print the minimum element in the rotated sorted array
    int min = findMin(arr1, 0, n - 1);
    printf("The minimum element in the above array is: %d\n", min);

    return 0;
}
