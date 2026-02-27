/*
35. Search Insert Position
Attempted - Easy

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104


My Methodology after solving it for 45 minutes

int searchInsert(int* nums, int numsSize, int target) {
    int a = 0;
    if(nums[0] > target){
        a = 0;
    }
    else{
    for(int i = 0; i < numsSize; i++){
        if(target == 0) a = 0;
        if(nums[i] < 0){
            a++;
        }
        else if(nums[i] == target){
            a = i;
            return a;
        }
        else if(nums[i] < target){
            a = i + 1;
        }
    }
    }

    return a;
}

It passes the test cases on positive nums but is struggling with negative numbers because logic treats them as a special case (if(nums[i] < 0) a++) rather than just another number in the sorted sequence.
But there is a bigger "red flag" here: the problem explicitly requires `O(log n)` runtime complexity. The current for loop is `O(n)`, which means it scans every single number. 
For LeetCode, even if you fix the negative number logic, an `O(n)` solution is technically "incorrect" based on the constraints.
*/ 

int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while(low <= high){
        int mid = low + (high - low)/ 2;

        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}