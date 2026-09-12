/*
Exercise 2: Count Stack Elements
Goal: Implement a helper function int count() that returns the total number of items currently stored in the stack.

Task:
Set up a basic array stack where top starts at -1.
Implement int count() using the current value of top. (Hint: If top = 0, how many elements are in the stack?)
Push 3 elements into the stack, print the return value of count(), pop 1 element, and print count() again.

Expected Output:

Plaintext
Elements after 3 pushes: 3
Elements after 1 pop: 2
*/ 

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int top = -1, stack[SIZE];

int count(){
    return top + 1;
}

void push(int data){
    stack[++top] = data;
}

void pop(){
    --top;
}

int main(){
    int choice;
    push(8);
    push(6);
    push(2);

    printf("Elements after 3 pushes: %d", count());

    pop();

    printf("\nElements after 1 pop: %d", count());

    return 0;
}