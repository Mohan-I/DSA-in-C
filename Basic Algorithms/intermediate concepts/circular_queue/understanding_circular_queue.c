#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NORM "\x1B[0m"
#define GREY "\x1B[30m"
#define REDD "\x1B[31m"
#define GREN "\x1B[32m"
#define YELL "\x1B[33m"
#define BLUE "\x1B[34m"
#define PINK "\x1B[35m"
#define AQUA "\x1B[36m"
#define SIZE 8

int front = -1, rear = -1, ready_q[SIZE];

bool isFull(){
    return (rear + 1) % SIZE == front;
}

bool isEmpty(){
    return front == -1;
}

void Enqueue(){
    if(isFull()){
        printf("\n%s QUEUE IS FULL %s\n",REDD,NORM);
    }else{
    if(front == -1){
        front = 0;
    }
    int element;
    printf("%sEnter Element To Add in Queue:%s\t",BLUE,NORM);
    scanf("%d", &element);
    rear = (rear + 1) % SIZE;
    ready_q[rear] = element;
    }

}

void Dequeue(){
    if(isEmpty()){
        printf("\n %s QUEUE IS EMPTY %s\n",REDD,NORM);
    }else{
        printf("\n%sRemoving Element from queue%s : %d",BLUE,NORM,ready_q[front]);
        ready_q[front] = 0;
        front = (front + 1) % SIZE;
    }
}

void Show(){
    if(isEmpty()){
        printf("\n %s QUEUE IS EMPTY %s\n",REDD,NORM);
    }else{
        printf("\nAll Items In Queue_ _ _\n");
        for(int i = 0; i < SIZE; i++){
            printf("%s[%d]%s",GREN, ready_q[i], NORM);
        }
        printf("\n%sFRONT:%s %d -> %d %s| REAR:%s %d -> %d\n%s",AQUA, PINK,front,ready_q[front],AQUA,PINK,rear,ready_q[rear],NORM);
    }
}

int main(){
    int choice;
    while(1){
        printf("\n\n%s#------CIRCULAR QUEUE------#%s\n",GREY,NORM);
        printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit\n");
        printf("\n%sEnter Operation To Perform:%s\t",YELL,NORM);
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
            printf("\n%s--------Code Execution Successfull---------%s\n",GREY,NORM);
            exit(0);

            default: printf("\n%sINCORRECT CHOICE : (choose between 1 - 4)%s",REDD,NORM);
        }
    }
}