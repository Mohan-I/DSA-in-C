#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 8

int rear = -1, front = -1, ready_q[SIZE];

bool isFull(){
    return (rear + 1) % SIZE == front;
}

bool isEmpty(){
    return front == -1;
}

void Enqueue(){
    if(isFull()){
        printf("\n[THE QUEUE IS FULL]\n");
    }else{
        int element;
        printf("Enter Item to ADD:\t");
        scanf("%d", &element);
        if(front == -1) front = 0 ;
        rear = (rear + 1) % SIZE;
        ready_q[rear] = element;
    }
}

void Dequeue(){
    if(isEmpty()){
        printf("\nTHE QUEUE IS EMPTY !!");
    }else{
        if(front == rear){
            front = -1; rear = -1;
        }else{
            printf("\nRemove Item from %d", ready_q[front]);
            front = (front + 1) % SIZE;
        }
    }
}

void Show(){
    if(isEmpty()){
        printf("\nTHE QUEUE IS EMPTY !!");
    }else{
        printf("\nALL ITMES IN QUEUE !")
        int i = front;
        while(true){
            printf("[%d]",ready_q[i]);
            if( i == rear){
                break;
            }
            i = (i + 1) % SIZE;
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("\n[#--- CIRCULAR QUEUE ---#]\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit");
        printf("\nEnter The Action Perform:\t");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            Enqueue();
            break;

            case 2:
            Dequeue();
            break;

            case 3:
            Show();
            break;

            case 4:
            exit(0);

            default: printf("\n[Incorrect Choice !]");
        }
    }
}