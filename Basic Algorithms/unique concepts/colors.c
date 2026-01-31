#include <stdio.h>
#define GRY "\x1B[30m"
#define RED "\x1B[31m"
#define GRE "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define PIN "\x1B[35m"
#define AQU "\x1B[36m"
#define NRM "\x1B[0m"

int main(){
    printf("%sI am Grey\n",GRY);
    printf("%sI am Red\n",RED);
    printf("%sI am Green\n",GRE);
    printf("%sI am Yellow\n",YEL);
    printf("%sI am Blu\n",BLU);
    printf("%sI am Pink\n",PIN);
    printf("%sI am Aqua\n",AQU);
    printf("%sI am White\n",NRM);
    return 0;
}