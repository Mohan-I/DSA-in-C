#include <stdio.h>

void shiftLeft(int arr[], int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}


int main(){
    int nums[] = {2,4,6,8,0,1,3,5};
    int size = sizeof(nums)/sizeof(nums[0]);

    shiftLeft(nums, size);

    for(int i = 0; i < size; i++){
        printf("[%d]",nums[i]);
    }

    return 0;
}