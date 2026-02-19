#include <stdio.h>

int bs(int arr[], int sz, int value){
    int low = 0;
    int high = sz - 1;

    while( low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == value){
            return mid;
        }

        if(arr[mid] < value){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    int nums[] = {12,13,24,27,35,38,49};
    int target = 12;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = bs(nums, size, target);

    if(result == -1){
        printf("\nElement Not found !\n");
    }else{
        printf("\nThe Target eas found at %d", result);
    }
    return 0;
}