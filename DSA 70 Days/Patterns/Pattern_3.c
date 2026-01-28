// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

*******
*     *
*     *
*     *
*     *
*     *
*******

*/

#include <stdio.h>
#define SIZE 8

int main() {
    // Write C code here
    for(int i = 1 ; i < SIZE; i++){
        for(int j = 1; j < SIZE; j++){
            if(j == 1 || i == 1 || j == SIZE - 1 || i == SIZE - 1 ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}