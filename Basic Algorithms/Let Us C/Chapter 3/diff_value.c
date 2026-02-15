// What's the difference between b and c ?

// Ans : b will contain some garbage value and c will be equal to 400

#include <stdio.h>

int main(){
    int a = 300, b, c;
    if( a >= 400 ) b = 200;
    c = 400;
    printf("Value : %d and %d" ,b ,c );

    return 0;
}