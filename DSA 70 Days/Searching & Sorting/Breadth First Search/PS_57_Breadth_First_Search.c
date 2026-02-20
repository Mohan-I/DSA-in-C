#include <stdio.h>
#define GRY "\x1B[30m"
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define PIN "\x1B[35m"
#define AQU "\x1B[36m"
#define NRM "\x1B[0m"

int BFS(int arr[], int sz, int value){
    int low = 0;
    int high = sz -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == value){
            return mid;
        }

        if(arr[mid] < value){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        // Printing the Initail steps for understanding. 
        for(int i = 0; i < sz; i++){
            if(i == mid){
             printf("%s[%d]%s",RED,arr[i],NRM);
            }
            else if(arr[i] == value){
             printf("%s[%d]%s",GRN,arr[i],NRM);
            }
            else if(i == low){
             printf("%s[%d]%s",BLU,arr[i],NRM);
            }
            else if(i == high){
             printf("%s[%d]%s",AQU,arr[i],NRM);
            }
            else if(i < low && high > i){
             printf("%s[%d]%s",GRY,arr[i],NRM);
            }
            else if(i > high){
             printf("%s[%d]%s",GRY,arr[i],NRM);
            }
            else{
             printf("%s[%d]%s",PIN,arr[i],NRM);
            }
        }
        printf("\n");
    }
    return -1;
}

void writeNum(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

int main(){
    int nums[] = {10,20,25,30,35,40,44,48,49,50,52,60,62,70,72,80,85,90,95};
    int target = 62;
    int size = sizeof(nums) / sizeof(nums[0]);
    
    for(int i = 0; i < size; i++){
        if(i <= 9){
            printf("[0%d]",i);
        }else{
            printf("[%d]",i);
        }
    }
    printf("\n\n");
    writeNum(nums, size);
    int output = BFS(nums, size , target);

    if(output == -1){
        printf("%sElement Not Found !%s",YEL,NRM);
    }else{
        printf("\nElement found %s[%d]%s at %s[%d]%s", GRN,nums[output],NRM,GRN, output,NRM);
    }
    return 0;
}