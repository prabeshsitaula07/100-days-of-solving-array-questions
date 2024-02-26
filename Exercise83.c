// Write a program in C to find a pair with the given difference.

#include <stdio.h>
#include <stdbool.h>

// Function to find the pair with the given difference
bool pairFinding(int arr1[], int size, int d) {
    int i = 0;  
    int j = 1;

    while (i < size && j < size) {
        if (i != j && arr1[j] - arr1[i] == d) {
            printf("The pair are: (%d, %d)", arr1[i], arr1[j]); // Print the pair
            return true;
        } else if (arr1[j] - arr1[i] < d) {
            j++; // Increment j to check the next element
        } else {
            i++; // Increment i to check the next element
        }
    }

    printf("No such pair found in the given array."); // Print if no pair found
    return false;
}

int main() {
    int arr1[] = {1, 15, 39, 75, 92};
    int size = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
    int d = 53;
    int i;

    // Printing the original array
    printf("The given array is:  \n");
    for(i = 0; i < size; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    printf("The given difference is:  %d\n", d);
    pairFinding(arr1, size, d); // Function call to find the pair with the given difference
    return 0;
}
