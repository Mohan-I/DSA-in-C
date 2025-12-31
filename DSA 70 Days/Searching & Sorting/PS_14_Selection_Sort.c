#include <stdio.h>

int main(){
    int size;
    printf("Enter Array Size:\t");
    scanf("%d", &size);
    int c_array[size];


    printf("\n");
    for(int a = 0; a < size; a++){
        printf("Enter Element for - [%d] :", a);
        scanf("%d", &c_array[a]);
    }

    for(int i = 0; i < size - 1; i++){
        int min_n = i;
        for(int j = i + 1; j < size; j++){
            if(c_array[j] < c_array[min_n]){
                min_n = j;
            }
            
            int temp = c_array[min_n];
            c_array[min_n] = c_array[i];
            c_array[i] = temp;
        } 
    }

    printf("\n");
    for(int a = 0; a < size; a++){
        printf("[%d]", c_array[a]);
    }
}