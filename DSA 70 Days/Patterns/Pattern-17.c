// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

   1 
  2 3
 4 5 6
7 8 9 10

*/ 

#include <stdio.h>

int main(){
    int num = 1, count = 0;
    for(int i = 1; i <= 4; i++){
        for(int a = 4; a > i; a--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ", num++);
            count++;
        }
        printf("\n");
    }

    return 0;
}