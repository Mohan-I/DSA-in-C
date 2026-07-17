#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int guessed_Num = rand() % 100;

    int choice, choice_count = 0;
    while(1){
        printf("\n[=== Guess the Number Game ===] || Current Choice Count : %d", choice_count);
        printf("\nEnter Your Guess Number :");
        scanf("%d", &choice);

        if(choice < guessed_Num){
            printf("The Number is Lower Than Guessed Num");
        }else if(choice > guessed_Num){
            printf("The Number is Greater Than Guessed Num");
        }else if(choice == guessed_Num){
            printf("\n{========= You Got it right in %d guesses =========}", choice_count);
            break;
        }

        choice_count++;
    }

    return 0;
}