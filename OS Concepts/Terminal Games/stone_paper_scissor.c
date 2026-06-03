#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp_score = 0, human_score = 0;

int c_choice(){
    return (rand() % 3) + 1;
}

char const *choice_name(int num){
    if (num == 1) return "Stone";
    if (num == 2) return "Paper";
    if (num == 3) return "Scissor";
}

void shoot(int user_choice){
    int comp_choice = c_choice();

    printf("Computer chosed : %s  &  You chosed : %s", choice_name(comp_choice), choice_name(user_choice));

    if(user_choice == comp_choice){
        printf("\nIt's A Draw !!");
    }else if(
        user_choice == 1 && comp_choice == 3 ||
        user_choice == 2 && comp_choice == 1 ||
        user_choice == 3 && comp_choice == 2 
    ){
        printf("\nYou Got A Point +1 !\n");
        human_score++;
    }else{
        printf("\nComputer Got A Point +1 !\n");
        comp_score++;
    }
}

int main(){
    srand(time(NULL));

    int choice;
    while(1){
        printf("\n[STONE PAPER SCISSORS]\n");
        printf("[ SCORE : Computer - %d | You - %d ]", comp_score, human_score);
        printf("\n------------------\n");
        printf("\n1.Stone\n2.Paper\n3.Scissor\n4.Quit\n");
        printf("\nEnter Your Choice : ");
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

            default: printf("\nIncorrect Choice !");
        }
    }

    return 0;
}