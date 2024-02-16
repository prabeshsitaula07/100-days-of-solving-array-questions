// Write a program in C to find the pivot element of a sorted and rotated array using binary search.

#include <stdio.h>

// Function to find the pivot element in a rotated sorted array
int findPivotElem(int *arr1, int left_elem, int right_elem) {
    // Base cases for recursion
    if (right_elem < left_elem)
        return -1;
    if (right_elem == left_elem)
        return left_elem;

    // Calculate mid element
    int mid_elem = (left_elem + right_elem) / 2;

    // Check if the mid element is the pivot element
    if (mid_elem < right_elem && arr1[mid_elem] > arr1[mid_elem + 1])
        return mid_elem;
    if (mid_elem > left_elem && arr1[mid_elem] < arr1[mid_elem - 1])
        return mid_elem - 1;

    // Recursively search for the pivot element in the left or right sub-array
    if (arr1[left_elem] >= arr1[mid_elem]) {
        return findPivotElem(arr1, left_elem, mid_elem - 1);
    } else {
        return findPivotElem(arr1, mid_elem + 1, right_elem);
    }
}

// Main function
int main() {
    int i;
    int arr1[] = {14, 23, 7, 9, 3, 6, 18, 22, 16, 36};
    int ctr = sizeof(arr1) / sizeof(arr1[0]);

    // Displaying the given array
    printf("The given array is :  ");
    for (i = 0; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Finding and displaying the pivot element
    printf("The Pivot Element in the array is : %d \n", arr1[findPivotElem(arr1, 0, ctr - 1) + 1]);

    return 0;
}
