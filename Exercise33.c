// Write a program in C to find the majority element of an array.

#include <stdio.h>

// Function to find the majority element in an array
void findMajElem(int *arr1, int n) {
    int i, IndexOfMajElem = 0, ctr = 1;

    // Finding the candidate for the majority element
    for (i = 1; i < n; i++) {
        if (arr1[IndexOfMajElem] == arr1[i])
            ctr++;
        else
            ctr--;

        if (ctr == 0) {
            IndexOfMajElem = i;
            ctr = 1;
        }
    }

    ctr = 0;
    // Count occurrences of the candidate to confirm it as a majority element
    for (i = 0; i < n; i++) {
        if (arr1[i] == arr1[IndexOfMajElem])
            ctr++; 
    }

    // Checking if the candidate element occurs more than n/2 times
    if (ctr > (n / 2))
        printf("Majority Element : %d\n", arr1[IndexOfMajElem]);
    else
        printf("There are no Majority Elements in the given array.\n");
}

// Main function
int main() {
    int i, ctr;
    int arr1[] = { 4, 8, 4, 6, 7, 4, 4, 8 };
    ctr = sizeof(arr1) / sizeof(arr1[0]);

    // Display the given array
    printf("The given array is :  ");
    for (i = 0; i < ctr; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Function call to find the majority element
    findMajElem(arr1, ctr);

    return 0;
}
