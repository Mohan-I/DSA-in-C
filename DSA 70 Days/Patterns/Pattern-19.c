// AIM : TO PRINT PATTERN BELOW

/* [PATTERN]:

1
12
123
1234
12345

*/ 

#include <stdio.h>
int main(){
    for (int i = 1; i <= 5; i++) {
        // %.*s uses 'i' to decide how many characters of str to print
        printf("%.*s\n", i, "12345");
    }
    return 0;
}