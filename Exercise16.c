// Write a program in C to find the second largest element in an array.

#include<stdio.h>

int main() {
    int arr1[50], n, i, j = 0, lrg, lrg2nd;

    // Prompt user for input
    printf("\n\nFind the second largest element in an array :\n");
    printf("-------------------------------------------------\n");
    printf("Input the size of the array : ");
    scanf("%d", &n);

    // Input values for the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Find the location of the largest element in the array
    lrg = 0;
    for (i = 0; i < n; i++) {
        if (lrg < arr1[i]) {
            lrg = arr1[i];
            j = i;
        }
    }

    // Ignore the largest element and find the second largest element in the array
    lrg2nd = 0;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;  // Ignore the largest element
            i--;
        } else {
            if (lrg2nd < arr1[i]) {
                lrg2nd = arr1[i];
            }
        }
    }

    // Display the second largest element
    printf("The Second largest element in the array is :  %d \n\n", lrg2nd);
    return 0;
}
