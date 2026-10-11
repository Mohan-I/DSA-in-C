//  Find the Frequency of Characters in a String
#include <stdio.h>

int main(){
    char word[1000];
    int t;

    int freq[26] = {0};
    printf("Enter Word : ");
    fgets(word, sizeof(word), stdin);

    for(t = 0; word[t] != '\0'; t++){
        freq[word[t] - 'a'] += 1;
    }

    printf("\n Frequent Characters :\n");
    for(t = 0; t < 26; t++){
        if(freq[t] != 0){
            char ch = 'a' +  t;
            printf("\t%c : %d ", ch, freq[t]);
        }
    }
    return 0;
}