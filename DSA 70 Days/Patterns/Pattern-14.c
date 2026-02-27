// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

****************
*    *    *    *
*    *    *    *
*    *    *    *
*    *    *    *
****************
*    *    *    *
*    *    *    *
*    *    *    *
*    *    *    *
****************
*    *    *    *
*    *    *    *
*    *    *    *
*    *    *    *
****************

*/ 

#include <stdio.h>

int main(){
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++){
            if(i == 0 || j == 0 || i == 5 || j == 5 || i == 10 || j == 10 || i == 15 || j == 15){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}