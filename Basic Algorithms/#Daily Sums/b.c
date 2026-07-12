#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 5, 7, 0, 0, 0};
    int arr2[] = {3, 5, 8};

    int m = 4; // Number of valid elements in arr1
    int n = 3; // Number of elements in arr2

    int i = m - 1;     // Pointer to last valid element in arr1
    int j = n - 1;     // Pointer to last element in arr2
    int k = m + n - 1; // Pointer to last slot of arr1

    // Merge backwards
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in arr2, copy them
    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }

    // Print results
    int totalSize = m + n;
    for (int p = 0; p < totalSize; p++) {
        printf("[%d]", arr1[p]);
    }

    return 0;
}
