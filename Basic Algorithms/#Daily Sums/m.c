#include <stdio.h>
#include <stdlib.h>

int binaryS(int arr[], int size, int T){
    int low = 0;
    int high = size;

    while(low < high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == T){
            return mid;
        }else if(arr[mid] < T){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
}

int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    int ans = binaryS(arr, size, target);
    printf("Ans Position : %d", ans);

    return 0;
}