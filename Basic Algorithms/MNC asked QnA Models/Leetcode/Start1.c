// work in progress

#include <stdio.h>
#include <stdbool.h>

int main(){
    int nums[] = {1,4,8,6,7,6};

    int size = sizeof(nums) / sizeof(nums[0]);
    int data[size][1];

    for(int i = 0; i <= size; i++){
        int counts = 1;
        for(int j = i + 1; j < size; j++){
            if(nums[i] == nums[j]){
                counts++;
            }
        }
        // actual nums integer
        data[i][0] = nums[i]; 
        // and their counts
        data[i][1] = counts;
    }

    for(int i = 0; i <= size ; i++){
        printf(" N[%d] \t", data[i][0]);
        printf(" C[%d] \n", data[i][1]);
    }

    while(1){
        bool swapped = false;
        for(int i = 0; i < size; i++){
            if(data[i][1] > data[i + 1][1]){
                int temp = data[i + 1][1];
                data[i + 1][1] = data[i][1];
                data[i][1] = data[i + 1][1];

                int temp2 = data[i + 1][0];
                data[i + 1][0] = data[i][0];
                data[i][0] = data[i + 1][0];
                swapped = true;
            }
        }
        if(swapped == false) break;
    }

    printf("-------------------");
    printf("%d", data[size - 1][0]);

    // for(int i = 0; i < size ; i++){
    //     printf(" [%d] \t", data[i][0]);
    //     printf(" [%d] \n", data[i][1]);
    // }
    return 0;

}