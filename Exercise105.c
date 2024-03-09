// Write a program in C to find the minimum number of swaps required to gather all elements less than or equal to k.

#include<stdio.h>

// Function to find the minimum number of swaps required to bring elements less than or equal to 'k' together
int minSwap(int *arr1, int n, int k) 
{ 
    int ctr = 0; 

    // Count elements less than or equal to 'k' in the array
    for (int i = 0; i < n; ++i) 
        if (arr1[i] <= k) 
            ++ctr; 

    int gelem = 0; 

    // Count elements greater than 'k' within the first 'ctr' elements
    for (int i = 0; i < ctr; ++i) 
        if (arr1[i] > k) 
            ++gelem; 

    int noswp = gelem; 

    // Move the window of size 'ctr' through the array and count the number of elements greater than 'k' to minimize swaps
    for (int i = 0, j = ctr; j < n; ++i, ++j) 
	{ 
        if (arr1[i] > k)
        {
            --gelem; 
        }
        if (arr1[j] > k)
        {
            ++gelem; 
        }
    }

    // Update the minimum swaps required
    if(noswp > gelem)
    {
        noswp = gelem;
    }
    if(noswp < gelem)
    {
        noswp = noswp;
    }            
    return noswp; 
} 

// Main function
int main() 
{ 
    int arr1[] = {2, 7, 9, 5, 8, 7, 4}; // Given array
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
    int k = 7; // Given 'k' value for comparison
    int i = 0; 

    // Display the given array
    printf("The given array is:  \n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    // Calculate and display the minimum swaps required to bring elements less than or equal to 'k' together
    printf("The minimum swap required is: %d", minSwap(arr1, n, k)); 
    return 0; 
}
