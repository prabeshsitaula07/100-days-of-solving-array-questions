// Write a program in C to find the majority element of an array.

# include <stdio.h>

// Function to find the majority element in the array
void findMajorityElement(int *arr1, int arr_size) 
{
    int i, mIndex = 0, ctr = 1;

    // Finding the potential majority element
    for(i = 1; i < arr_size; i++) 
    {
        if(arr1[mIndex] == arr1[i])
            ctr++;
        else
            ctr--;

        // Reset the candidate majority element when the counter reaches 0
        if(ctr == 0) 
        {
            mIndex = i;
            ctr = 1;
        }
    }

    ctr = 0;
    // Count the frequency of the potential majority element
    for (i = 0; i < arr_size; i++) 
    {
        if(arr1[i] == arr1[mIndex])
            ctr++; 
    }

    // Check if the frequency of the potential majority element is greater than arr_size/2
    if(ctr > (arr_size/2))
        printf("The majority of the Element : %d\n", arr1[mIndex]);
    else
        printf("No majority element found in the array.\n");
}

int main()
{
    int i;
    int arr1[] = {1, 3, 3, 7, 4, 3, 2, 3, 3};
    int ctr = sizeof(arr1) / sizeof(arr1[0]);	

    // Print the given array
    printf("The given array is :  ");
    for(i = 0; i < ctr; i++)
    {
        printf("%d  ", arr1[i]);
    } 
    printf("\n");

    // Find the majority element in the array
    findMajorityElement(arr1, ctr);
    return 0;
}
