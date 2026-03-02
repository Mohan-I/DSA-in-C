#include <stdio.h>
#include <stdbool.h>

int main(){
    int r = 3; // rows
    int c = 4; // columns
    int nums[3][4] = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };

    // -------------Logic--[Below]-----------------------------|

    bool isRowsZero[3] = {false};
    bool isColsZero[4] = {false};

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(nums[i][j] == 0){
                isRowsZero[i] = true;
                isColsZero[j] = true;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(isRowsZero[i] || isColsZero[j]){
                nums[i][j] = 0;
            }
        }
    }
    
    // -------------Logic--[Above]-----------------------------|

    for(int i = 0; i < r; i++){
        printf("|");
        for(int j = 0; j < c; j++){
            printf(" %d ", nums[i][j]);
        }
        printf("|\n");
    }

    return 0;
}