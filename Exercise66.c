// Write a program in C to count the number of inversions in a given array.

#include <stdio.h>

// Function to count the number of inversions in the array
int inv_count(int arr1[], int n) {
int inversionCtr = 0;
printf("The inversions are: ");

    // Loop through each pair of elements to find inversions
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
            // If a pair forms an inversion, print it and increment the counter
if (arr1[i] > arr1[j]) {
printf("(%d, %d)  ", arr1[i], arr1[j]);
inversionCtr++;
            }
        }
    }
return inversionCtr; // Return the total count of inversions
}

int main() {
int arr1[] = { 1, 9, 6, 4, 5 };
int n = sizeof(arr1) / sizeof(arr1[0]);
int i;

    // Print the original array
printf("The given array is :  ");
for(i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    } 
printf("\n");

    // Count and display the number of inversions in the array
printf("\nThe number of inversions that can be formed from the array is:  %d", inv_count(arr1, n));
return 0;
}
