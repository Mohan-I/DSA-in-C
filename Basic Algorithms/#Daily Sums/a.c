#include <stdio.h>
#include <stdlib.h>

int main(){
    int sticks = 21;
    int pick, count = 0;
    while(1){
        char player;
        if(count % 2 == 0){
            player = 'A';
        }else{
            player = 'B';
        }
        printf("\n[=====MATCHSTICK GAME======]");
        printf("\nSticks Remaining : %d", sticks);
        printf("\nEnter the Number of Sticks to Pick - Player [%c] (1 - 3): ", player);
        scanf("%d", &pick);

        if(sticks <= 1){
            printf("You Are Caught : Player [%c]", player);
        }

        switch(pick){
            case 1:
            sticks = sticks - 1;
            break;

            case 2:
            sticks = sticks - 2;
            break;

            case 3:
            sticks = sticks - 3;
            break;

            default : 
            printf("\nIncorrect Option Retry\n");
            count--;
        }
        count++;
    }
}