// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *

*/ 
#include <stdio.h>

int main(){
    int rows = 6;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i - 1; j++){
            printf(" ");
        }
        for(int k = 0; k < (i * 2) + 1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = rows - 2; i >= 0; i--){
        for(int j = 0; j < rows - i - 1; j++){
            printf(" ");
        }
        for(int k = 0; k < (i * 2) + 1; k++){
            printf("*");
        }
        printf("\n");
    }
}