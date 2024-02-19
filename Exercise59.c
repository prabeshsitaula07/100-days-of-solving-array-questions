// Write a program in C to return the counting sort on an array.

#include <stdio.h>

// Function to perform counting sort on the array
void counting_sort(int arr1[], int n, int max) {
    int count[50] = {0}; // Initializing an array to store count of elements
    int i, j;

    // Counting occurrences of each element in the array
    for (i = 0; i < n; ++i)
        count[arr1[i]] = count[arr1[i]] + 1;

    printf("After sorting the elements in the array are:  ");

    // Reconstructing the sorted array using count array
    for (i = 0; i <= max; ++i) {
        for (j = 1; j <= count[i]; ++j) {
            printf("%d ", i); // Printing the element based on its count
        }
    }
}

int main() {
    int max = 0; // Initializing max value
    int arr1[] = {4, 14, 8, 0, 2, 5, 2, 1, 0, 17, 9, 0, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    //------------- print original array ------------------
    printf("The given array is :  ");
    for (i = 0; i < n; i++) {
        if (arr1[i] > max)
            max = arr1[i]; // Finding maximum element in the array
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    //------------------------------------------------------

    counting_sort(arr1, n, max); // Function call for counting sort
    return 0;
}
