// Write a program in C to rearrange positive and negative numbers alternatively in a given array.

// N.B.: If positive numbers are more they appear at the end and for also negative numbers, they too appear in the end of the array.

#include <stdio.h>

// Function to swap two numbers in an array
void changeNumber(int *arr1, int i, int j) 
{
    int temp = arr1[i];
    arr1[i] = arr1[j];
    arr1[j] = temp;
}

// Function to split positive and negative numbers in the array
void splitPosNeg(int *arr1, int size)
{
    int left = 0, right = size - 1;
    while (right > left)
    {
        // Move left pointer to find a negative number
        while (arr1[left] < 0)
            left++;
        // Move right pointer to find a positive number
        while (arr1[right] > 0)
            right--;
        // Swap positive and negative numbers if left < right
        if (left < right)
        {
            changeNumber(arr1, left, right);
        }
    }
}

// Function to rearrange positive and negative numbers alternatively
void rearrangeNumbers(int *arr1, int size) 
{
    int i, j;
    // Split the array into positive and negative parts
    splitPosNeg(arr1, size);

    // Find the first positive number's index
    for (i = 0; arr1[i] < 0; i++);

    // Rearrange the numbers (one positive and one negative alternatively)
    for (j = 1; (j < i) && (arr1[j] < 0); j += 2)
    {
        // Swap positive and negative numbers
        changeNumber(arr1, i, j);
        i++;
    }
    return;
}

int main()
{
    int i, arr1[] = {-4, 8, -5, -6, 5, -9, 7, 1, -21, -11, 19}; 
    int arr_size = sizeof(arr1) / sizeof(arr1[0]);	

    //------------- print original array ------------------	
    printf("The given array is:  \n");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d  ", arr1[i]); // Print the elements of the original array
    }
    printf("\n");
    //----------------------------------------------------------- 

    printf("The rearranged array is:  \n");
    rearrangeNumbers(arr1, 11);
    for (i = 0; i < 11; i++) {
        printf("%d ", arr1[i]); // Print the rearranged array
    }
    return 0;
}
