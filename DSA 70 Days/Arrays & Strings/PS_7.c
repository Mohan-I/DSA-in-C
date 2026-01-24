// 7. Find the second largest element in an array. 

#include <stdio.h>

int main(){
    int arr[] = {4,5,6,21,12,3,34,1,60,2,9};

    int size = sizeof(arr) / sizeof(arr[0]);

    int large_n = arr[0], large_2n;
    for(int i = 0; i < size; i++){
        if(large_n < arr[i + 1]){
            large_2n = large_n;
            large_n = arr[i + 1];
        }
    }

    printf("%d", large_2n);

    return 0;
}