// Write a program in C to store elements in an array and print them.

#include <stdio.h>
int main()
{
    int array_element[10];
    int i;

    //  request user to give input
    printf("Enter 10 array elements: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array_element[i]);
    }

    //  display output
    printf("Array elements are: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", array_element[i]);
    }
}