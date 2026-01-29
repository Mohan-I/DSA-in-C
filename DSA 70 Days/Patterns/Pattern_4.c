// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

********
********
********
****
****
****
********
****

*/

// Online C compiler to run C program online
#include <stdio.h>
#define size 8
int main() {
    // Write C code here
    
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            if(i == 1 || i == 2 || i == 3 || j == 1 || j == 2 || j == 3 || i == size - 1 || j == size - 1){
                printf("*");
            }
        }printf("\n");
    }

    return 0;
}