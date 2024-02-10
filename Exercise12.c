// Write a program in C to sort the elements of the array in descending order.
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
    printf("[\t");
    for(i=0; i<n; i++){
        printf("%d\t", array[i]);
        
    }
    printf("]");

    return 0;
}