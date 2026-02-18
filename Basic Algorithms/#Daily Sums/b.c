#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    while( target != nums[i]){
        if(nums[i] == target) return i;
        i++;
    }

    if(nums[i] != target){
        target--;
    }
};

int main(){
    int nums = [1,3,5,6], target = 5;
    int size = sizeof(nums) / sizeof(nums[0]);
    int a = searchInsert(nums[],size,target);

    printf("%d", a);

    return 0;
}