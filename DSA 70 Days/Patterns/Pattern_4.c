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

#include <stdio.h>
#define SIZE 7

int main(){
    for(int i = 0; i <= SIZE; i++){
        for(int j = 0; j <= SIZE; j++){
            if(i >= 3 && i != 6 && j >= 4){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}