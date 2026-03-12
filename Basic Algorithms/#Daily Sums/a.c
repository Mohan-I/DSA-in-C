#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target ){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;
}

void writeNums(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        printf("[%d]",arr[i]);
    }
}

int main(){
    int nums[] = {11,21,31,41,51,61,71,81,91,101,111,112,113,114,115,116,117,118};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 31;

    writeNums(nums, size);
    int index = binarySearch(nums, size, target);

    printf("\n The Element was found at index : %d", index);
    return 0;
}