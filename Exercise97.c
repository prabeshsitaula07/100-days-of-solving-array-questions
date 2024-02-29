// Write a program in C to find the index of the first peak element in a given array.

#include<stdio.h>

// Function to search for a peak element recursively
int peakElementSearch(int arr1[], int ele_low, int ele_high, int n) 
{ 
    int ele_mid = ele_low + (ele_high - ele_low) / 2;  

    // Check if the element at mid is a peak or not
    if ((ele_mid == 0 || arr1[ele_mid - 1] <= arr1[ele_mid]) &&
        (ele_mid == n - 1 || arr1[ele_mid + 1] <= arr1[ele_mid])) 
        return ele_mid; 
    else if (ele_mid > 0 && arr1[ele_mid - 1] > arr1[ele_mid]) 
        return peakElementSearch(arr1, ele_low, (ele_mid - 1), n); 
    else 
        return peakElementSearch(arr1, (ele_mid + 1), ele_high, n); 
} 

// Function to find a peak element in an array
int PeakFinding(int arr1[], int n) 
{ 
    return peakElementSearch(arr1, 0, n - 1, n); 
} 

int main() 
{ 
    int arr1[] = {5, 12, 13, 20, 16, 19, 11, 7, 25}; 
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i = 0; 

    // Print the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find the index of the first peak element in the array
    printf("The index of the first peak element in the array is: %d", PeakFinding(arr1, n)); 
    return 0; 
}
