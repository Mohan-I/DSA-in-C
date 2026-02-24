#include <stdio.h>

void cal3sum(int arr[] ,int size,int total){
    int left = 0;
    int right = total - 1;
    int mid = left + 1;
    while(left <= right){
        if(arr[left] + arr[mid] + arr[right] == total){
        printf("[%d, %d, %d]", arr[left], arr[mid], arr[right]);
        }
        if(arr[left] < arr[mid] < arr[right]){
        mid++;
        }else{
        left++;
        right--;
        mid = left + 1;
    }
    }
}

// Three Sum
int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(nums) / sizeof(nums[0]);
    int sum = 25;

    cal3sum(nums, size, sum);
    return 0;
}