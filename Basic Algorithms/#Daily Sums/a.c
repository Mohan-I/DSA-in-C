#include <stdio.h>
#include <stdlib.h>

int main(){
    char value = 0;
    for(int i = 0; i <= 255; i++){
        printf("[%d.] -> %c\n",i, value);
        value++;
    }

    return 0;
}