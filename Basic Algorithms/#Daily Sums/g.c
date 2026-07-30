#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10
int rear = -1, front = -1, ready_q[SIZE];

bool isFULL(){
    return (rear + 1) % SIZE == front;
}

bool isEMPTY(){
    return front == -1;
}

void insert_item(){
    if(isFULL()){
        printf("\n[------ THE QUEUE IS FULL ------]\n\n");
    }else{
        int element;
        printf("ENTER ELEMENT TO ADD : ");
        scanf("%d", &element);
        if(rear == -1){
            front = 0;
            rear = 0;
        }else{
            rear = (rear + 1) % SIZE;
        }
        ready_q[rear] = element;
    }
}

void remove_item(){
    if(isEMPTY()){
        printf("\n[------ THE QUEUE IS EMPTY ------]\n\n");
    }else{
        printf("\n The Element [%d] is been removed !", ready_q[front]);
        ready_q[front] = 0;
        front = (front + 1) % SIZE;
    }
}

void peek_item(){
    if(isEMPTY()){
        printf("\n[------ THE QUEUE IS EMPTY ------]\n\n");
    }else{
        printf("\n The Element [%d] has been last Inserted !\n\n", ready_q[front]);
    }
}

void show_items(){
    if(isEMPTY()){
        printf("\n[------ THE QUEUE IS EMPTY ------]\n\n");
    }else{
        printf("\n[------ ALL ITEMS IN THE QUEUE ! ------]\n\n");
        printf("\n|=-");
        for(int i = 0; i < SIZE; i++){
            printf("-=[%d]=-", ready_q[i]);
        }
        printf("-=|\n");
        printf("| FRONT : %d | REAR : %d | \n\n", front, rear);
    }
}

int main(){
    int choice;
    while(1){
        printf("\n=====[ CIRCULAR QUEUE ]====");
        printf("\n1. INSERT \n2. REMOVE \n3. PEEK \n4. SHOW \n5.EXIT");
        printf("\nENTER THE OPERATION TO PERFORM :");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            insert_item();
            break;

            case 2:
            remove_item();
            break;

            case 3:
            peek_item();
            break;

            case 4:
            show_items();
            break;

            case 5:
            exit(0);

            default: printf("\n[------- [ INCORRECT CHOICE ! ] --------]\n\n");
        }
    }

    return 0;
}