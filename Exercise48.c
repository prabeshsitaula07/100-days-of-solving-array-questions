// Write a program in C to find out if a given integer x appears more than n/2 times in a sorted array of n integers

# include <stdio.h>
# include <stdbool.h>

// Function to check if 'x' appears more than n/2 times in arr1[]
bool ChkMajority(int arr1[], int arr_size, int x)
{
    int i;
    // Check if the last index is even or odd to decide the range
    int last_index = arr_size % 2 ? (arr_size / 2 + 1) : (arr_size / 2);
    for (i = 0; i < last_index; i++)
    {
        // Check if the element at current index and the corresponding element after mid point equals 'x'
        if (arr1[i] == x && arr1[i + arr_size / 2] == x)
            return true; // Return true if 'x' appears more than n/2 times
    }
    return false; // Return false if 'x' does not appear more than n/2 times
}

int main()
{
    int arr1[] = {1, 3, 3, 5, 4, 3, 2, 3, 3};
    int arr_size = sizeof(arr1) / sizeof(arr1[0]);
    int x = 3, i;

    // Print the given array
    printf("The given array is :  ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    printf("The given value is :  %d\n", x);

    // Check if 'x' appears more than n/2 times in the array
    if (ChkMajority(arr1, arr_size, x))
        printf("%d appears more than %d times in the given array[]", x, arr_size / 2);
    else
        printf("%d does not appear more than %d times in the given array[]", x, arr_size / 2);

    return 0;
}
