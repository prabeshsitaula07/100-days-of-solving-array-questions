// Write a program in C to check whether an array is a subset of another array.

#include <stdio.h>

// Function to check if arr2[] is a subset of arr1[]
int chkSubsetArray(int *arr1 , int arr1_size, int *arr2, int arr2_size) {
    int i, j;
    // Iterate through elements of arr2[]
    for (i = 0; i < arr2_size; i++) {
        // Search for current arr2[] element in arr1[]
        for (j = 0; j < arr1_size; j++) {
            // If element found in arr1[], break the loop
            if (arr2[i] == arr1[j])
                break;
        }
        // If the loop finishes without finding an element, arr2[] is not a subset
        if (j == arr1_size)
            return 0; // Not a subset
    }
    return 1; // arr2[] is a subset of arr1[]
}

int main() {
    int arr1[] = {4, 8, 7, 11, 6, 9, 5, 0, 2};
    int arr2[] = {5, 4, 2, 0, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i;

    //------------- print first array ------------------
    printf("The given first array is: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    //------------- print second array ------------------
    printf("The given second array is: ");
    for (i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Check if arr2[] is a subset of arr1[]
    if (chkSubsetArray(arr1, n1, arr2, n2))
        printf("The second array is a subset of the first array.\n");
    else
        printf("The second array is not a subset of the first array.\n");

    return 0;
}
