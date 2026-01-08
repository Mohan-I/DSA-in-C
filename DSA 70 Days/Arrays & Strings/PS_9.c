// 9. Count vowels and consonants in a string. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char cs[100];
    printf("Enter The Sentence: ");
    scanf("%s", cs);
    fgets(cs,sizeof(cs),stdin);

    int consonants = 0, vowels = 0, digits = 0, spaces = 0;
    for(int i = 0; cs[i] != '\0'; i++){
        char ch = tolower(cs[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
            vowels++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            consonants++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else if(ch == ' '){
            spaces++;
        }
    }

    printf("\n-[ THE COUNT ]-");

    printf("\n Vowels: %d", vowels);
    printf("\n Consonats: %d", consonants);
    printf("\n Spaces: %d", spaces);
    printf("\n Digits: %d", digits);
    
    return 0;
}