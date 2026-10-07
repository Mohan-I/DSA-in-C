/*
    Problem statement : We need to make change for n coins (for eg. 39, 45) of denominations {1,2,5,10} using fewest number of coins.
*/

#include <stdio.h>
#include <stdlib.h>

void provideChange(int p){
    printf("\nThe Total Change");
    int ten = 0, five = 0, two = 0, one = 0;
    while(p!=0){
        if(p >= 10){
            printf("[10]");
            p = p - 10;
            ten++;
        } else if(p >= 5){
            printf("[5]");
            p = p - 5;
            five++;
        }else if(p >= 2){
            printf("[2]");
            p = p - 2;
            two++;
        }else if(p >= 1){
            printf("[1]");
            p = p - 1;
            one++;
        }
    }
    printf("\nCoins : [ 10 * %d ]==[ 5 * %d ]==[ 2 * %d ]==[ 1 * %d ] ", ten, five, two, one);
}

int main(){
    int price;
    printf("Enter Number of Change Required : ");
    scanf("%d", &price);

    provideChange(price);
    return 0;
}