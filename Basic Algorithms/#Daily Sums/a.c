#include <stdio.h>

int pickUp(int stck, int pcks){
    int remaining = stck - pcks;
    return remaining;
}

int main(){
    int nums;

    printf("Enter Number of Players : ");
    scanf("%d", &num);

    // Player Count
    int pl[num], a = 0;
    for(int i = 1; i < nums; i++){
        pl[i - 1] = i;
        i++;
    }

    int sticks = 21, pick;

    while(1){
        printf("\nIt's Player %d 's turn", pl[a]);
        printf("\nPick Up the MatchSticks in between (1 - 3) : ");
        sticks = pickUp(sticks, pick);

        if(sticks == 1){
            printf("Player %d has been lost !", pl[a + 1]);
            break;
        }
        
    }

    return 0;
}