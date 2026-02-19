#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    for(int i = 0; i <= target; i++){
        if(nums[i] == target){
            return i;
        }
        else if(nums[i] > target){
            return i;
        }
    }
}

int main(){
    int nums[] = {1,3,5,6}, target = 2;
    int size = sizeof(nums) / sizeof(nums[0]);
    int index = searchInsert(nums, size, target);

    printf("%d", index);
    return 0;
}