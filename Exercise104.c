// Write a program in C to rearrange an array such that even index elements are smaller and odd index elements are greater than their next.

#include<stdio.h>

// Function to rearrange the array elements based on specific conditions
void rearrange(int* arr1, int n) 
{ 
    int temp;

    // Loop through the array up to the second last element
    for (int i = 0; i < n - 1; i++) 
    { 
        // If 'i' is even and the current element is greater than the next element, swap them
        if (i % 2 == 0 && arr1[i] > arr1[i + 1]) 
        { 
            temp = arr1[i];
            arr1[i] = arr1[i + 1];
            arr1[i + 1] = temp;
        }
        // If 'i' is odd and the current element is less than the next element, swap them
        if (i % 2 != 0 && arr1[i] < arr1[i + 1]) 
        { 
            temp = arr1[i];
            arr1[i] = arr1[i + 1];
            arr1[i + 1] = temp;
        }
    } 
} 

// Function to display the array elements
void dispArray(int arr1[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        printf("%d  ", arr1[i]); 
    printf("\n"); 
} 

// Main function
int main() 
{ 
    int arr1[] = { 6, 4, 2, 1, 8, 3 }; // Given array
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
    printf("The array given is: \n"); 
    dispArray(arr1, n); // Display the given array
    rearrange(arr1, n); // Rearrange the array based on specific conditions
    printf("The new array after rearranging: \n"); 
    dispArray(arr1, n); // Display the rearranged array
    return 0; 
}
