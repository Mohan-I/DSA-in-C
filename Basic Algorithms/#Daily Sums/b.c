#include <stdio.h>

int main(){
    for(int i = 0; i <= 18; i++){
        for(int j = 0; j <= 18; j++){
            if(i % 2 == 0 && j % 2 == 0){
                printf("+");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}