#include <stdio.h>

int main() {
    char str[] = "Geeks";
    
    // Update the first
    // character of string
    str[0] = 'R';
    str[1] = 'R';
    if(str[0] == str[1]){
        return true;
        
    }
    printf("%c", str[0]);
    return 0;
}