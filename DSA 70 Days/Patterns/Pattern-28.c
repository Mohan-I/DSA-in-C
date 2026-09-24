// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

  *
 * *
*   *
*   *
 * *
  *

*/ 


#include <stdio.h>

int main(){
    int rows = 2;
    for(int i = 0; i <= rows; i++){
        for(int s = rows; s > i; s--) printf(" ");
        for(int j = 1; j <= (i * 2) + 1; j++){
            if(j == 1 || j == (i * 2) + 1) {
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = rows; i >= 0; i--){
        for(int s = rows; s > i; s--) printf(" ");
        for(int j = 1; j <= (i * 2) + 1; j++){
           if(j == 1 || j == (i * 2) + 1) {
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}