#include <stdio.h>
#include <stdlib.h>
#define NORM "\x1B[0m"
#define REDD "\x1B[31m"
#define GREN "\x1B[31m"
#define YELL "\x1B[31m"
#define BLUE "\x1B[31m"
#define SIZE 8

int front = -1, rear = -1, ready_q[SIZE];

void Enqueue(){
    if(rear == SIZE -1){
        printf("\n%s Queue is Full %s\n",REDD,NORM);
    }else{
        if(front == -1){
            front = front + 1;
            rear = rear + 1;
        }
        int element;
        printf("\nAdd Element in Queue: \t");
        scanf("%d", &element);
        ready_q[rear] = element;
        rear = rear + 1;
    }
}

void Dequeue(){
    if(front == rear){
        printf("\n Queue is Empty \n",REDD,NORM);
    }else{
        printf("\nRemoved Element: %d\n", ready_q[front]);
        ready_q[front] = 0;
        front = front + 1;
    }
}

void Show(){
    if(front == rear){
        printf("\n Queue is Empty \n");
    }else{
        printf("\n All Items In Queue \n");
        for(int i = front; i < SIZE  - 1; i++){
            printf("[%d]",ready_q[i]);
        }
        printf("\nFront :%d -> %d|| Rear : %d -> %d \n", front, ready_q[front], rear, ready_q[rear]);
        printf("\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("\n------ENQUEUE - DEQUEUE OPERATIONS------\n");
        printf("\n1.Enqueue\n2.Deqeueue\n3.Show\n4.Exit");
        printf("\nEnter Operation to Perform :\t");
        scanf("%d",&choice);

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
            printf("--Code Execution Successfull !!");
            break;

            default: printf("\n Incorrect Choice");
        }
    }
}