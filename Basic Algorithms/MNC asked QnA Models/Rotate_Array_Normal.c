#include <stdio.h>

// Over Engineered 
// void rotateArrays(int nums[], int size){
//     int newNum = nums[0];
//     int lastNum = nums[ size -  1];

//     for(int i = 1; i < size; i++){
//         int temp = newNum;
//         newNum = nums[i];
//         nums[i] = temp;
//     }

//     nums[0] = lastNum;
// }

void rotateArrays(int nums[], int size){

    int last = nums[size - 1];
    for(int i = size - 1; i > 0; i--) nums[i] = nums[i - 1];
    nums[0] = last;

}
int main(){
    int nums[] = {3,4,5,6,7,8,9};
    int size = sizeof(nums)/sizeof(nums[0]);

    rotateArrays(nums, size);

    for(int a = 0; a < size; a++) printf("[%d]", nums[a]);
    return 0;
}