#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, rem, oct, p;
        printf("Enter any Number : \t");
        scanf("%d", &n1);
        n2 = n1;
        p = oct = 0;

        while(n1 > 0){
            rem = n1 % 8;
            n1 = n1/8;
            oct = oct + rem * pow(10.0, p);
            p++;
        }

        printf("\n The octal equivalent of %d is %d\n", n2, oct);

    return 0;
}