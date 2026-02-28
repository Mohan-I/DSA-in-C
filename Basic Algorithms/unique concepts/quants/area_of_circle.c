#include <stdio.h>

int main(){
    int pi = 3.14, r;
    printf("Write Radius of Circle to find its Area :");
    scanf("%d", &r);

    printf("\n[Area Of Circle]: %d", pi * (r * r));
    return 0;
}