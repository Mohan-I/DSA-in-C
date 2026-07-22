#include <stdio.h>
#include <string.h>

char reverse(char word[50]){
    int left = 0;
    int right = strlen(word) - 1;

    while(left < right){
        char temp = word[left];
        word[left] = word[right];
        word[right] = temp;
        left++;
        right--;
    }

    return word;

}

int palindrome(int count){
    int num = 1;
    for(int i = 1; i < count; i++){
        num = i * num;
    }
    return num;
}

int checkDiff(char word[50], char revs[50]){
    int size = strlen(word), count = 0;
    for(int i = 0; i < size; i++){
        if(word[i] != revs[i]){
            count++;
        }
    }
    printf("\n%s %s\n", word, revs);
    int outcomeDiff = (count);
    return outcomeDiff;
}

int main(){

    int testcases;
    scanf("%d", &testcases);

    while(testcases--){

        char word[50], revs[50];
        scanf("%49s", word); 
        strcpy(revs, word);
        reverse(revs);
        
        int diff = checkDiff(word, revs);
        printf("%d \n", diff);
    }
    return 0;
}