// Write a program in C to merge two arrays and sorted in descending order.

#include<stdio.h>
int main(){
    
    int n1;  // number of array elements for first array
    printf("Number of array element for first array: ");
    scanf("%d", &n1);
    int i, first_array_element[n1];
    for(i=0; i<n1; i++){
        printf("Enter value for array element[%d]: ", i+1);
        scanf("%d", &first_array_element[i]);
    }
    
    int n2;  // number of array elements for second array
    printf("Number of array element for second array: ");
    scanf("%d", &n2);
    
    int n = n1+n2;
    int j, merged_array[n];
    
    int second_array_element[n2];
    for(i=0; i<n2; i++){
        printf("Enter value for array element[%d]: ", i+1);
        scanf("%d", &second_array_element[i]);
        merged_array[i] = second_array_element[i];
    }
    
    int k=0;
    for(j=n2; j<n; j++){
        merged_array[j] = first_array_element[k];
        k = k+1;
    }
    
    int temp;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(merged_array[i] < merged_array[j]){
                temp = merged_array[j];
                merged_array[j] = merged_array[i];
                merged_array[i] = temp;
            }
        }
    }
    
    // display output
    printf("Merged array\n");
    for(i=0; i<n; i++){
        printf("%d\t", merged_array[i]);
    }

    return 0;   
}