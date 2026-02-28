#include <stdio.h>
#include <string.h>

int encrypt(char s[], int size){

    // Print Encrypted String
    for(int i = 0; i < size ; i++){
        if(s[i] == ' '){
            s[i] = s[i];
        }else{
            s[i] = s[i] + 3;
        }
        printf("%c", s[i]);
    }
}

int decrypt(char s[], int size){
    
    // Print Decrypted String
    for(int i = 0; i < size ; i++){
        if(s[i] == ' '){
            s[i] = ' ';
        }else{
            s[i] = s[i] - 3;
        }
        printf("%c", s[i]);
    }
}

int main(){
    char s[] = "I am good !";
    int size = strlen(s);

    // Print Noraml String
    for(int i = 0; i < size ; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    encrypt(s, size);
    printf("\n");
    decrypt(s, size);
    
    return 0;
}