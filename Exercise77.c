// Write a program in C to generate random permutations of array elements.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap the values of two integers
void changeValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to display elements of an array
void ArrayDisplay(int arr1[], int n) {
    printf("The shuffled elements in the array are:  \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");
}

// Function to shuffle an array randomly
void shuffleRandom(int arr1[], int n) {
    srand(time(NULL)); // Seed for random number generation

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Generate a random index between 0 and i
        changeValues(&arr1[i], &arr1[j]); // Swap elements at indices i and j
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    shuffleRandom(arr1, n); // Shuffle the array
    ArrayDisplay(arr1, n); // Display the shuffled array

    return 0;
}
