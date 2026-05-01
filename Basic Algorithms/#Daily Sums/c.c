// You have an array [1,2,3,4]. Can you split in two subsets with equal sum ?
// test case : [1,2,3,4] Solution: (1,4) (2,3)
// test case : [1,4,4,1] Solution: (1,4) (4,1)
// test case : [1,0,3,4] Solution: (1,3) (0,4)

#include <stdio.h>

void equalSums(int nums[], int N){
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == sum){
                
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    equalSums(arr, size);
    return 0;
}