/*
Exercise 1: Reverse an Array using a Stack
Goal: Take an array of numbers and print them in reverse order using a stack.

Task:
Define a fixed stack array of size 5 and set top = -1.
Write a main() function that pushes the numbers {10, 20, 30, 40, 50} onto your stack.
Use a while loop with isEmpty() to pop() and print each element until the stack is empty.

Expected Output: 50 40 30 20 10
*/ 

#include <stdio.h>
#include <stdbool.h>
#define SIZE 5
int top = -1, stack[SIZE];

bool isEmpty(){
    return top == -1;
}

void push(int data){
    stack[++top] = data;
}

void pop(){
    printf("[%d]", stack[top]);
    --top;
}

int main(){
    int i = 5;
    int choice;
    while(i--){
        printf("Enter Num %d :" , (5 - i));
        scanf("%d", &choice);
        push(choice);
    }

    while(!isEmpty()){
        pop();
    }

    return 0;
}