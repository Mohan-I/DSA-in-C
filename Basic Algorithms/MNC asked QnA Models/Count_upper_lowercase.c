#include <stdio.h>
#include <ctype.h>

int main(){
    char text[100];
    int upper = 0, lower = 0, space = 0;
    
    printf("Enter Text : ");
    fgets(text, sizeof(text), stdin);
    
    for(int i = 0; text[i] != '\0'; i++){
        if(isupper(text[i])){
            upper++;
        }
        else if(islower(text[i])){
            lower++;
        }
        else if(isspace(text[i])){
            space++;
        }
    }
    
    printf("Upper: %d | Lower  : %d| Spaces = %d",upper,lower,space);
    return 0;
}