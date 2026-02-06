#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char data[20]){

}

void decrypt(char[20]){

}

int main(){
    int choice;
    char text[20];
    while(1){
        printf("\n [----Crypt Block----] \n");
        printf("\n1.Encypt Data\n2.Decrypt Data\n3.Exit Program \n");
        printf("\nEnter Your Operation :\t");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("\n Encrypt Text \n:-\t");
            scanf("%s", &text);
            encrypt(text);
            break;

            case 2:
            printf("\n Encrypt Text \n:-\t");
            scanf("%s", &text);
            decrypt(text);
            break;

            case 3:
            exit(0);

            default: printf("[ Incorrect Choice ]");
        }
    }
}