// Write a program in C to replace every element with the greatest element on its right side.

#include <stdio.h>

// Function to print the elements of an array
void printArray(int a[], int n) {
for (int i = 0; i < n; i++)
printf("%d ", a[i]);
}

// Function to replace each element with the next greatest element
void replaceWithNextGreatest(int a[], int size) {
int maximum = a[size - 1]; // Initialize maximum as the last element
a[size - 1] = 0; // Update the last element to 0 as there is no greater element

    // Iterate through the array from right to left
for (int i = size - 2; i >= 0; i--) {
int temp = a[i]; // Store the current element temporarily
a[i] = maximum; // Replace the current element with the maximum

if (maximum < temp)
maximum = temp; // Update maximum if the current element is greater
    }

printf("After replacing, the modified array is: ");
printArray(a, size); // Print the modified array
}

int main() {
int i, arr1[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
int n = sizeof(arr1) / sizeof(arr1[0]);

    //------------- print original array ------------------
printf("The given array is :  ");
for (i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    }
printf("\n");
    //------------------------------------------------------

    // Replace each element with the next greatest element
replaceWithNextGreatest(arr1, n);
return 0;
}
