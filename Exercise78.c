// Write a program in C to find four array elements whose sum is equal to a given number.

#include <stdio.h>

// Function to find and print four elements whose sum is equal to a given value
void sumOfFourElements(int *arr1, int size, int SUM) {
    int i, j, k, l;
    printf("The elements are:  \n");

    // Four nested loops to iterate through combinations of elements
    for (i = 0; i < size - 3; i++) {
        for (j = i + 1; j < size - 2; j++) {
            for (k = j + 1; k < size - 1; k++) {
                for (l = k + 1; l < size; l++) {
                    // Check if sum of selected elements equals the given SUM
                    if (arr1[i] + arr1[j] + arr1[k] + arr1[l] == SUM) {
                        printf("%d, %d, %d, %d\n", arr1[i], arr1[j], arr1[k], arr1[l]);
                        return; // Found the elements, print them and return
                    }
                }
            }
        }
    }
    printf("No such elements found for the given sum.\n");
}

int main() {
    int arr1[] = {3, 7, 1, 9, 15, 14, 6, 2, 5, 7};
    int sumGiven = 37;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find and print four elements whose sum is equal to sumGiven
    sumOfFourElements(arr1, n, sumGiven);
    return 0;
}
