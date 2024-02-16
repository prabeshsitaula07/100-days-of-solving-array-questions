// Write a program in C to rotate an array by N positions.

#include <stdio.h>

// Function to shift the elements of an array by one position to the left
void shiftArr1Pos(int *arr1, int arrSize) {
    int i, temp;
    temp = arr1[0];  // Store the first element temporarily

    // Shift elements to the left by one position
    for (i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    arr1[i] = temp;  // Place the first element at the end
}

// Function to rotate an array by 'rotFrom' positions
void arr1Rotate(int *arr1, int arrSize, int rotFrom) {
    int i;

    // Perform rotation 'rotFrom' times
    for (i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);  // Rotate the array by one position
    }
    return;
}

// Main function
int main() {
    int arr1[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27}; 
    int ctr = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print original array
    printf("The given array is :  ");
    for (i = 0; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    } 
    printf("\n");

    // Print values from 4th position
    printf("From 4th position, the values of the array are :  ");
    for (i = 4; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    } 
    printf("\n"); 

    // Print values before 4th position
    printf("Before 4th position, the values of the array are :  ");
    for (i = 0; i < 4; i++) {
        printf("%d  ", arr1[i]);
    } 
    printf("\n");     

    // Rotate the array from the 4th position
    arr1Rotate(arr1, ctr, 4);
    printf("\nAfter rotating from the 4th position, the array is: \n");
    for (i = 0; i < ctr; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}
