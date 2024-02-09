// Write a program in C to copy the elements of one array into another array.
#include <stdio.h>

int main() {
    int n;
    
    // Take value of n from user
    printf("Number of array elements: ");
    scanf("%d", &n);
    
    int i, orginal_array[n], duplicate_array[n];
    for(i=0; i<n; i++){
        printf("Enter value for array element[%d]: ", i+1);
        scanf("%d", &orginal_array[i]);
        
        // duplicate array
        duplicate_array[i] = orginal_array[i];
    }
    
    // display output
    printf("The duplicated array is: [\t");
    for(i=0; i<n; i++){
        printf("%d\t", duplicate_array[i]);
    }
    printf("]");
    return 0;
}