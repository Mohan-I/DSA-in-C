// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

        *11111111
       **1111111
      ***111111
     ****11111
    *****1111
   ******111
  *******11
 ********1
*********

*/

#include <stdio.h>

int main() {
    // Write C code here
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10 - i ; j++){
            printf(" ");
        }
        for(int j = 1; j <= i ; j++){
            printf("*");
        }
        for(int j = 1; j < 10 - i ; j++){
            printf("1");
        }
        printf("\n");
    }

    return 0;
}