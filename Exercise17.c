// Write a program in C to find the second smallest element in an array.

#include <stdio.h>

int main() {
    int arr1[50], n, i, j = 0, sml, sml2nd;

    // Prompt user for input
    printf("\n\nFind the second smallest element in an array :\n");
    printf("--------------------------------------------------\n");
    printf("Input the size of the array : ");
    scanf("%d", &n);

    // Input values for the array
    printf("Input %d elements in the array (value must be <9999) :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Find the location of the smallest element in the array
    sml = arr1[0];
    for (i = 0; i < n; i++) {
        if (sml > arr1[i]) {
            sml = arr1[i];
            j = i;
        }
    }

    // Ignore the smallest element and find the second smallest element in the array
    sml2nd = 99999;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;  // Ignore the smallest element
            i--;
        } else {
            if (sml2nd > arr1[i]) {
                sml2nd = arr1[i];
            }
        }
    }

    // Display the second smallest element
    printf("The Second smallest element in the array is :  %d \n\n", sml2nd);

    return 0;
}
