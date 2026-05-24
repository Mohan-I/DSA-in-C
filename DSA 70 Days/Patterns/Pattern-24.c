// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

          *           
    * * * * * * *     
  * * * * * * * * *   
  * * * * * * * * *   
  * * * * * * * * *   
* * * * * * * * * * * 
  * * * * * * * * *   
  * * * * * * * * *   
  * * * * * * * * *   
    * * * * * * *     
          *           

*/ 

#include <stdio.h>

void drawCircle(int r) {
    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r; j++) {
            // Check if the point (i, j) is inside the circle boundary
            if (i * i + j * j <= r * r) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    drawCircle(5);
    return 0;
}
