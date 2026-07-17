#include <stdio.h>

int main(){
    char l = 65;

    for(int i = 1; i < 27; i++){
        printf("%c ", l++);
        if(i % 4 == 0) printf("\n");
    }

    return 0;
}