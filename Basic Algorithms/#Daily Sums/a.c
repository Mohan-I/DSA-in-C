/*
53. Maximum Subarray

Solved - Medium

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/ 

#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int maxSubarray(int nums[]){

    int size = sizeof(nums)/sizeof(nums[0]);
    int current = 0, mx_sum = 0, left = 0, right = 0;

    for(int i = right; i <= size - left; i++ ){
        for(int j = left)
    }
}

int main(){
    int nums[20], n = 0, i = 0;

    while( scanf("%d", &n) != '\0'){
        nums[i++] = n;
    }

    int ans = maxSubarray(nums);
}