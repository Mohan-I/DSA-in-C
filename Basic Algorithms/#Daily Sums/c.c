#include <stdio.h>

void ascendNum(int n1, int n2){
    if(n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = n1;
    }
}

void divideNum(int nums[], int low, int high){
    int low = 0;
    int high = size - 1;
        if(low < high){
        int mid = low + (high - low) / 2;
        divideNum(nums, low, mid);
        divideNum(nums, mid + 1; high);
    }
}

void writeNum(int arr[], int sz){
    for(int i=0; i <sz; i++){
        printf("[%d]",arr[i]);
    }
}

int main(){
    int nums[] = {22,23,42,53,36,73,84,69,39,49,59,96,97,49,29,34,45,64};
    int size = sizeof(nums) / sizeof(nums[0]);

    writeNum(nums, size);
    divideNum(nums, size);
    writeNum(nums, size);


    return 0;
}