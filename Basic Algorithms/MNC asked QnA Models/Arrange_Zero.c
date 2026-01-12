// Asked In Oracle

// [AIM] : To Push Zeros in the end of Array without changing the order of other numbers

#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[10] = {1,2,3,5,0,7,0,8,9,0};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    while(1){
        bool swapped = false;
        for(int i = 0; i < size - 1; i++){
                if(arr[i] == 0 && arr[i + 1] != 0){
                    int temp = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp;
                    swapped = true;
                }
        }
        
        if(swapped == false){
             break;
        }
        
    }
    
    for(int j = 0; j < size; j++){
            printf("%d ", arr[j]);
    }

    return 0;
}