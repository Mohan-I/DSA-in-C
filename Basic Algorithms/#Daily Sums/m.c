#include <stdio.h>
#include <string.h>
#include <ctype.h>

void revstr(char text[]){
    int size = strlen(text);
    int left = 0;
    int right = size - 1;
    for(int i = 0; i < size; i++){
        if(left == right) break;
        int temp = text[left];
        text[left] = text[right];
        text[right] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < size; i++){
        printf("%c", tolower(text[i]));
    }
}

void countV(char text[]){
    int count = 0;
    int size = strlen(text);
    for(int i = 0; i < size; i++){
        if(text[i] == 'a'|| text[i] == 'e'|| text[i] == 'i'|| text[i] == 'o'|| text[i] == 'u' ){
            count++;
        }
    }
    printf("\nThe No. of vowels present - %d", count);
}

int main(){
    char text[] = "Mohan";
    revstr(text);
    countV(text);
    return 0;    
}