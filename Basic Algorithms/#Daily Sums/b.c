#include <stdio.h>

// Two Sum in C for O(n) solution

void cal2Sum(int arr[], int total , int sz){
    int left = 0;
    int right = sz -1;

    while(left <= right){
        if(arr[left] + arr[right] == total){
            printf("[%d,%d] ", arr[left], arr[right]);
        }
        left++;
        right--;
    }
}

int main(){
    int nums [] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 11;

    int size = sizeof(nums) / sizeof(nums[0]);

    cal2Sum(nums, sum, size);
    return 0;
}