#include <stdio.h>

void insSort(int arr[], int sz){
    int i, key, j;
    for(int i = 1 ; i < sz; i++){
        key = arr[i];
        j = i - 1;

        while( j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void writeNum(int arr[], int sz){
    printf("\n");
    for(int i = 0; i < sz; i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

int main(){
    int nums[] = {29,34,40,10,30,42,32,34,23,22,23,43};
    int size = sizeof(nums) / sizeof(nums[0]);

    writeNum(nums, size);
    insSort(nums, size);
    writeNum(nums, size);

    return 0;
}