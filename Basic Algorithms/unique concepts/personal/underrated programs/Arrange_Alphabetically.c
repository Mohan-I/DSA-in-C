#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareValues(const void *a, const void *b){
    return (*(char *)a - *(char *)b);
}
int main(){
    char str[101];

    while(scanf("%s", str) != EOF){
        int len = strlen(str);
        qsort(str, len, sizeof(char), compareValues);

        printf("%s\n", str);
    }

    return 0;
}