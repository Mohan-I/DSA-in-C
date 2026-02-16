#include <stdio.h>

int main(){
    int a = 10, b = 12, c = 0;

    // [OPERATION]==== | ===[TRUE]=== | =====[FALSE]=====
    if(a != 6 && b > 5) printf(" 1 "); else printf(" 0 ");
    if(a == 9 && b < 3) printf(" 1 "); else printf(" 0 ");
    if( ! ( a < 10) )   printf(" 1 "); else printf(" 0 ");
    if( ! (a > 5 && c)) printf(" 1 "); else printf(" 0 ");
    if(5 && c!=8 || !c) printf(" 1 "); else printf(" 0 ");
    
    return 0;
}