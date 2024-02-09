// Write a program in C to copy the elements of one array into another array.
#include <stdio.h>
int main() {
    int n;
    
    // Take value of n from user
    printf("Number of array elements: ");
    scanf("%d", &n);
    
    int i, j, array[n];
    for(i=0; i<n; i++){
        printf("Enter value for array element[%d]: ", i+1);
        scanf("%d", &array[i]);
    }
    
    int count=0; // initialize the count of duplicate array element
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(array[i] == array[j]){
                count++;
                break;
            }
        }
    }
    
    // display output
    printf("The number of duplicate array_element is: %d", count);
    return 0;
}