// Scout Builder Approach

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    // 'i' is the Builder. It tracks the index of the last unique element found.
    int i = 0; 

    // 'j' is the Scout. It explores the array starting from the second element.
    for (int j = 1; j < numsSize; j++) {
        // If the Scout finds a value different from our last unique element...
        if (nums[j] != nums[i]) {
            i++;             // Move the Builder to the next empty slot
            nums[i] = nums[j]; // The Builder writes the new unique value there
        }
    }

    // Since 'i' is an index, the total count of unique elements is i + 1
    return i + 1;
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Original array: ");
    for (int j = 0; j < size; j++) {
        printf("%d ", nums[j]);
    }

    // 1. Capture the 'k' (the number of unique elements)
    int k = removeDuplicates(nums, size);

    printf("\n\nNumber of uniques (k): %d\n", k);

    // 2. Only print up to 'k'. This is the "Slicing" the judge does!
    printf("Resulting array (first k elements): ");
    for (int j = 0; j < k; j++) {
        printf("%d ", nums[j]);
    }

    // 3. Optional: Print the "Junk" part to see what happened to the rest
    printf("\nFull array after modification: ");
    for (int j = 0; j < size; j++) {
        if (j == k) printf("| "); // Visual separator for the 'junk'
        printf("%d ", nums[j]);
    }

    return 0;
}