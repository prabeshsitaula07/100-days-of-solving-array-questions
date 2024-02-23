// Write a program in C to find two numbers that occur an odd number of times in an array

#include <stdio.h>

// Function to find two numbers occurring odd number of times in an array
void TwoNumberOddOccure(int arr1[], int arr_size) {
int xor2 = arr1[0]; // Initialize xor2 with the first element of the array
int setbitno; // Variable to store the set bit number
int i;
int n = arr_size - 2; // Variable to store the size of the array - 2
int num1 = 0, num2 = 0; // Variables to store the two numbers occurring odd number of times

    // Calculate XOR of all elements in the array
for (i = 1; i < arr_size; i++)
        xor2 = xor2 ^ arr1[i];

    // Find the rightmost set bit in xor2
setbitno = xor2 & ~(xor2 - 1);

    // Traverse the array again and divide elements into two groups based on the rightmost set bit
for (i = 0; i < arr_size; i++) {
if (arr1[i] & setbitno)
            num1 = num1 ^ arr1[i]; // XOR operation to find first number
else
            num2 = num2 ^ arr1[i]; // XOR operation to find second number
    }

    // Print the two numbers occurring odd number of times
printf("The two numbers occuring odd number of times are: %d & %d ", num1, num2);
}

int main() {
int arr1[] = {6, 7, 3, 6, 8, 7, 6, 8, 3, 3};
int arr_size = sizeof(arr1) / sizeof(arr1[0]);
int i;  

    // Print the original array
printf("The given array is :  ");
for (i = 0; i < arr_size; i++) {
printf("%d  ", arr1[i]);
    } 
printf("\n");

    // Find and print two numbers occurring odd number of times
TwoNumberOddOccure(arr1, arr_size);
return 0;
}
