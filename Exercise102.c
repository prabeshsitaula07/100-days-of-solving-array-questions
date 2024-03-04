// Write a program in C to rearrange an array in such an order that– small, large, second smallest, second largest, etc.

#include<stdio.h>

// Function to sort the array in ascending order using bubble sort
void sort(int arr1[], int n) 
{ 
    int i, j, temp; 
    for (i = 0; i < n - 1; i++) {   
        for (j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                temp = arr1[j]; 
                arr1[j] = arr1[j + 1]; 
                arr1[j + 1] = temp;
            }
        }
    }   
    return;
} 

// Function to rearrange the array elements in zig-zag fashion
void rearrangeArray(int arr1[], int n) 
{   
    sort(arr1, n); // Sort the array

    int tempArr[n]; // Temporary array to store rearranged elements
    int ArrIndex = 0; // Index to insert elements in the temp array

    // Rearrange elements in zig-zag order
    for (int i = 0, j = n - 1; i <= n / 2 || j > n / 2; i++, j--) { 
        tempArr[ArrIndex] = arr1[i]; // Insert element from the start
        ArrIndex++;
        tempArr[ArrIndex] = arr1[j]; // Insert element from the end
        ArrIndex++;
    } 

    // Copy elements from the temp array back to the original array
    for (int i = 0; i < n; i++) { 
        arr1[i] = tempArr[i];
    }
} 

int main() 
{ 
    int arr1[] = { 5, 8, 1, 4, 2, 9, 3, 7, 6 };    
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    int i = 0; 

    // Print the original array
    printf("The given array is:  \n");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Rearrange the array and print the new array
    printf("The new array is:  \n");
    rearrangeArray(arr1, n); 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]); 
    }
    return 0; 
}
