// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

 1  2  3  4  5  6 
 2  3  4  5  6
 3  4  5  6
 4  5  6
 5  6
 6

*/ 

#include <stdio.h>

int main(){
    int nums[] = {1,2,3,4,5,6};
    int size = sizeof(nums) / sizeof(nums[0]);

    int j = 0;
    for(int i = 0; i < size; i++){
        for(j = i; j < 6; j++){
            printf(" %d ", nums[j]);
        }
        printf("\n");
    }

    return 0;
}
