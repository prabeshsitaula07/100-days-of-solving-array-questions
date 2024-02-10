// Write a program in C to find the maximum and minimum elements in an array
#include<stdio.h>
int main(){
    int n, i, j;
    
    // take valur of n from user
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    // initialize size of array
    int array[n];
    for(i=0; i<n; i++){
        printf("Enter value for array element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    // initialize variable temp
    int temp;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(array[i]<array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    // display output
    printf("Maximum element of array: %d\n", array[0]);
    printf("Minimum element of array: %d", array[n-1]);
}