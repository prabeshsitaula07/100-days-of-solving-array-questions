// Write a program in C to print all unique elements of an unsorted array.

#include <stdio.h>
	
int main() {
    int arr1[] = {1, 5, 8, 5, 7, 3, 2, 4, 1, 6, 2};
    int n = sizeof(arr1) / sizeof(int);
    int i, j;

    // Print the original array
    printf("The given array is :  ");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    printf("Unique Elements in the given array are: \n");
    for (i = 0; i < n; i++) {
        // Iterate through the array to find unique elements
        for (j = 0; j < i; j++) {
            // If a duplicate is found, break the loop
            if (arr1[i] == arr1[j])
                break;
        }

        // If 'i' reaches 'j', the current element is unique, hence print it
        if (i == j) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}
