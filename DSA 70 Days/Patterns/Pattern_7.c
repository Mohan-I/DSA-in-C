// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

********
***    *
***    *
*      *
*      *
*      *
********

*/

#include <stdio.h>
#define SIZE 8
int main() {
    for(int i = 1; i < SIZE; i++){
        for(int j = 1; j <= SIZE; j++){
            if(i == 1 || j == 1 || i == SIZE - 1 || j == SIZE){
                printf("*");
            }
            else if( i < 4 && j < 4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
}

/*
ALTERNATE METHOD:

int rows = 6, cols = 8;
    for(int i = 0; i <= rows; i++){
        for(int j = 0; j <= cols; j++){
            if(i == 0 || j == 0 || i == rows || j == cols || i < 3 && j < 3){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
        
*/ 