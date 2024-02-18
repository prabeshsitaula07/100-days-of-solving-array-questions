// Write a program in C to find the number of times a given number appears in an array.

#include <stdio.h>

// Function for binary search to find the first or last occurrence of a given element
int BinSearch(int arr1[], int n, int x, int searchFirst) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (x == arr1[mid]) {
            result = mid;
            // Search for first occurrence of x
            if (searchFirst)
                high = mid - 1;
            else // Search for last occurrence of x
                low = mid + 1;
        } else if (x < arr1[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return result;
}

int main(void) {
    int arr1[] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7};
    int srch_num = 4; // Element to search
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;
    //------------- print original array ------------------
    printf("The given array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //------------------------------------------------------

    // Find the first and last occurrences of srch_num in the array
    int first = BinSearch(arr1, n, srch_num, 1);
    int last = BinSearch(arr1, n, srch_num, 0);
    int ctr = last - first + 1; // Calculate the count of occurrences

    if (first != -1)
        printf("The number of times the number %d occurs in the given array is: %d", srch_num, ctr);
    else
        printf("No such element found in the array.");

    return 0;
}
