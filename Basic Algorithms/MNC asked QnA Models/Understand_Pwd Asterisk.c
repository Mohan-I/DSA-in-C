

#include <stdio.h>
#include <conio.h>
#define NORM "\x1B[0m"
#define BLUE "\x1B[36m"
#define GREY "\x1B[30m"
#define GREN "\x1B[32m"

int main(){
    char pwd[40];
    char letter;
    int i = 0;

    printf("%s Enter Password : %s", BLUE, NORM);
    while(1){
        letter = _getch();

        if(letter == 13 || letter == 10){
            pwd[i] = '\0';
            break;
        }else if(letter == 8){
            if(i > 0){
                i--;
                printf("\b \b");
            }
        }else{
            pwd[i++] = letter;
            printf("*");
        }
    }

    printf("\n%s Password Caught SuccessFully !!%s",GREN,NORM);
    printf("\n%s Password : %s %s",GREY, pwd, NORM);
    return 0;
}