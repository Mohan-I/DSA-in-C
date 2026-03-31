// What will be the output of following program

#include <stdio.h>

int main(){
    char s[ ] = "Get organised! learn C !";
    printf("%s\n", &s[2]);
    printf("%s\n", s);
    printf("%s\n", &s);
    printf("%c\n", s[2]);
    return 0;
}