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