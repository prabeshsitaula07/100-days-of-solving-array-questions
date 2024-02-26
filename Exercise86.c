// Write a program in C to find the equilibrium index of an array.

#include <stdio.h>

// Function to find equilibrium indices in the array
void findEquiIndex(int arr1[], int n)
{
    int sumofleft[n]; // Initialize an array to store sums of elements to the left of each index
    sumofleft[0] = 0; // Initialize the sum at index 0 as 0 (no elements to the left)

    // Calculate the cumulative sum of elements to the left of each index
    for (int i = 1; i < n; i++) 
    {
        sumofleft[i] = sumofleft[i - 1] + arr1[i - 1]; // Sum of elements to the left of the current index
    }

    int sumofright = 0; // Initialize the sum of elements to the right as 0

    // Traverse the array from right to left to check for equilibrium indices
    for (int i = n - 1; i >= 0; i--)
    {
        if (sumofleft[i] == sumofright) // If the sum to the left matches the sum to the right
        {
            printf("%d  ", i); // Print the index as equilibrium index
        }
        sumofright += arr1[i]; // Add the current element to the sum of elements to the right
    }
}

int main()
{
    int arr1[] = { 0, -4, 7, -4, -2, 6, -3, 0 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is:  \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Find and print equilibrium indices
    printf("The equilibrium index found at : ");
    findEquiIndex(arr1, n);

    return 0;
}
