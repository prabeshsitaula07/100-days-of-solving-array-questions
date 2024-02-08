// Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>
int main(){
    int n, i;
    
    // take the value of n from user
    printf("Enter value of n: ");
    scanf("%d", &n);
    int array_element[n];
    
    // take the value of array element
    for(i=0; i<n; i++){
        printf("Enter value for array element[%d]: ", i+1);
        scanf("%d", &array_element[i]);
    }
    
    // display output
    printf("\nThe reversed array is:\n");
    for(i=n-1; i>=0; i--){
        printf("%d\t", array_element[i]);
    }

    return 0;
}