#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Resources{
    int id;
    int alloc_a;
    int alloc_b;
    int alloc_c;
    bool completed;
};

int main(){
    int n;
    printf("\n#----BANKER'S ALGORITHM----#\n");
    printf("Enter Number of Processes:\t");
    scanf("%d", &n);

    struct Resources p[n];

    for(int i = 0; i < n; i++){
        printf("Enter Process Resources required for");
    }
    return 0;
}
// Work In Progress