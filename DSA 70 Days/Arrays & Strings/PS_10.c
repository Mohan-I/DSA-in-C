#include <stdio.h>
#include <string.h>

int main(){
    char word[200];

    printf("Enter : ");
    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = 0;

    int max_count = 0, count = 0;

    for(int i = 0; i < strlen(word); i++){
        char temp = word[i];

        if(temp == ' '){
            count = 0;
        }else{
            count++;
            if(max_count < count) max_count = count;
        }
    }

    printf("Longest Word: %d", max_count);
}