#include <stdio.h>

int majorE(int * arr, int sz){
    int candidate = 0;
    int count = 0;

    for(int i = 0; i < sz; i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }

    return candidate;
}

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,1,0,7,1,7,7,7,7,1,2,1,7,7,7,7,7,7,7,7,3,1,4,1,5,16,1,7,1,8,1,9,7,7,2,0};
    int size = sizeof(nums) / sizeof(nums[0]);

    int mNum = majorE(nums, size);

    printf("%d", mNum);
    return 0;
}