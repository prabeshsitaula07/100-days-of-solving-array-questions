// Write a program in C to find the maximum difference between any two elements such that the larger element appears after the smaller number.

#include <stdio.h>

// Function to find the maximum difference between two elements in the array
int maxDifference(int arr1[], int n) {
int i;
int min_element = arr1[0];  // Initialize the minimum element as the first element of the array
int diff = arr1[1] - arr1[0];  // Initialize the difference as the difference between the second and first element

for (i = 1; i < n; i++) {
        // Check if the difference between the current element and the minimum element is greater than the current difference
if (arr1[i] - min_element > diff) {
diff = arr1[i] - min_element;  // Update the difference
printf("The elements which provide maximum difference is: %d, %d\n", min_element, arr1[i]);
        }

        // Update the minimum element if the current element is smaller than the current minimum element
if (arr1[i] < min_element)
            min_element = arr1[i];
    }
return diff;  // Return the maximum difference
}

int main() {
int arr1[] =  { 7, 9, 5, 6, 13, 2 };
int n = sizeof(arr1) / sizeof(arr1[0]);
int i;  

    // Printing the original array
printf("The given array is :  ");
for (i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    } 
printf("\n");

    // Finding and printing the maximum difference between two elements in the array
printf("The Maximum difference between two elements in the array is: %d", maxDifference(arr1, n));
getchar();  // To keep the output screen open
return 0;
}
