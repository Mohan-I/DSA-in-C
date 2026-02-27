// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

 ************** 
  ************
   **********
    ********
     ******
      ****
       **

*/ 

#include <stdio.h>

int main(){
    for(int i = 0; i <= 7; i++){
        for(int j = 0; j <= 7; j++){
            if(j <= i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        for(int k = 7; k >= 0; k--){
            if(k <= i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}