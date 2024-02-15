// Write a program in C to find the sum of all elements of the array.

#include<stdio.h>
int main(){
    int i, n;
    
    // take the value of n from user
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    // take the value of array element
    int array_element[n];
    for(i=0; i<n; i++){
        printf("Enter value for array element[%d]: ", i+1);
        scanf("%d", &array_element[i]);
    }
    
    int sum=0;
    for(i=0; i<n; i++){
        sum = sum + array_element[i];
    }
    
    // display output
    printf("The sum of array elements is : %d", sum);
    return 0;
}