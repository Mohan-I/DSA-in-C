/*
136. Single Number
Solved- Easy

Hint
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/

#include <stdio.h>

int findSingle(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i]; // XOR all elements
    }
    return result; // Remaining value is the single number
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 2}; // 4 is the unique element
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Single number: %d", findSingle(arr, n));
    return 0;
}
