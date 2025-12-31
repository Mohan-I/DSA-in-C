#include <stdio.h>
#include <stdbool.h>

int main(){
    int size;
    printf("Enter Size of array:\t");
    scanf("%d", &size);
    int c_array[size];
    
    printf("Enter Some Basic Values for Array\n");
    for(int i = 0; i < size; i++){
        printf("Enter Element for %d:\t", i);
        scanf("%d", &c_array[i]);
    }
        
        while(1){
            bool swapped = false;
            for(int i = 0; i < size; i++){
                if(c_array[i] > c_array[i + 1]){
                    int temp = c_array[i + 1];
                    c_array[i + 1] = c_array[i];
                    c_array[i] = temp;

                    swapped = true;
                }
            }
        
            if(swapped == false){
                break;
            }
        }

        printf("\n");
        for(int i = 0; i < size; i++){
            printf("[%d]", c_array[i]);
        }
        
    }
