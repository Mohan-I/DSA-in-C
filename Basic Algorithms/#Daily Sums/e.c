#include <stdio.h>

int main(){
    int nums[] = {2,0,0,1,2,0,3,0,0,0,4,3,0,2,1,5,0,0,2,0,3,4,0,5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int lastNum = 0, i;

    while(nums[i] != 0){
        nums[lastNum++] = nums[i];
        nums[i] = 0;

        if(nums[i] == nums[size - 1]) break;
    }

    for(int i = 0; i < size; i++){
        printf("[%d]", nums[i]);
    }
    return 0;
}