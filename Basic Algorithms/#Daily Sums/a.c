#include <stdio.h>
#include <string.h>

int main(){
    char *s ="abcedeb";
    int len = strlen(s);
    
    // 1. Track total occurrences of each character
    int count[26] = {0};
    for (int i = 0; i < len; i++) {
        printf("%c -> %d\n", s[i], s[i]);
        count[s[i] - 'a']++;
    }

    for(int i = 0; i < len; i++){
        printf("%d ", count[s[i] - 'a']);
    }

    return 0;
}