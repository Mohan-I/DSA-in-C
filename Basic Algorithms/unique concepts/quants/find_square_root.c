#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, found = 0;
    printf("\nEnter Number To Find Perfect Square Root : ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++){
        if(i * i == num){
            printf("The Sqaure Root of [Number - %d] is [%d]",num, i);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("The Perfect Square Root Not Found !");
    }

    return 0;
}