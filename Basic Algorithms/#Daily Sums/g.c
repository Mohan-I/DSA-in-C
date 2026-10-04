#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char change( char temp, char l1, char l2){
    if(temp - l1 > l2 - temp){
        return l2;
    }else{
        return l1;
    }
}

int main(){
    char word[60];
    
    printf("\n Enter the Testcase Word : ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++){
        int temp = word[i];
        if(temp >= 'a' && temp <= 'e'){
            char l1 = 'a';
            char l2 = 'e';
            word[i] = change(temp,l1,l2);
        }
        else if(temp >= 'e' && temp <= 'i'){
            char l1 = 'e';
            char l2 = 'i';
            word[i] = change(temp,l1,l2);
        }
        else if(temp >= 'i' && temp <= 'o'){
            char l1 = 'i';
            char l2 = 'o';
            word[i] = change(temp,l1,l2);
        }
        else if(temp >= 'o' && temp <= 'u'){
            char l1 = 'o';
            char l2 = 'u';
            word[i] = change(temp,l1,l2);
        }
        else{
            word[i] = 'u';
        }
    }

    printf("\n Ans : %s", word);

    return 0;
}