// Write a program in C where the element in given index is to be added
#include <stdio.h>

int main() {
    int n;

    // Prompting the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n]; // Creating an array of size n

    // Prompting the user to enter values for each element of the array
    for (int i = 0; i < n; i++) {
        printf("Enter value for array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the elements of the array
    printf("\nArray element is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Adding a value at a specific index
    int index, value;
    printf("\nEnter the index whose value is to be added: ");
    scanf("%d", &index);

    if (index < 0 || index > n) {
        printf("Invalid index.\n");
        return 1;
    }

    printf("Enter value for index %d: ", index);
    scanf("%d", &value);

    // Shifting elements to make space for the new value
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    n++; // Increasing the size of the array

    // Printing the updated array
    printf("New array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
