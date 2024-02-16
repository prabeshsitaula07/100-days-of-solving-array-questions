// Write a program in C to find the smallest missing element in a sorted array.

#include <stdio.h>

// Function to find the smallest missing element in a sorted array
int MissingSmallElement(int arr1[], int low_index, int high_index) {
    // Check if low_index is greater than high_index, indicating the end of the search
    if (low_index > high_index)
        return low_index; // Return low_index as it represents the smallest missing element

    // Calculate the middle index between low_index and high_index
    int mid_index = low_index + (high_index - low_index) / 2;

    // If the element at mid_index is equal to mid_index, the mismatch lies on the right half
    if (arr1[mid_index] == mid_index)
        return MissingSmallElement(arr1, mid_index + 1, high_index);
    else // If not, the mismatch lies on the left half
        return MissingSmallElement(arr1, low_index, mid_index - 1);
}

int main() {
    int arr1[] = { 0, 1, 3, 4, 5, 6, 7, 9 };
    int ctr = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is :  ");
    for(i = 0; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    } 
    printf("\n");

    // Define the low_index and high_index for the array
    int low_index = 0, high_index = ctr - 1;

    // Find the missing smallest element in the array
    printf("The missing smallest element is: %d",
            MissingSmallElement(arr1, low_index, high_index));
    return 0;
}
