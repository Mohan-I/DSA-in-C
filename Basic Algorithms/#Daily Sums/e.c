#include <stdio.h>
#include <stdlib.h>

int findLargest(int sz, int div, int arr[]){
    if(div > sz) return 0;
    int maxSum = 0, currentSum = maxSum;
    for(int j = 0; j < sz; j++){
        maxSum = 0;
        for(int i = j; i < div; i++){
            maxSum += arr[i];
        }
        if(maxSum > currentSum){
            currentSum = maxSum;
        }
    }

    printf("%d", currentSum);
    
}

int main(){
    int nums[] = {1,2,3,0,9,1,1};
    int size = sizeof(nums) /sizeof(nums[0]);
    int div = 3;

    findLargest(size, div, nums);

    return 0;
}