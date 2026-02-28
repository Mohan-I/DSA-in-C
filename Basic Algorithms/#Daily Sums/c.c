#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num1, num2;
    char s[20];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d %d", &num1, &num2);
    scanf("%s", &s);

    int size = strlen(s);
    char r[size];

    for(int i = 1; i <= size; i++){
        r[i] = s[size - i];
    }

    printf("\n%c", r[num2]);
    return 0;
}