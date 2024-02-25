// Write a program in C to print all possible combinations of r elements in a given array.

#include <stdio.h>

// Function to generate combinations
void makeCombination(int arr1[], int data[], int st, int end, int index, int r);

// Function to display combinations
void CombinationDisplay(int arr1[], int n, int r) {
    int data[r]; // Temporary array to store the combination
    makeCombination(arr1, data, 0, n - 1, 0, r); // Generate combinations
}

// Recursive function to generate combinations
void makeCombination(int arr1[], int data[], int st, int end, int index, int r) {
    // Base case: if index equals r, print the combination
    if (index == r) {
        for (int j = 0; j < r; j++)
            printf("%d ", data[j]); // Print the combination elements
        printf("\n"); // Move to the next line for the next combination
        return;
    }

    // Generate combinations recursively
    for (int i = st; i <= end && end - i + 1 >= r - index; i++) {
        data[index] = arr1[i]; // Fill data[] with elements of arr1[] for the current combination
        makeCombination(arr1, data, i + 1, end, index + 1, r); // Recursively generate combinations
    }
}

int main() {
    int arr1[] = {1, 5, 4, 6, 8};
    int r = 4; // Number of elements in each combination
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
    int i;

    // Printing the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    printf("The combination from by the number of elements are: %d\n", r);
    printf("The combinations are: \n");
    CombinationDisplay(arr1, n, r); // Display combinations
    return 0;
}
