// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

 1  2  3 
 2  3  4
 3  4  5
 4  5  6

*/ 

#include <stdio.h>

int main(){
    int nums[] = {1,2,3,4,5,6};
    int size = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i <= size - 3; i++){
        for(int j = i; j < i + 3; j++){
            printf(" %d ", nums[j]);
        }
        printf("\n");
    }

    return 0;
}