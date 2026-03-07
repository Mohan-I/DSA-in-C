// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:
1 
        2       3
        4       5       6
        7       8       9       10
        11      12      13      14      15
        16      17      18      19      20      21
        22      23      24      25      26      27      28
        29      30      31      32      33      34      35      36

*/ 
#include <stdio.h>

int main(){
    int num = 1, count = 0;
    for(int i = 1; i <= 8; i++){
        printf(" ");
        for(int j = 1; j <= i; j++){
            printf("\t%d ", num++);
            count++;
        }
        printf("\n");
    }

    return 0;
}