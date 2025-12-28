#include <stdio.h>
#include <stdlib.h>
#define NORM "\x1B[0m"
#define GREY "\x1B[30m"
#define BLUE "\x1B[34m"
#define SIZE 5

int top =-1, stack[SIZE];

void push(){
    
    if(top == SIZE - 1){
        printf("\n%sSTACK IS FULL%s\n",GREY,NORM);
    }else{
        int element;
        printf("\nEnter Item to Push:\t");
        scanf("%d", &element);
        top = top + 1;
        stack[top] = element;
    }
}

void pop(){
    if(top == -1){
        printf("\n%sSTACK IS EMPTY%s\n",GREY,NORM);
    }else{
        printf("\nRemoved Element From Stack : %d", stack[top]);
        top = top - 1;
    }
}

void show(){
    if(top == -1){
        printf("\n%sSTACK IS EMPTY%s\n",GREY,NORM);
    }else{
        printf("\nAll Items In Stack\n");
        for(int i = top; i >=0 ; i--){
            printf("%s[%d]%s\n",BLUE, stack[i], NORM);
        }
        printf("\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("\n%s----STACK OPERATIONS----%s",BLUE,NORM);
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter Operations to Perform:\t");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            show();
            break;

            case 4:
            exit(0);

            default: printf("\n%s----Incorrect Choice !!----%s\n",GREY,NORM);
        }
    }
}