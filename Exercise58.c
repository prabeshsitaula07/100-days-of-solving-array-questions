// Write a program in C to move all zeroes to the end of a given array.

#include <stdio.h>

// Function to segregate zeros in an array to the right side
void PickOutZeros(int *arr1, int arr_size) {
    int tmp, lft = 0, rgt = arr_size - 1;

    // Loop until the pointers meet or cross each other
    while (rgt > lft) {
        // Move the left pointer until a non-zero element is found
        while (arr1[lft] != 0)
            lft++;

        // Move the right pointer until a non-zero element is found
        while (arr1[rgt] == 0)
            rgt--;

        // Swap the non-zero elements at the left and right pointers if left is less than right
        if (lft < rgt) {
            tmp = arr1[lft];
            arr1[lft] = arr1[rgt];
            arr1[rgt] = tmp;
        }
    }
}

int main() {
    int arr1[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    //------------- print original array ------------------
    printf("The given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    } 
    printf("\n");
    //------------------------------------------------------ 

    // Function call to segregate zeros to the right side
    PickOutZeros(arr1, n);

    // Printing the new array after segregating zeros
    printf("The new array is: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
