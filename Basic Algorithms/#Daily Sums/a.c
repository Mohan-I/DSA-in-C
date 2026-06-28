#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GRY "\x1B[30m"
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YLW "\x1B[33m"
#define BLU "\x1B[34m"
#define PNK "\x1B[35m"
#define AQU "\x1B[36m"
#define DEF "\x1B[0m"

int user_score = 0, comp_score = 0;

int c_shoot(){
    return (rand() % 3) + 1;
};

char *choice_name(int num){
    if(num == 1) return "Stone";
    if(num == 2) return "Paper";
    if(num == 3) return "Scissor";
}

void shoot(int user_choice){
    int comp_choice = c_shoot();

    printf(" You Choosed : %s %s|vs|%s Computer Choosed : %s ", choice_name(user_choice),PNK, DEF, choice_name(comp_choice));

    if(comp_choice == user_choice){
        printf("\nRESULT : %s[It's A Draw !!!]%s\n", YLW, DEF);
    }else if(user_choice == 1 && comp_choice == 3 ||
             user_choice == 2 && comp_choice == 1 ||
             user_choice == 3 && comp_choice == 2){
        printf("\nRESULT :%s'%s'%s'%s''''[THE USER WINS]''''%s'%s'%s'%s\n",RED, BLU, PNK, GRN, PNK, BLU, RED, DEF);
        user_score++;
    }else{
        printf("\nRESULT :'%s'%s'%s'%s''''[THE COMPUTER WINS]''''%s'%s'%s'%s\n",RED, BLU, PNK, AQU, PNK, BLU, RED, DEF);
        comp_score++;
    }
}
int main(){
    srand(time(NULL));
    int choice;
    while(1){
        printf("\n%s======%s[STONE PAPER SCISSOR]%s======%s", BLU, AQU, BLU, DEF);
        printf("\n%s=====================================%s[ SCORE : USER - %d | Computer - %d ]%s\n",BLU, GRN, user_score, comp_score, DEF);
        printf("\n1. Stone\n2. Paper\n3. Scissor\n");
        printf("\nEnter Your Choice %s(1 -3)%s to shoot || Enter %s4%s to quit:\n", YLW, DEF, RED, DEF);
        scanf("%d", &choice);

        switch(choice){
            case 1:
            shoot(1);
            break;

            case 2:
            shoot(2);
            break;

            case 3:
            shoot(3);
            break;

            case 4:
            printf("\n%s=====[GAME ENDED SUCCESSFULLY]=====%s", GRY, DEF);
            exit(0);

            default : printf("\n\n===[You Mode A Typing Mistake !]===\n");
            
        }
    }

    return 0;
}