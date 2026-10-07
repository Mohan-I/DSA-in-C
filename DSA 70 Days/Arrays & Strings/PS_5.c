// 5. Merge two sorted arrays.
#include <stdio.h>

int main(){
    int size, element;
    printf("\nEnter Size of Array 1:\t");
    scanf("%d",&size);
    int arr_1[size];
    
    int size2;
    printf("\nEnter Size of Array 2:\t");
    scanf("%d",&size2);
    int arr_2[size2];
    

    int arr_3[size + size2]; // New Combined Empty Array

    // Array Inputs:

    for(int i = 0; i < size; i++){
        printf("\nEnter Elements for %d in Array 1:\t", i);
        scanf("%d", &element);
        arr_1[i] = element;
    }
    printf("\n----------------------\n");

    for(int i = 0; i < size2; i++){
        printf("\nEnter Elements for %d in Array 2:\t", i);
        scanf("%d", &element);
        arr_2[i] = element;
    }

    printf("\n");

    // Logic

    int j = 0, i = 0, num = 0;
    while(num != size + size2){
        if(arr_1[i] <= arr_2[j]){
            arr_3[num] = arr_1[i];
            i++;
        }else{
            arr_3[num] = arr_2[j];
            j++;
        }
        num++;
    }

    // Printing Array 3
    
    printf("\n");
    for(int i = 0; i < size + size2; i++){
        printf("[%d]", arr_3[i]);
    }


}