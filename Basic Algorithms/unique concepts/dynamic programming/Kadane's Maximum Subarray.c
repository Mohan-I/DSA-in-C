#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 

int maxSubArray(int* nums, int numsSize) {
    int max_ends_here = nums[0];
    int max_so_far = nums[0];

    for(int i = 1; i < numsSize; i++){
        max_ends_here = MAX(nums[i], max_ends_here + nums[i]);
        max_so_far = MAX(max_ends_here, max_so_far);
    }

    return max_so_far;
}

int main(){
    int testcases;
    scanf("%d", &testcases);

    while(testcases--){
        int N;
        scanf("%d", &N);

        int nums[N];
        for(int i = 0; i < N; i++) scanf("%d", &nums[i]);

        int Ans = maxSubArray(nums, N);
        printf("%d\n", Ans);
    }
    
    return 0;
}