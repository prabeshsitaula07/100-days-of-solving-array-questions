// Write a program in C to find the largest square sub-matrix with all 1s.

// C/C++ code for Maximum size square sub-matrix with all 1s 
#include<stdio.h>

#define bool int 
#define row 6 
#define col 5 

// Function to find minimum of three integers
int min(int a, int b, int c) 
{ 
    int m = a; 
    if (m > b)  
        m = b; 
    if (m > c)  
        m = c; 
    return m; 
} 

// Function to find maximum size square sub-matrix with all 1s
void squreSubarrayOfOnes (bool arr1[row][col]) 
{ 
    int i,j; 
    int sub_arr[row][col]; 
    int max_s, mx_i, mx_j;  

    // Fill the first row and first column of sub_arr matrix
    for(i = 0; i < row; i++) 
        sub_arr[i][0] = arr1[i][0]; 

    for(j = 0; j < col; j++) 
        sub_arr[0][j] = arr1[0][j]; 

    // Construct sub_arr[][] matrix
    for(i = 1; i < row; i++) 
    { 
        for(j = 1; j < col; j++) 
        { 
            if(arr1[i][j] == 1)  
                sub_arr[i][j] = min(sub_arr[i][j-1], sub_arr[i-1][j], sub_arr[i-1][j-1]) + 1; 
            else
                sub_arr[i][j] = 0; 
        }     
    }  

    // Find the maximum size sub-matrix and its position
    max_s = sub_arr[0][0]; 
    mx_i = 0; 
    mx_j = 0; 
    for(i = 0; i < row; i++) 
    { 
        for(j = 0; j < col; j++) 
        { 
            if(max_s < sub_arr[i][j]) 
            { 
                max_s = sub_arr[i][j]; 
                mx_i = i;  
                mx_j = j; 
            }         
        }                  
    }      

    // Print the maximum size sub-matrix
    printf("The maximum size sub-matrix is: \n"); 
    for(i = mx_i; i > mx_i - max_s; i--) 
    { 
        for(j = mx_j; j > mx_j - max_s; j--) 
        { 
            printf("%d ", arr1[i][j]); 
        }   
        printf("\n"); 
    }   
}      

int main() 
{ 
    // Input array
    bool arr1[row][col] = {{0, 1, 0, 1, 1},  
                            {1, 1, 1, 1, 0},  
                            {1, 1, 1, 1, 0}, 
                            {1, 1, 1, 1, 0}, 
                            {1, 1, 1, 1, 1}, 
                            {0, 1, 0, 1, 0}}; 
    int i,j;                   

    // Print the original array in matrix form
    printf("The given array in matrix form is :  \n");
    for(i = 0; i < row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d  ", arr1[i][j]);
        } 
        printf("\n");
    }

    // Find the maximum size sub-matrix with all 1s
    squreSubarrayOfOnes(arr1); 
}
