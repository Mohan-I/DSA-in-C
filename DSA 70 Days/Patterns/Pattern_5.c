// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

***********
***********
***********
***       *
***       *
***       *
***       *
***       *
***       *
***       *
***********

*/

// Online C compiler to run C program online
#include <stdio.h>
#define size 12
int main() {
    // Write C code here
    
    for(int i = 1; i < size; i++){
        for(int j = 1; j < size; j++){
            if(i <= 3 || j <= 3 || i == size - 1 || j == size - 1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }

    return 0;
}