// Write a program in C to segregate even and odd elements in an array.

#include<stdio.h>

// Function to swap two elements
void changePlace(int *ar, int *br) 
{ 
    int temp = *ar; 
    *ar = *br; 
    *br = temp; 
} 

// Function to segregate even and odd numbers in an array
void EvenOddSegre(int arr1[], int size) 
{ 
    int l_index = 0, r_index = size - 1; 

    // Segregating even and odd numbers
    while (l_index < r_index) 
    { 
        // Move left_index until an odd number is found
        while (arr1[l_index] % 2 == 0 && l_index < r_index) 
            l_index++; 

        // Move right_index until an even number is found
        while (arr1[r_index] % 2 == 1 && l_index < r_index) 
            r_index--; 

        // Swap the found odd and even elements
        if (l_index < r_index) 
        { 
            changePlace(&arr1[l_index], &arr1[r_index]); 
            l_index++; 
            r_index--; 
        } 
    } 
} 

int main() 
{ 
    int arr1[] = {17, 42, 19, 7, 27, 24, 30, 54, 73}; 
    int arr_size = sizeof(arr1) / sizeof(arr1[0]); 
    int i = 0; 

    // Print the original array
    printf("The given array is:  \n");
    for(i = 0; i < arr_size; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Segregate even and odd numbers
    EvenOddSegre(arr1, arr_size); 

    // Print the segregated array
    printf("The array after segregation is:  "); 
    for (i = 0; i < arr_size; i++) 
        printf("%d ", arr1[i]); 

    return 0; 
}  
