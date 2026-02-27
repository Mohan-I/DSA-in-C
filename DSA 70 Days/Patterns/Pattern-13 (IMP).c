/*
[⭐]
AIM: To print inverted tree

*******
 *****
  ***
   *

*/ 

#include <stdio.h>

int main(){
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            if(j <= i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        for(int k = 4; k >= 0; k--){
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