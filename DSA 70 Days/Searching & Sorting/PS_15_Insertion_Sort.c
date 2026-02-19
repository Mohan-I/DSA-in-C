#include <stdio.h>

void insertSort(int arr[], int space){
    int i, key, j;
    for(int i = 1; i < space; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void writeNum(int num[], int sz){
    for(int i = 0; i < sz ; i++){
        printf("[%d]",num[i]);
    }
    printf("\n");
}

int main(){
    int nums[]= {6,4,3,2,4,5,7,9,8};
    int size = sizeof(nums) / sizeof(nums[0]);

    writeNum(nums, size);

    insertSort(nums , size);
    writeNum(nums, size);

    return 0;
}