// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

*
 **
  ***
   ****
    *****
     ******
    *****
   ****
  ***
 **
*

*/ 

#include <stdio.h>

int main(){
    int rows = 5;
    for(int i = rows; i > 0; i--){
        for(int k = 0; k < rows - i; k++ ){
            printf(" ");
        }
        for(int j = rows; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i <= rows; i++){
        for(int k = 0; k < rows - i; k++ ){
            printf(" ");
        }
        for(int j = rows; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
}