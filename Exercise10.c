// Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
int main(){
    int n, i, j;
    
    // take value of n from user
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    int array[n];
    for(i=0; i<n; i++){
        printf("Enter the value of array element %d: ", i+1);
        scanf("%d", &array[i]);
        
    }
    
    int odd_count, odd_array[n], o =0;
    int even_count, even_array[n], e=0;
    for(i=0; i<n; i++){
        if(array[i] % 2 == 0){
        even_array[e] = array[i];
        e++;
        even_count = e;
        }
        else{
        odd_array[o] = array[i];
        o++;
        odd_count = o;
        }
    }
    
    // display output
    printf("Even array: \n[\t");
    for(e=0; e<even_count; e++){
        printf("%d\t", even_array[e]);
    }
    printf("]");
    
    printf("\nOdd array: \n[\t");
    for(o=0; o<odd_count; o++){
        printf("%d\t", odd_array[o]);
    }
    printf("]");
    
    return 0;
}