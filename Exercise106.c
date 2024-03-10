// Write a C program to convert an array in such a way that it doubles its value. This will replace the next element with 0 if the current and next elements are the same. This program will rearrange the array so that all 0's are moved to the end.

#include<stdio.h>

// Function to move all non-zero elements to the beginning of the array
void ZerosAtEnd(int arr1[], int n) 
{ 
    int ctr = 0; 
    for (int i = 0; i < n; i++) 
        if (arr1[i] != 0) 
            arr1[ctr++] = arr1[i]; // Shift non-zero elements to the front

    while (ctr < n) 
        arr1[ctr++] = 0; // Fill remaining positions with zeros
} 

// Function to update the array by merging consecutive identical non-zero elements and moving zeros to the end
void updateArrayRearrange(int arr1[], int n) 
{ 
    if (n == 1) 
        return; // If the array has only one element, return without any change

    for (int i = 0; i < n - 1; i++) 
	{ 
        if ((arr1[i] != 0) && (arr1[i] == arr1[i + 1])) 
		{ 
            arr1[i] = 2 * arr1[i]; // Merge consecutive identical elements by doubling the first element
            arr1[i + 1] = 0; // Set the next element as 0
            i++; // Skip the next element as it's already processed
        } 
    } 

    ZerosAtEnd(arr1, n); // Move all zeros to the end of the array
} 

// Function to print the array
void ArrayPrinting(int arr1[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        printf("%d  ",arr1[i]); // Print each element of the array
} 

// Main function
int main() 
{ 
    int arr1[] = { 0, 3, 3, 3, 0, 0, 7, 7, 0, 9 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 

    printf("The given array is:  "); 
    ArrayPrinting(arr1, n); // Display the initial array

    updateArrayRearrange(arr1, n); // Update the array by merging consecutive identical elements and moving zeros
    printf("\nThe new array is: "); 
    ArrayPrinting(arr1, n); // Display the modified array

    return 0; 
}
