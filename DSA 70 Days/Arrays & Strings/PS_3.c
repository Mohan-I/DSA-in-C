// 3. Remove duplicate elements from an array.
#include <stdio.h>
#define MAX_SIZE 8

int main(){
    int arr[MAX_SIZE], element;
    for(int a = 0; a < MAX_SIZE; a++){
        printf("Input for element- %d :\t",a );
        scanf("%d", &element);
        arr[a] = element;
    }

    printf("\n");
    for(int b =0; b < MAX_SIZE; b++){
        printf("[%d]", arr[b]);
    }
    printf("\n");

    int zero = 0;

    for(int i = 0; i <MAX_SIZE; i++){
        for(int j = i + 1; j <MAX_SIZE; j++){
         if(arr[i] == arr[j]){
            arr[j] = 0;
         }

        // arr[i] = 0;

        if(arr[i] == 0){
            int temp = arr[MAX_SIZE - 1];
            arr[MAX_SIZE - 1]  = arr[i];
            arr[i] = temp;
            zero++; 
        }
    }
    }

    printf("\n");
    for(int b =0; b < MAX_SIZE - zero; b++){
        printf("[%d]", arr[b]);
    }
    printf("\n");
}