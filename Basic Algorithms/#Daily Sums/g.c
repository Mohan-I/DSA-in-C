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

void insert(){
    if(isFULL()){
        printf("\n====[The Queue is Full]====");
    }else{
        int element;
        printf("\n Enter The Value To Add : ");
        scanf("%d", &element);
        if(rear == -1){
            rear = 0;
            front = 0;
        }else{
            rear = (rear + 1) % SIZE;
        }
        ready_q[rear] = element;
    }
}

void remove_item(){
    if(isEMPTY()){
        printf("\n====[The Queue is Empty]====");
    }else{
        printf("\n==The Element [%d] is removed", ready_q[front]);
        ready_q[front] = 0;
        front = (front + 1) % SIZE;
    }
}

void last_item(){
    if(isEMPTY()){
        printf("\n====[The Queue is Empty]====");
    }else{
        printf("\n==The Last Element Inserted -> [%d]", ready_q[rear]);
    }
}

void show_items(){
    if(isEMPTY()){
        printf("\n====[The Queue is Empty]====");
    }else{
        printf("\n|======All Element=====|");
        printf("\n\n|=-");
        for(int i = 0; i < SIZE; i++){
            printf("-=[%d]=-", ready_q[i]);
        }
        printf("-=|\n\n");
        printf("\n[ FRONT : %d | REAR : %d ]\n\n", front, rear);
    }
}

int main(){
    int choice;
    while(1){
        printf("\n=====[ CIRCULAR QUEUE ]=====\n");
        printf("\n 1. INSERT \n 2. REMOVE \n 3. LAST ITEM \n 4. SHOW ALL \n 5. EXIT");
        printf("\n ENTER THE OPERATION TO BEGIN :\t");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            insert();
            break;

            case 2:
            remove_item();
            break;

            case 3:
            last_item();
            break;

            case 4:
            show_items();
            break;

            case 5:
            exit(0);

            default: 
            printf("\n====[ Incorrect Operation ]====\n");

        }
    }

    return 0;
}

