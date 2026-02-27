// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

0 
1 0
1 0 1
0 1 0 1
0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1
0 1 0 1
0 1 0
1 0
1

*/

#include <stdio.h>

int main(){
    int k = 0;
    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ",k);
            if(k == 0) k = 1; else k = 0;
        }
        printf("\n");
    }
    for(int i = 5; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            printf("%d ",k);
            if(k == 0) k = 1; else k = 0;
        }
        printf("\n");
    }
    return 0;
}