#include <stdio.h>

void reverse(int nums[], int start, int end){
    for(int i = start; i <= end; i++){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate_N(int nums[], int size, int shift){
    int k = shift % size;
    reverse(nums, 0, size - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, size - 1);
}

int main(){
    int nums[] = {71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
    int size = sizeof(nums)/sizeof(nums[0]);
    int shift = 4;

    rotate_N(nums, size, shift);
    for(int i = 0 ; i < size; i++) printf("[%d]", nums[i]);
    return 0;
}