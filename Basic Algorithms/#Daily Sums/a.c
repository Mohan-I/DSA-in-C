#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 8
int front = -1, rear = -1, ready_q[SIZE];

bool isEmpty(){
    return front == -1;
}

bool isFull(){
    return (rear + 1) % SIZE == front;
}

void enqueue(){
    if(isFull()){
        printf(" OVERFLOW !");
    }else{
        if(front == -1) front = 0;
        int element;
        printf("Enter Element To add : ");
        scanf("%d", &element);
        rear = (rear + 1) % SIZE;
        ready_q[rear] = element;
    }
}

void dequeue(){
    if(isEmpty()){
        printf("\n UnderFlow !");
    }else{
        printf("Removing Element : %d", ready_q[front]);
        front = (front + 1) % SIZE;
    }
}

void show(){
    if(isEmpty()){
        printf("\n UnderFlow !");
    }else{
        printf("\n[ALL ELEMENTS]\n");
        printf("\n|=-");
        for(int i = front; i <= rear; i++){
            printf("-=[%d]=-", ready_q[i]);
        }
        printf("-=|\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("\n====[   Circular Queue    ]====\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit");;
        printf("\nEnter Operation To perform : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            show();
            break;

            case 4:
            exit(0);

            default: printf("\n==Incorrect==");
        }
    }
}