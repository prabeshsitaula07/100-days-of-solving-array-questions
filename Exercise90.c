// Given an array of size n such that every element is in the range from 0 to n-1. Write a program in C to rearrange the given array so that arr[i] becomes arr[arr[i]].

#include<stdio.h>

// Function to rearrange the elements of an array based on given conditions
void arrayArrange(int arr1[], int n) 
{ 
    // Rearranging elements by using index-based calculation
    for (int i = 0; i < n; i++) {
        // Adding the modified value at the current index
        // Modified value is calculated using the modulo operation and multiplication by 'n'
        arr1[i] += (arr1[arr1[i]] % n) * n;
    }

    // Adjusting elements by dividing them by 'n' to obtain the original values
    for (int i = 0; i < n; i++) {
        arr1[i] /= n;
    }
} 

// Function to print the elements of an array
void arrayPrinting (int arr1[], int n) 
{ 
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr1[i]); 
    }
    printf("\n"); 
} 

// Main function
int main() 
{ 
    int arr1[] = {2, 1, 4, 3, 0}; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 

    printf("The Original array is \n"); 
    arrayPrinting(arr1, n); 

    // Rearranging the array elements
    arrayArrange(arr1, n); 

    printf("The modified array is: \n"); 
    arrayPrinting(arr1, n); 
    return 0; 
}
