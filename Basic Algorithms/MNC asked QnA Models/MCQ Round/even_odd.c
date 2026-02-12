#include <stdio.h>

int main(){
    int num;
    printf("\nEnter Num: \t");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d Is a Even Number..!\n", num);
    }else{
        printf("%d Is a Odd Number..!\n", num);
    }
    return 0;
}