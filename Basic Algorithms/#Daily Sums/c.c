#include <stdio.h>
#include <stdlib.h>

void selectionSort(int Arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(Arr[j] < Arr[i]){
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
}

void printNums(int Arr[], int size){
    for(int i = 0; i < size; i++){
        printf("[%d]", Arr[i]);
    }
}

int main(){
    int nums[] = {2,5,3,4,1,7,9,8};
    int size = sizeof(nums) / sizeof(nums[0]);

    selectionSort(nums, size);
    printNums(nums, size);

    return 0;
}