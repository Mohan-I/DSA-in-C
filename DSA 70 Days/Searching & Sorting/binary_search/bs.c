#include <stdio.h>

int sf(int arr[], int target, int size){
    int low = 0, mid,i;
    int high = size - 1;

    printf(" Search");
    while(low <= high){
    int mid = low + (high - low) / 2;

        if(mid == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = low + 1;
        }
        else if(arr[mid] > target){
            high = high - 1;
        }else{
            return -1;
    }   
    }
};

int main(){
    int s_array[] = {23,24,25,26,27,28,29,32,34,36,39};
    int targ = 28;
    int s_size = sizeof(s_array) / sizeof(s_array[0]);

    int value = sf(s_array,targ,s_size);

    if(value = -1){
        printf
    }

    printf("\tThe val : %d", value);

    return 0;
}