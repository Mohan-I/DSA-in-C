#include <stdio.h>

int findNum(int array[], int size){
    int small_num = array[0];
    for(int i = 1; i < size; i++){
        if( small_num > array[i]){
            small_num = array[i];
        }
    }
    return small_num;
}

int main(){
    int size;
    printf("Enter Size of Array:\t");
    scanf("%d", &size);
    int c_array[size];

    for(int a = 0; a < size; a++){
        printf("| Enter Element for C_array[%d] :\t", a);
        scanf("%d", &c_array[a]);
    }

    int smallest = findNum(c_array, size);
    printf("Smallest Num: %d", smallest);
}