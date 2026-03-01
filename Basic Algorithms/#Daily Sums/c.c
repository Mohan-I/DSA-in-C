#include <stdio.h>
#define GRY "\x1b[30m"
#define RED "\x1b[31m"
#define GRN "\x1b[32m"
#define NRM "\x1b[0m"

void insert_sort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void writeNum(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

int main(){
    int unsrt_arr[] = {3,2,1,4,5,6,7,9,8,0};
    int size = sizeof(unsrt_arr) / sizeof(unsrt_arr[0]);

    writeNum(unsrt_arr, size);
    insert_sort(unsrt_arr, size);
    writeNum(unsrt_arr, size);
    return 0;
}