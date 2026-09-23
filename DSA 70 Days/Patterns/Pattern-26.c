#include <stdio.h>

int main() {
    
    for(int i = 0; i < 5; i++){
        for(int j = 5; j > i; j--){
            printf(" ");
        }
        for(int j = 0; j <= i; j++ ){
            printf("*");
        }
        for(int k = 0; k <= i; k++ ){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < 5; i++){
        for(int l = 0; l <= i; l++ ){
            printf(" ");
        }
        for(int m = 5; m > i; m--){
            printf("*");
        }
        for(int n = 5; n > i; n--){
            printf("*");
        }
        printf("\n");
    }
}