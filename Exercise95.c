// Write a program in C to segregate 0s and 1s in an array.

#include <stdio.h>

// Function to segregate 0s and 1s in an array
void segZeroAndOne(int arr1[], int n) 
{ 
    int ctr = 0; // Counter to keep track of 0s

    // Count the number of 0s in the array
    for (int i = 0; i < n; i++) { 
        if (arr1[i] == 0) 
            ctr++; 
    } 

    // Assign 0s to the first 'ctr' elements of the array
    for (int i = 0; i < ctr; i++) 
        arr1[i] = 0; 

    // Assign 1s to the remaining elements of the array
    for (int i = ctr; i < n; i++) 
        arr1[i] = 1; 
} 

// Function to print the segregated array
void printSegre(int arr1[], int n) 
{ 
    printf("The array after segregation is: "); 
    for (int i = 0; i < n; i++) 
        printf("%d  ", arr1[i]); 
} 

int main() 
{ 
    // Given input array
    int arr1[] = { 1, 0, 1, 0, 0, 1, 0, 1, 1 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
	int i;

    //------------- print original array ------------------	
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
	{
		printf("%d  ", arr1[i]); // Print the original array
	}
	printf("\n");
//-----------------------------------------------------------

    // Segregate 0s and 1s in the array
    segZeroAndOne(arr1, n); 
    // Print the segregated array
    printSegre(arr1, n); 

    return 0; 
}
