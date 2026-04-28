#include <stdio.h>

int main(){
    int arr[] = {9,3,24,5,64,74,4,11,23,10,12};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int n1 = 0, n2 = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] > n1){
            n2 = n1;
            n1 = arr[i];
        }else if(arr[i] > n2 && arr[i] != n1){
            n2 = arr[i];
        }
    }

    printf("%d", n2);
    return 0;
}