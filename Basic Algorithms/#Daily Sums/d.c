#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    char s[20];
    if(fgets(s, sizeof(s), stdin) != NULL){
            printf("*");
            i++;
    }

    int size = strlen(s);
    for(int a = 0; a < size ; a++){
        printf("%c", s[a]);
    }

    return 0;
}