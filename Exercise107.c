// Write a program in C to concatenate two given arrays of integers.
// If this is as simple as array1 + array2, so be it.

// Sample Data:
// ({ 10, 20, 30, 40, 50, 60 }, { 70, 80, 90, 100, 110, 120 }) -> "10 20 30 40 50 60 70 80 90 100 110 120"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Macro to concatenate arrays of any type
#define CONCAT_ARRAY(TYPE, A, An, B, Bn) \
  (TYPE *)concatenateArrays((const void *)(A), (An), (const void *)(B), (Bn), sizeof(TYPE));

// Function to concatenate arrays
void *concatenateArrays(const void *a, size_t an,
                        const void *b, size_t bn, size_t s)
{
  // Allocate memory for the concatenated array
  char *p = malloc(s * (an + bn));

  // Copy elements from first array to concatenated array
  memcpy(p, a, an * s);

  // Copy elements from second array to concatenated array after the first array's elements
  memcpy(p + an * s, b, bn * s);

  // Return pointer to the concatenated array
  return p;
}

// Sample arrays
const int x[] = { 10, 20, 30, 40, 50, 60 };
const int y[] = { 70, 80, 90, 100, 110, 120 };

int main(void)
{
  unsigned int i;

  // Concatenate arrays x and y
  int *z = CONCAT_ARRAY(int, x, 6, y, 6);

  // Display original arrays
  printf("Original arrays:\n");
  printf("Array-1:\n");
  for(int i = 0; i < 6; i++)
    printf("%d ", x[i]);
  printf("\nArray-2:\n");
  for(i = 0; i < 6; i++)
    printf("%d ", y[i]); 

  // Display concatenated array
  printf("\nConcatenate above arrays:\n");
  for(i = 0; i < 12; i++)
    printf("%d ", z[i]);

  free(z); // Free dynamically allocated memory for concatenated array
  return 0;
}
