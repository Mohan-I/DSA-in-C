    // int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};  v - 2

    #include <stdio.h>

    int remEl(int* nums, int target, int sizeA){
        int k = 0 ;
        for(int i = 0; i < sizeA; i++){
            
        if( nums[i] != target){
            nums[k] = nums[i];
            k++;
        }
        }

        return k;
    };

    int main(){
        int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
        int val = 2;
        int size = sizeof(nums) / sizeof(nums[0]);

        int numsSize = remEl(nums, val, size);

        printf("New Size of Array: %d \n", numsSize);
        for(int i = 0; i < numsSize; i++){
            printf("[%d]", nums[i]);
        }
    }