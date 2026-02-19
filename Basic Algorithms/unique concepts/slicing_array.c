#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Required for memcpy

int* slice_array_copy(const int* original, int start_index, int end_index) {
    // Calculate the size of the slice (end_index is exclusive, like in other languages' slice methods)
    int slice_size = end_index - start_index;

    if (slice_size <= 0) {
        return NULL; // Return NULL for an invalid slice range
    }

    // Allocate memory for the new array
    // (end_index is exclusive, so the size is correct)
    int* new_array = (int*)malloc(slice_size * sizeof(int));

    if (new_array == NULL) {
        // Handle memory allocation error
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Copy elements from the original to the new array
    memcpy(new_array, original + start_index, slice_size * sizeof(int));

    return new_array;
}

int main() {
    int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Calculate the total number of elements in the original array
    int originalSize = sizeof(originalArray) / sizeof(originalArray[0]);

    // Slice from index 2 up to (but not including) index 7 -> elements 3, 4, 5, 6, 7
    int* sliced = slice_array_copy(originalArray, 2, 7);
    int slicedSize = 7 - 2;

    if (sliced != NULL) {
        printf("Sliced array: ");
        for (int i = 0; i < slicedSize; ++i) {
            printf("%d ", sliced[i]);
        }
        printf("\\n");

        // Free the allocated memory after use
        free(sliced);
    }

    return 0;
}
