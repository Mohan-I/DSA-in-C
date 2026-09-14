#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int comp_score, user_score = 0;

const char *choice_name(int shoot_num){
    if(shoot_num == 1) return "Stone";
    if(shoot_num == 2) return "Paper";
    if(shoot_num == 3) return "Scissor";
}

int comp_shoot(){
    return (rand() % 3) + 1;
}

void shoot(int user_choice){
    int comp_choice = comp_shoot();

    printf("\n You Choice : %s [VS] Computer's Choice : %s", choice_name(user_choice), choice_name(comp_choice));

    if(user_choice == comp_choice){
        printf("\n It's a Draw");
    }else if((user_choice == 1 && comp_choice == 3) ||
             (user_choice == 2 && comp_choice == 1) || 
             (user_choice == 3 && comp_choice == 2) ){
                printf("\n User Wins !!!");
                user_score++;
    }else{
        printf("\n Computer Wins !!!");
        comp_score++;
    }
}


int main(){
    srand(time(NULL));
    int choice;
    while(1){
        printf("\n[========== ROCK PAPER SCISSOR GAME =========]");
        printf("\n[===== USER SCORE : %d || COMP SCORE : %d =====]", user_score, comp_score);
        printf("\n 1. Stone \n 2. Paper \n 3. Scissor \n 4. Exit Game");
        printf("\n [ Enter Your Choice ] : ");
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
            exit(0);
            
            default : printf("\n \\\\\\ Invalid \\\\\\ ");
        }

        printf("\n-----------------------------------------\n\n");
    }
}