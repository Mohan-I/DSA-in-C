#include <stdio.h>
#include <string.h>

int main(){
    char text[20], newtext[20];
    printf("[w] :");
    
    scanf("%19s", text);

    int j = 0;
    for(int i = 0; text[i] != '\0' ; i++){
        if(text[i] == 'a' ||text[i] == 'e' ||text[i] == 'i' ||text[i] == 'o' ||text[i] == 'u'){
            printf("Removed Vowel : %c \n", text[i]);
        }else{
            printf("Constant stored: %c \n", text[i]);
            newtext[j] = text[i];
            j++;
        }
    }

    newtext[j] = '\0';

    printf("%s", newtext);
    return 0;
}