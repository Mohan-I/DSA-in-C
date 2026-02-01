// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *

*/

#include <stdio.h>

int main() {
    // Write C code here
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10 - i ; j++){
            printf(" ");
        }
        for(int j = 1; j <= i ; j++){
            printf("* ");
        }
        for(int j = 1; j <= 1 ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}