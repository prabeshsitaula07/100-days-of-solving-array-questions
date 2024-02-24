// Write a program in C to find the largest number possible from the set of given numbers.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Comparison function for qsort to sort strings in a specific order to form the largest number
int compare(const void *a, const void *b) {
    const char **X = (const char **)a;
    const char **Y = (const char **)b;

    // Determine the combined lengths of strings a and b, plus 1 for null terminator
    int chr_len = strlen(*X) + strlen(*Y) + 1;

    // Concatenate strings a and b in one order
    char XY[chr_len];
    strcpy(XY, *X);
    strcat(XY, *Y);

    // Concatenate strings b and a in another order
    char YX[chr_len];
    strcpy(YX, *Y);
    strcat(YX, *X);

    // Compare the concatenated strings to sort in descending order
    return strcmp(YX, XY);
}

int main(void) {
    // Array of strings
    char *arr1[] = { "15", "628", "971", "9", "2143", "12" };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    // Print original array
    printf("The given numbers are :  \n");
    for (i = 0; i < n; i++) {
        printf("%s  ", arr1[i]);
    }
    printf("\n");

    // Sort the array using qsort with custom comparison function
    qsort(arr1, n, sizeof(arr1[0]), compare);

    // Print the largest possible number formed by the given numbers
    printf("The largest possible number by the given numbers are: ");
    for (int i = 0; i < n; i++) {
        printf("%s", arr1[i]);
    }
    return 0;
}
