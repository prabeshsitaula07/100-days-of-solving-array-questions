// Write a program in C to find the smallest positive number missing from an unsorted array.

#include <stdio.h>
#include <stdlib.h>

// Function to swap two integers
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// Function to separate positive and negative numbers
int separateNvePsvNumbers(int arr1[], int arr_size)
{
    int j = 0, i;
    for (i = 0; i < arr_size; i++)
    {
        if (arr1[i] <= 0)
        {
            swap(&arr1[i], &arr1[j]);
            j++;
        }
    }
    return j; // Return the position where positive numbers start
}

// Function to find the smallest positive missing number
int getMissPosNumber(int arr1[], int arr_size)
{
    int i;
    // Modify array elements to mark presence of numbers
    for (i = 0; i < arr_size; i++)
    {
        if (abs(arr1[i]) - 1 < arr_size && arr1[abs(arr1[i]) - 1] > 0)
            arr1[abs(arr1[i]) - 1] = -arr1[abs(arr1[i]) - 1];
    }
    // Return the smallest positive missing number
    for (i = 0; i < arr_size; i++)
        if (arr1[i] > 0)
            return i + 1; // Indexes start from 0, so add 1 to get the number
    return arr_size + 1; // If no positive numbers found, return arr_size + 1
}

// Function to get the smallest positive missing number in the array
int GetSmalPosMisNum(int arr1[], int arr_size)
{
    int shift = separateNvePsvNumbers(arr1, arr_size);
    return getMissPosNumber(arr1 + shift, arr_size - shift);
}

int main()
{
    int arr1[] = {3, 1, 4, 10, -5, 15, 2, -10, -20};
    int arr_size = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print the original array
    printf("The given array is :  ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Get the smallest positive missing number
    int miss_num = GetSmalPosMisNum(arr1, arr_size);
    printf("The smallest positive number missed is:  %d ", miss_num);
    getchar();
    return 0;
}
