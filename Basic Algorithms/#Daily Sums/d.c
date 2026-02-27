#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums;
    printf("WELCOME TO MATCH STICK GAME:\n\n");
    printf("Enter Number of Players : ");
    scanf("%d", &nums);

    // Player Count
    int pl[nums], a = 0;
    for(int i = 1; i <= nums; i++){
        pl[i] = a;
        a++;
    }
    // Testc 
    // for(int i = 1; i <= nums; i++){
    //     printf("%d\n",pl[i]);
    // }


    int sticks = 21, pick = 0, x = 0;

    while(1){
        printf("----------GAME ON !-------\n");

        if( sticks == 1){
            printf("Player %d has been lost the game !", pl[x]);
            break;
        }

        printf("It's Player %d's Turn, \nPick Up the MatchSticks in between (1 - 3) :");
        scanf("%d", pick);
            if(pick < 4 && pick > 0){
                scanf("%d", pick);         
            }

        printf("%d -> - %d",sticks, pick);

        

        // sticks = sticks - pick;
        // printf("Sticks Remain %d", sticks);

        // printf("\n");

        // if(sticks == 0){
        //     printf("Player %d has been lost the game !", pl[x]);
        //     break;
        // }

        // x++;
    }
    return 0;
}