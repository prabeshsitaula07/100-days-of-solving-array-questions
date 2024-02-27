// Write a program in C to find the maximum element in an array that is first increasing and then decreasing.

#include <stdio.h>

// Function to find the maximum element in an array that increases then decreases
int firstIncreDecre(int arr1[], int n)
{
    int max_ele = arr1[0]; // Initialize the maximum element as the first element

    // Loop through the array to find the maximum element
    for (int i = 1; i < n; i++)
    {
        if (arr1[i] > max_ele)
            max_ele = arr1[i]; // Update max_ele if a greater element is found
    }
    return max_ele; // Return the maximum element
}

int main()
{
    int arr1[] = {2, 7, 12, 25, 4, 57, 27, 44}; // Fill the array by increasing and decreasing elements
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find and print the maximum element which increases then decreases
    printf("The maximum element which is increasing then decreasing is: %d ", firstIncreDecre(arr1, n));
    return 0;
}
