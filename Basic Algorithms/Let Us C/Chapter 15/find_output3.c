// What will be the output of following program

#include <stdio.h>

int main(){
    char s[ ] = "Get organised! learn C !";
    int i = 0;
    while(s[i] != 0){
        printf("%c %c\n", s[i], *(s + i));
        printf("%c %c\n", i[s], *(i + s));
        i++;
    }
    return 0;
}