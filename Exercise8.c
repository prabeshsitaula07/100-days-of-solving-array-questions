// Write a program in C to count the frequency of each element of an array.

#include <stdio.h>
int main() {
    
    int n, i, j, count;
    // Take value of n from user
    printf("Number of array elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter value for array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("The frequency of all elements of an array:\n");
    for(i = 0; i < n; i++) {
        count = 1;
        // Skip if the element is already counted
        if(arr[i] == -1) continue;
        
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                // Mark the counted element to avoid recounting
                arr[j] = -1;
            }
        }
        // display output
        printf("Frequency of %d : %d\n", arr[i], count);
    }
    
    return 0;
}
