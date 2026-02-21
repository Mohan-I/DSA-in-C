#include <stdio.h>

int insSort(int arr[], int sz){
    int i, key, j;
    for(int i = 1; i < sz; i++){
        key = arr[i];
        j = i - 1;

        while( j >= 0 && arr[j] > key){
            arr[j] = key;
            j = j - 1;
        }
        arr[j + 1] = arr[j];
    }
}

int writeNum(int arr[] , int sz){
    printf("\n");
    for(int i = 0; i < sz; i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

int  main(){
    int nums[] = {92,83,77,46,56,65,24,13,32,42,15};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    writeNum(nums, size);
    insSort(nums, size);
    writeNum(nums, size);

    return 0;
}