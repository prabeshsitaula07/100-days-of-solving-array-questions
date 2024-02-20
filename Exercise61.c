// Write a program in C to find the maximum product subarray in a given array.

#include <stdio.h>

// Function to find the minimum of two numbers
int min(int p, int q) {
return (p < q) ? p : q;
}

// Function to find the maximum of two numbers
int max(int p, int q) {
return (p > q) ? p : q;
}

// Function to find the maximum product of a sub-array in the given array
int maxProduct(int arr1[], int n) {
int maxend = 0, minend = 0;
int maxupto = 0;

    // Loop through the array to calculate the maximum product
for (int i = 0; i < n; i++) {
int temp = maxend;

        // Updating maximum and minimum products considering the current element
maxend = max(arr1[i], max(arr1[i] * maxend, arr1[i] * minend));
minend = min(arr1[i], min(arr1[i] * temp, arr1[i] * minend));

        // Update maximum product if needed
maxupto = max(maxupto, maxend);
    }
return maxupto; // Return the maximum product of sub-arrays
}

int main(void) {
int arr1[] = { -4, 9, -7, 0, -15, 6, 2, -3 };
int n = sizeof(arr1) / sizeof(arr1[0]);
int i;

    //------------- print original array ------------------	
printf("The given array is :  ");
for(i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    } 
printf("\n");
    //------------------------------------------------------ 	

    // Find and display the maximum product of a sub-array in the given array
printf("The maximum product of a sub-array in the given array is:  %d", maxProduct(arr1, n));
return 0;
}
