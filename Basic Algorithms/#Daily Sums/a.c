#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int top = -1, stack[SIZE];

void push(){
    if(top < SIZE){
        int element;
        printf("\nEnter Items To Add : ");
        scanf("%d", &element);
        stack[++top] += element;
    }else{
        printf("\nSTACK OVERFLOW !\n");
    }
}

void pop(){
    if(top >= 0){
        printf("The Item About to be removed : [%d]", stack[top]);
        stack[top] = 0;
        top--;
    }else{
        printf("\nSTACK UNDERFLOW !\n");
    }
}

void peek(){
    if(top >= 0){
        printf("The Last Iem Recently Added : [%d]", stack[top]);
    }else{
       printf("\nSTACK UNDERFLOW !\n");
    }
}

void show(){
    if(top >= 0){
        int i = top;
        while(i > -1){
            printf("\n[__%d__]",stack[i--]);
        }
    }else{
        printf("\nSTACK UNDERFLOW !\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("\n[====STACK OPERATIONS====]");
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Show\n5.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            show();
            break;

            case 5:
            printf("[CODE ENDED SUCCESSFULLY]");
            exit(0);

            default: printf("[Incorrect Option]");

        }
    }
}