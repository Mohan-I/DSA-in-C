// 1. Find the largest and smallest element in an array.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int MAX_SIZE;
    printf("\nEnter Array Size\t");
    scanf("%d",&MAX_SIZE);
    int arr[MAX_SIZE];

    int element;
    for(int i =0; i<MAX_SIZE;i++){
        printf("Enter Element for %d :\t",i);
        scanf("%d", &element);
        arr[i] =  element;
    }

    for(int i =0; i<MAX_SIZE;i++){
        printf("[%d]-|", arr[i]);
    }

    while(1){
        bool swapped = false;
        for(int x = 0; x < MAX_SIZE; x++){
            if(arr[x] > arr[x+1]){
                int temp = arr[x];
                arr[x] = arr[x+ 1];
                arr[x + 1] = temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    printf("\n");

    for(int i =0; i<MAX_SIZE;i++){
        printf("[%d]-|", arr[i]);
    }

    printf("\nSmallest Number: %d", arr[0]);
    printf("\nLargest Number: %d", arr[MAX_SIZE - 1]);
}