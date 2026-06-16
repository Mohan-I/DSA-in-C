#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user_score = 0, comp_score = 0;

int c_choice(){
    return (rand() % 3) + 1;
}

char const *choice_name(int value){
    if(value == 1) return "Stone";
    if(value == 2) return "Paper";
    if(value == 3) return "Scissor";
}

void shoot(int user_choice){
    int comp_choice = c_choice();
    printf("Your Choice : %s | Computer Choice : %s \n", choice_name(user_choice), choice_name(comp_choice));

    if(comp_choice == user_choice){
        printf("It's a Draw ! \n");
    }else if(comp_choice == 1 && user_choice == 2 ||
             comp_choice == 2 && user_choice == 3 ||
             comp_choice == 3 && user_choice == 1){
                printf("User Wins +1 ! \n");
                user_score++;
    }else{
        printf("Computer Wins +1 ! \n");
        comp_score++;
    }
}


int main(){
    srand(time(NULL));
    int choice;
    while(1){
        printf("\n[===STONE PAPER SCISSOR GAME====]\n");
        printf("\n1. STONE \n2. PAPER \n3. SCISSOR \n4.EXIT\n");
        printf("\nEnter Your Choice :\t");
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
            return 0;

            default: printf("\n[ Incorrect Choice !]\n");
        }
    }


    return 0;
}