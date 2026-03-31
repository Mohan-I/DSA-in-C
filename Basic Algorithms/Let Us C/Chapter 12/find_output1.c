// What will be the output of following program

#include <stdio.h>

int main(){
    int i = 2;
    # ifdef DEF
    i *= i;
    # else
    printf("%d\n",i);
    #endif
    return 0;
}