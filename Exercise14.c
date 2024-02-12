// Write a program in C to insert the values in the array (sorted list).

#include <stdio.h>

int main()
{
    int arr1[100], i, n, p, inval;

    // Prompt user for input
    printf("\n\nInsert New value in the sorted array:\n");
    printf("-----------------------------------------\n");
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Input the value to be inserted
    printf("Input the value to be inserted : ");
    scanf("%d", &inval);

    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    // Determine the position where the new value will be inserted
    for (i = 0; i < n; i++)
    {
        if (inval < arr1[i])
        {
            p = i;
            break;
        }
        else
        {
            p = i + 1;
        }
    }

    // Move all data at the right side of the array to make space
    for (i = n + 1; i >= p; i--)
        arr1[i] = arr1[i - 1];

    // Insert the new value at the proper position
    arr1[p] = inval;

    // Display the array after insertion
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <= n; i++)
        printf("% 5d", arr1[i]);
    printf("\n");

    return 0;
}
