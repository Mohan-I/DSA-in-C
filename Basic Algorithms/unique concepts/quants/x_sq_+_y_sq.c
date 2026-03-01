#include <stdio.h>

int main(){
    int x, y, z;

    printf("The Value of Z :");
    scanf("%d", &z);

    for(int x = -4 ; x < 100; x++){
        for(int y = -4; y < 100; y++){
            if((x * x) + (y * y) == z){
                printf("| x2 + y2 = %d ,", z);
                printf(" [Where x = %d and y = %d] \n", x , y);
                printf("|----------------------------------------\n");
                break;
            }
        }
    }

    return 0;
}