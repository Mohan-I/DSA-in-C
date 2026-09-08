#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10
int top = -1, stack[SIZE];

bool isFull(){
    return top == SIZE;
}

bool isEmpty(){
    return top == -1;
}

void push(){
    if(isFull()){
        printf("\n THE STACK IS FULL");
    }else{
        int element;
        printf("\n Enter Element to add : ");
        scanf("%d", &element);
        stack[top++] = element;
    }
}

void pop(){
    if(isEmpty()){
        printf("\n ")
    }
}
int main(){
    int choice;
    while(1){
        printf("\n\n[======= STACK OPERATIONS ========]");
        printf("\n1.Push \n2.Pop \n3.Peek \n4.Show All \n5.Exit");
        printf("\n Enter Your Choice");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            push();
            break;
            
            case 2:
            push();
            break;
            
            case 3:
            push();
            break;
            
            case 4:
            push();
            break;
            
            case 5:
            exit(0);
            
            default: printf("[ INCORRECT SYNTAX ]");
        }
    }
}