#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

int front = -1, rear = -1, ready_q[SIZE];

 bool isFull(){
    return (rear + 1) % SIZE == front;
 }

 bool isEmpty(){
    return front == -1;
 }

void enqueue(){
    if(isFull()){
        printf("\nTHE QUEUE IS FULL");
    }else{
        int data;
        if(front == -1) front = 0;
        printf("Enter Value to Add in Queue : ");
        scanf("%d", &data);
        rear = (rear + 1) % SIZE;
        ready_q[rear] = data;
    }
}

void dequeue(){
    if(isEmpty()){
        printf("\nTHE QUEUE IS EMPTY");
    }else{
        if(rear == front){
            rear = -1; 
            front = -1;
        }
        printf("\n Removing Item: [%d]", ready_q[front]);
        front = (front + 1) % SIZE;
    }
}

void show(){
    if(isEmpty()){
        printf("\nTHE QUEUE IS EMPTY");
    }else{
        printf("\n== ITEMS IN QUEUE ==\n");
        int i = front;
        while(1){
            printf("[%d]", ready_q[i]);
            if(i == rear)  break;
            i = (i + 1)  % SIZE;
        }
        printf("\nFRONT: %d , REAR : %d ", front, rear);
    }
}

int main(){
    int choice;
    while(1){
        printf("\n[==== CIRCULAR QUEUE ====]");
        printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit");
        printf("\nEnter Operation to perform :");
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

            default : printf("\n[==INCORRECT CHOICE==]");
        }
    }
}
