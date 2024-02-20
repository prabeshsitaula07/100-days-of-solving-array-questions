// Write a program in C to find the median of two sorted arrays of the same size.

#include <stdio.h>

// Function to return the maximum of two numbers
int max(int a, int b) {
return ((a > b) ? a : b);
}

// Function to return the minimum of two numbers
int min(int a, int b) {
return ((a < b) ? a : b);
}

// Function to find the median of an array
int median(int arr[], int size) {
if (size % 2 == 0)
return (arr[size/2] + arr[size/2-1])/2;
else
return arr[size/2];
}

// Function to find the median of two sorted arrays
int median2SortedArrays(int arr1[], int arr2[], int size) {
int med1;
int med2;

if(size <= 0) return -1; // If the size is invalid, return -1
if(size == 1) return (arr1[0] + arr2[0])/2; // If there's only one element in each array, return their average
if (size == 2) return (max(arr1[0], arr2[0]) + min(arr1[1], arr2[1])) / 2; // If there are two elements in each array, return their median

   med1 = median(arr1, size); // Find the median of the first array
   med2 = median(arr2, size); // Find the median of the second array

if(med1 == med2) return med1; // If both medians are equal, return any of them

if (med1 < med2) {
return median2SortedArrays(arr1 + size/2, arr2, size - size/2); // Recursively call the function with adjusted arrays
   }
else {
return median2SortedArrays(arr2 + size/2, arr1, size - size/2); // Recursively call the function with adjusted arrays
   }
}

int main() {
int i, m, n;
int arr1[] = {1, 5, 13, 24, 35};
int arr2[] = {3, 8, 15, 17, 32};
   m = sizeof(arr1) / sizeof(arr1[0]);
   n = sizeof(arr2) / sizeof(arr2[0]);

   // Print original arrays
printf("The given array - 1 is :  ");
for(i = 0; i < m; i++) {
printf("%d  ", arr1[i]);
   }
printf("\n");

printf("The given array - 2 is :  ");
for(i = 0; i < n; i++) {
printf("%d  ", arr2[i]);
   }
printf("\n");

   // Calculate and print the median of the two sorted arrays
printf("\nThe Median of the 2 sorted arrays is: %d",median2SortedArrays(arr1, arr2, n));
printf("\n");
return 0;
}
