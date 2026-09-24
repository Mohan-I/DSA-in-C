#include <stdio.h>

int main(){
    int nums = 6;
    for(int i = nums + 1; i >= 0; i--){
        for(int j = nums - i; j >= 0; j--){
            printf(" ");
        }
        for(int k = nums - i; k < nums; k++){
            printf(" *");
        }
        printf("\n");
    }
    for(int i = 1; i <= nums + 1; i++){
        for(int j = nums - i; j >= 0; j--){
            printf(" ");
        }
        for(int k = nums - i; k < nums; k++){
            printf(" *");
        }
        printf("\n");
    }
}