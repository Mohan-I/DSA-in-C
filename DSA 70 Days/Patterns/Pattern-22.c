// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:
 
         *
        *
       * *
      * *
     * * *
    * * *
   * * * *
  * * * *

*/ 

#include <stdio.h>

int main(){
    int rows = 10;

    for(int i = 0; i < rows; i++){
        for(int j = 10; j > i; j--){
            printf(" ");
        }
        
        for(int k = 0; k < i; k++){
            if(k % 2 == 0) continue;
            printf(" *");
        }

        printf("\n");
    }

    return 0;
}