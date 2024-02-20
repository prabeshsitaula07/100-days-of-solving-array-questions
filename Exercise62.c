// Write a program in C to find the largest subarray with an equal number of 0s and 1s.

#include <stdio.h>
#include <limits.h>

// Function to find the largest subarray with an equal count of 0s and 1s
void findLrgSubArray(int *arr1, int arr_size) {
int i, j, sum = 0, lrgSize = INT_MIN, left;

    // Loop through the array to find the largest subarray
for (i = 0; i < arr_size - 1; i++) {
sum = arr1[i] ? 1 : -1; // Assigns a value based on the element (1 or -1)

        // Nested loop to calculate the sum for each subarray
for (j = i + 1; j < arr_size; j++) {
if (arr1[j] == 1)
sum += 1;
else
sum += -1;

            // Check if the sum is 0 and if the subarray size is the largest so far
if (sum == 0 && (lrgSize < j - i + 1)) {
lrgSize = j - i + 1;
left = i; // Store the starting index of the subarray
            }
        }
    }

    // Check if a subarray with equal 0s and 1s is found
if (lrgSize == INT_MIN) {
printf("No such subarray found from the given array.");
    } else {
printf("Subarray found from the index %d to %d", left, left + lrgSize - 1);
    }
}

int main() {
int i, arr1[] = {0, 1, 0, 0, 1, 1, 0, 1, 1, 1};
int n = sizeof(arr1) / sizeof(arr1[0]);

    //------------- print original array ------------------	
printf("The given array is :  ");
for (i = 0; i < n; i++) {
printf("%d  ", arr1[i]);
    }
printf("\n");
    //------------------------------------------------------

    // Find and display the largest subarray with an equal count of 0s and 1s
findLrgSubArray(arr1, n);
return 0;
}
