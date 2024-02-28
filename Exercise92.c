// Write a program in C that checks whether the elements in an unsorted array appear consecutively or not.

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

// Function to find the minimum value in an array
int FindMin(int arr1[], int n); 

// Function to find the maximum value in an array
int FindMax(int arr1[], int n); 

// Function to check if the elements of an array are consecutive
bool areConsecutive(int arr1[], int n) 
{ 
    if (n < 1) 
        return false; 

    // Find the minimum and maximum elements in the array
    int min_no = FindMin(arr1, n); 
    int max_no = FindMax(arr1, n); 

    // If the difference between max and min values + 1 is equal to the size of the array
    if (max_no - min_no + 1 == n) 
    { 
        bool *checked = (bool *) calloc(n, sizeof(bool)); // Allocate memory for a boolean array

        int i; 
        // Iterate through the array
        for (i = 0; i < n; i++) 
        { 
            // If the current number's index in checked is already true, it's not consecutive
            if (checked[arr1[i] - min_no] != false) 
                return false; 

            checked[arr1[i] - min_no] = true; // Mark the current number as checked
        } 
        return true; // If all numbers are consecutive
    } 
    return false; // If difference is not equal to n
} 

// Function to find the minimum value in an array
int FindMin(int arr1[], int n) 
{ 
    int min_no = arr1[0]; 
    for (int i = 1; i < n; i++) 
        if (arr1[i] < min_no) 
            min_no = arr1[i]; 
    return min_no; 
} 

// Function to find the maximum value in an array
int FindMax(int arr1[], int n) 
{ 
    int max_no = arr1[0]; 
    for (int i = 1; i < n; i++) 
        if (arr1[i] > max_no) 
            max_no = arr1[i]; 
    return max_no; 
} 

// Main function
int main() 
{ 
    int arr1[]= {7, 4, 3, 5, 6, 2}; // Test array
    int i;
    int arr_size = sizeof(arr1)/sizeof(arr1[0]); // Calculate array size
    //------------- print original array ------------------	
    printf("The given array is:  \n");
    for(i = 0; i < arr_size; i++)
    {
        printf("%d  ", arr1[i]); // Print the elements of the array
    }
    printf("\n");
    //-----------------------------------------------------------  	
    int n = sizeof(arr1)/sizeof(arr1[0]); 
    if(areConsecutive(arr1, n) == true) 
        printf("The appearance of elements in the array are consecutive."); 
    else
        printf("The appearance of elements in the array are not consecutive."); 
    return 0; 
}
