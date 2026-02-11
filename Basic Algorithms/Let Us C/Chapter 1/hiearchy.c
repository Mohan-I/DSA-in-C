// Evaluate The following Expression using C and show the hierarchy
// Expression: 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y
// If a = 3 , b = 2 , x = 5, y = 4

#include <stdio.h>

int main(){
    int a = 3 , b = 2 , x = 5, y = 4;
    int ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y;
    printf("%d",ans);

    return 0;

}