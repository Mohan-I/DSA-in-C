#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int front = 0, rear = -1, count = 0, ready_q[SIZE];

void Enqueue(){
    if(count == SIZE){
        printf("\n THE QUEUE IS FULL !");
    }else{
        int item;
        printf("\nEnter Item to push:\t");
        scanf("%d", &item);
        rear = (rear + 1) % SIZE;
        ready_q[rear] = item;
        count++;
    }
}

void Dequeue(){
    if(count == 0){
        printf(" THE QUEUE IS EMPTY !");
    }else{
        printf(" Removed From : %d", ready_q[front]);
        ready_q[front] = 0 ;
        front = (front + 1) % SIZE;
        count--;
    }
}

void Show(){
    if(count == 0){
        printf("\nQUEUE IS EMPTY");
    }else{
        printf("\nAll Items\n");
        for(int i = 0; i < count; i++){
            int index = (front + i) % SIZE;
            printf("[%d]", ready_q[index]);
        }
        printf("\n[ Front : %d | Rear : %d | Count : %d]\n",front,rear,count);
    }
}

int main(){
    int choice;
    while(1){
    printf("\n#--- ENQUEUE DEQUEUE OPERATIONS ---#\n");
    printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit");
    printf("\nEnter The Operation :\t");
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

        default: printf("\nIncorrect Choice !!");
    }
    }
}