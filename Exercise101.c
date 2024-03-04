// Write a program in C to rearrange an array such that arr[i]=i.

// N.B.: Given array contains N elements, from 0 to N – 1. All elements within the range may not be present in the array. There will be -1 if an element within the range is not present in the array.

#include<stdio.h>

// Function to rearrange the array
int arrayRearrange(int arr1[], int l) 
{ 
    for (int i = 0; i < l; i++)  
    { 
        if (arr1[i] != -1 && arr1[i] != i)  
        { 
            int x = arr1[i]; 
            // Swap elements until an element is -1 or the same as its index
            while (arr1[x] != -1 && arr1[x] != x) 
            { 
                int y = arr1[x]; 
                arr1[x] = x; 
                x = y; 
            } 
            arr1[x] = x; 
            if (arr1[i] != i)  
            { 
                arr1[i] = -1; // Set the element to -1 if it doesn't match its index
            } 
        } 
    } 
} 

int main() 
{ 
    int arr1[] = { 2, 5, -1, 6, -1, 8, 7, -1, 9, 1 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]);     
    int i = 0; 

    // Print the original array
    printf("The given array is:  \n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Rearrange the array and print the new array
    printf("The new array is: ");
    arrayRearrange(arr1, n); 
    for (int i = 0; i < n; i++) 
        printf("%d  ",arr1[i]); 
}
