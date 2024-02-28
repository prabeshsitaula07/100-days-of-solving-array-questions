// An unsorted array of a specific size is given. Write a program in C to find the minimum length of a subarray such that sorting this subarray makes the whole array sorted.

#include<stdio.h>

// Function to find the minimum length of an unsorted subarray
void findUnsortedSubArr (int arr1[], int arr_size) 
{ 
  int m = 0, en = arr_size-1, i, max, min;    

  // Finding the leftmost index where the unsorted part begins
  for (m = 0; m < arr_size-1; m++) 
  { 
    if (arr1[m] > arr1[m+1]) 
      break; 
  } 

  // If the array is already sorted, print it and return
  if (m == arr_size-1) 
  { 
    printf("The given array is sorted."); 
    return; 
  } 

  // Finding the rightmost index where the unsorted part ends
  for(en = arr_size - 1; en > 0; en--) 
  { 
    if(arr1[en] < arr1[en-1]) 
      break; 
  } 

  // Finding the maximum and minimum elements within the unsorted subarray
  max = arr1[m]; 
  min = arr1[m]; 
  for(i = m + 1; i <= en; i++) 
  { 
    if(arr1[i] > max) 
      max = arr1[i]; 
    if(arr1[i] < min) 
      min = arr1[i]; 
  } 

  // Adjusting the left index of the unsorted subarray
  for(i = 0; i < m; i++) 
  { 
    if(arr1[i] > min) 
    {   
      m = i; 
      break; 
    }       
  }  

  // Adjusting the right index of the unsorted subarray
  for(i = arr_size - 1; i >= en+1; i--) 
  { 
    if(arr1[i] < max) 
    { 
      en = i; 
      break; 
    }  
  } 

  // Printing the indices of the unsorted subarray
  printf("The minimum length of unsorted subarray which makes the given array sorted ");
  printf("\nlies between the indices %d and %d", m, en); 
  return; 
} 

// Main function
int main() 
{ 
  int arr1[] = {10, 12, 15, 17, 28, 32, 42, 18, 56, 59, 67}; 
  int arr_size = sizeof(arr1)/sizeof(arr1[0]); 
  int i;

  // Printing the original array
  printf("The given array is:  \n");
  for(i = 0; i < arr_size; i++)
  {
    printf("%d  ", arr1[i]);
  }
  printf("\n");

  // Calling the function to find the unsorted subarray
  findUnsortedSubArr(arr1, arr_size); 
  return 0; 
}
