// Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i].

#include <stdio.h>

void productOfArray(int arr1[], int n) {
    // Arrays to store left and right products of elements
int l_arr[n], r_arr[n], product[n];
int i, j;

    // Initialize the left-most element of left product array
    l_arr[0] = 1;

    // Initialize the right-most element of right product array
    r_arr[n - 1] = 1;

    // Calculate the left product of each element in the array
for (i = 1; i < n; i++)
        l_arr[i] = arr1[i - 1] * l_arr[i - 1];

    // Calculate the right product of each element in the array
for (j = n - 2; j >= 0; j--)
        r_arr[j] = arr1[j + 1] * r_arr[j + 1];

    // Calculate the final product array by multiplying left and right products
for (i = 0; i < n; i++)
product[i] = l_arr[i] * r_arr[i];

    // Print the product array
for (i = 0; i < n; i++)
printf("%d ", product[i]);
}

int main() {
int arr1[] = {1, 2, 3, 4, 5, 6};
int n = sizeof(arr1) / sizeof(arr1[0]);
int i;

    // Print original array
printf("The given array is :  ");
for (i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    } 
printf("\n");

    // Calculate and print the product array
printf("The product array is: ");
productOfArray(arr1, n);
return 0;
}
