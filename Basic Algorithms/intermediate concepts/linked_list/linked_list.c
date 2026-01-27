#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int data){
    struct Node * newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    
    printf("\nThe Node Has Been Made for %d successfully\n",data);
}

void show(){
    struct Node* temp = head;
    if(temp == NULL){
        printf("\n[THE LIST IS CURRENTLY EMPTY]\n");
        return;
    }
    while (temp != NULL) {
        printf("[%d] -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");c
}

int main(){
    int choice, val;
    while(1){
        printf("\n[++++LINKED LIST++++]\n");
        printf("\n1. Insert Node\n2. Display Nodes\n3. Exit\n");
        printf("Enter Your Choice\t");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
            printf("Enter Value To Add In Node");
            scanf("%d", &val);
            insert(val);
            break;
            
            case 2:
            printf("== NODES DATA ==\n");
            show();
            break;

            case 3:
                printf("Exiting system... Happy Coding!\n");
                exit(0);
            
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }
}