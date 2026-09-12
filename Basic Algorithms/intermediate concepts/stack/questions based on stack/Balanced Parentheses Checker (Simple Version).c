/*
Exercise 3: Balanced Parentheses Checker (Simple Version)
Goal: Check if a string containing only '(' and ')' has matching opening and closing pairs.

Task:
Create a character stack char stack[10] with top = -1.
Write a function bool isBalanced(char expr[]) that loops through the string:
    If you see '(', push it onto the stack.
    If you see ')', check if the stack is empty. 
    If it's empty, return false (unbalanced). Otherwise, pop one '('.After the loop, if the stack is empty, return true; otherwise, return false.
    
Test Cases:
    "((()))" ==> Balanced (true)
    "(()" ==> Unbalanced (false)
    ")(" ==> Unbalanced (false)
*/ 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char data) {
    if (top < SIZE - 1) {
        stack[++top] = data;
    }
}

void pop() {
    if (top != -1) {
        top--;
    }
}

bool isEmpty() {
    return top == -1;
}

bool ParentChecker(char word[]) {
    top = -1; // Reset stack for every check

    // Single left-to-right loop
    for (int i = 0; word[i] != '\0'; i++) {

        // 1. If opening bracket, PUSH
        if (word[i] == '(' || word[i] == '<' || word[i] == '{' || word[i] == '[') {
            push(word[i]);
        } 
        // 2. If closing bracket, check empty then POP
        else if (word[i] == ')' || word[i] == '>' || word[i] == '}' || word[i] == ']') {
            if (isEmpty()) {
                return false; // Closing bracket without a matching opening bracket
            }
            pop();
        }
    }

    // 3. Stack must be empty if all brackets matched perfectly
    return isEmpty();
}

int main() {
    char word[50];
    printf("[Enter Input Code] :");
    scanf("%49s", word);

    if (ParentChecker(word)) {
        printf("\n BALANCED\n");
    } else {
        printf("\n UNBALANCED\n");
    }

    return 0;
}