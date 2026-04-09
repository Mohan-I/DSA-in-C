#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int N){
    for(int i = 0; i < N; i++){
        printf("[%d]", arr[i]);
    }
    printf("\n");
}

int main(){
    int nums[] = {2,13,22,344,55,6,66,27,8,90,1,123,42,54,322,323,43};
    int size = sizeof(nums) / sizeof(nums[0]);
    int newN[size];

    printArray(nums, size);

    for(int i = 0; i < size; i++){
        newN[(nums[i]/ 100) % 10]++;
    }

    printf("\n[%d]\n", 182 % 10);

    printArray(newN, size);

    return 0;
}