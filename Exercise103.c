// Write a program in C to update every array element with multiplication of previous and next numbers in array.

#include<stdio.h>

// Function to create a new array where each element is the product of its adjacent elements
void newArryPrevNext(int arr1[], int n) 
{ 
    if (n <= 1)  // If the array has 0 or 1 element, no change is made
        return; 

    int pre_elem = arr1[0]; // Store the first element initially
    arr1[0] = arr1[0] * arr1[1]; // Update the first element by multiplying with the next element

    // Loop through the array from 2nd to (n-1)th element
    for (int i = 1; i < n - 1; i++) 
    { 
        int cur_elem = arr1[i]; // Store the current element
        arr1[i] = pre_elem * arr1[i + 1]; // Multiply the previous element with the next element and assign to current
        pre_elem = cur_elem; // Update the previous element for the next iteration
    } 

    arr1[n - 1] = pre_elem * arr1[n - 1]; // Update the last element of the array by multiplying it with the previous element
} 

int main() 
{ 
    int arr1[] = {1, 2, 3, 4, 5, 6}; // Given array
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate the size of the array
    int i = 0; 

    // Print the original array
    printf("The given array is:  \n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Process the array to create a new array with elements as the product of adjacent elements
    printf("The new array is: \n");	
    newArryPrevNext(arr1, n); 

    // Display the elements of the new array
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr1[i]); 
    }

    return 0; 
}
