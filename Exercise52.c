// Write a program in C to count the number of triangles that can be formed from a given array.

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void* one, const void* two) 
{
    return *(int*)one > *(int*)two; // Compare two integers
}

// Function to count the number of possible triangles that can be formed
int CountNumberOfTriangles(int *arr1, int arr_size) 
{
    int ctrTriangle = 0, i, j, k;
    qsort(arr1, arr_size, sizeof(int), compare); // Sort the array in ascending order

    for (i = 0; i < arr_size - 2; ++i) 
    {
        for (j = i + 1; j < arr_size; ++j) 
        {
            k = j + 1;
            // Check for triangles (arr1[i] + arr1[j]) > arr1[k]
            while (k < arr_size && (arr1[i] + arr1[j]) > arr1[k]) 
            {
                k++;
            }
            // Increment the count of triangles
            ctrTriangle += k - j - 1;
        }
    }
    return ctrTriangle;
}

int main() 
{
    int arr1[] = {6, 18, 9, 7, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is:  ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Calculate and print the number of possible triangles that can be formed from the array
    printf("Number of possible triangles that can be formed from the array is: %d\n",
           CountNumberOfTriangles(arr1, n));
    return 0;
}
