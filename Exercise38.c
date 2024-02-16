// Write a program in C to merge one sorted array into another sorted array.

#include <stdio.h>

// Function to merge two sorted arrays into one sorted array
void merge2arrs(int *bgArr, int bgArrCtr, int *smlArr, int smlArrCtr) {
    // Check for invalid arrays
    if (bgArr == NULL || smlArr == NULL)
        return;

    // Initialize indices for arrays
    int bgArrIndex = bgArrCtr - 1,
        smlArrIndex = smlArrCtr - 1,
        mergedArrayIndex = bgArrCtr + smlArrCtr - 1;

    // Merge the arrays
    while (bgArrIndex >= 0 && smlArrIndex >= 0) {
        if (bgArr[bgArrIndex] >= smlArr[smlArrIndex]) {
            bgArr[mergedArrayIndex] = bgArr[bgArrIndex];
            mergedArrayIndex--;
            bgArrIndex--;
        } else {
            bgArr[mergedArrayIndex] = smlArr[smlArrIndex];
            mergedArrayIndex--;
            smlArrIndex--;
        }
    }

    // Copy remaining elements from the small array
    if (bgArrIndex < 0) {
        while (smlArrIndex >= 0) {
            bgArr[mergedArrayIndex] = smlArr[smlArrIndex];
            mergedArrayIndex--;
            smlArrIndex--;
        }
    } else if (smlArrIndex < 0) {
        // Copy remaining elements from the large array
        while (bgArrIndex >= 0) {
            bgArr[mergedArrayIndex] = bgArr[bgArrIndex];
            mergedArrayIndex--;
            bgArrIndex--;
        }
    }
}

// Main function
int main() {
    int bigArr[13] = {10, 12, 14, 16, 18, 20, 22};
    int smlArr[6] = {11, 13, 15, 17, 19, 21}; 
    int i;

    // Print the large array
    printf("The given Large Array is :  ");
    for (i = 0; i < 7; i++) {
        printf("%d  ", bigArr[i]);
    } 	
    printf("\n");

    // Print the small array
    printf("The given Small Array is :  ");
    for (i = 0; i < 6; i++) {
        printf("%d  ", smlArr[i]);
    } 	
    printf("\n");	

    // Merge the arrays and print the merged array
    merge2arrs(bigArr, 7, smlArr, 6);
    printf("After merging, the new Array is :\n");
    for (i = 0; i < 13; i++) {
        printf("%d ", bigArr[i]);
    }
    return 0;
}
