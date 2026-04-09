#include <stdio.h>
#include <stdlib.h>

void moveZeros(int nums[], int sz){
    int lastNonZero = 0;

    // Phase 1: Move all non-zero elements to the front
    for (int i = 0; i < sz; i++) {
        if (nums[i] != 0) {
            // Swap the current non-zero element with the element at lastNonZero
            int temp = nums[i];
            nums[i] = nums[lastNonZero];
            nums[lastNonZero] = temp;
            
            printf("%d -> %d \n", nums[i], nums[lastNonZero]);

            lastNonZero++;

        }
    }
}

void printNums(int arr[], int sz){
    
}

int main(){
    int nums[] = {1,0,3,0,4,0,0,1,2};
    int size = sizeof(nums) / sizeof(nums[0]);

    moveZeros(nums, size);

    for(int i = 0; i < size; i++){
        printf("[%d]", nums[i]);
    }

    return 0;
}