#include <stdio.h>
#include <limits.h> // Required for INT_MIN

// Function to find the maximum of two integers (C does not have a built-in max function for ints)
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum contiguous subarray sum
int maxSubArraySum(int arr[], int size) {
    // Initialize max_so_far with the smallest possible integer value
    int max_so_far = INT_MIN;
    // Initialize max_ending_here to 0
    int max_ending_here = 0;
    
    // Traverse the array from left to right
    for (int i = 0; i < size; i++) {
        // Add the current element to max_ending_here
        max_ending_here += arr[i];
        
        // If max_ending_here is greater than max_so_far, update max_so_far
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
        
        // If max_ending_here becomes negative, reset it to 0
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    
    return max_so_far;
}

// Driver code
int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, n);
    printf("Maximum contiguous sum is %d\n", max_sum);
    return 0;
}
// 
