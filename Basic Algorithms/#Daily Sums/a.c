#include <stdio.h>
#include <stdlib.h>

void writeNums(int nums[], int size){
    for(int i = 0; i < size; i++){
        printf("[%d]", nums[i]);
    }
}

void moveZeros(int nums[], int size){
    int lastNum = 0;
    for(int i = 0; i < size; i++){
        if(nums[i] != 0){
            int temp = nums[lastNum];
            nums[lastNum] = nums[i];
            nums[i] = temp;
            lastNum++;
        }
    }
}

int main(){
    int nums[] = {1,3,0,1,0,2,3,0,0,0,9,5,4,0};
    int size = sizeof(nums)/ sizeof(nums[0]);

    moveZeros(nums, size);
    writeNums(nums, size);
    return 0;
}