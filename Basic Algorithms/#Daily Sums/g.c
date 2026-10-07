#include <stdio.h>
#include <stdlib.h>

bool anagram(char word1, char word2){
    if(sizeof(word1) != sizeof(word2)){
        return false;
    }

    char count[sizeof(word1)] = {};

    for(int i = 0; i < sizeof(word1); i++){
        count[i] = word1[i];
    }

    for(int i = 0; i < sizeof(word2); i++){
        if(count = word1[i]){
            count[i] ={};
        }
    }

    return true;
}

int main(){
    char word1 = 'carrace', word2 = 'racecar';
    char counter[(sizeof(word1))];
}