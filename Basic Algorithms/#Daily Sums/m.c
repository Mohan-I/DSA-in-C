#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head = NULL;

void insertNode(int value){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;

    printf("\n The New Node [%d] Has Been Created !", value);
}

void displayNodes(){
    struct Node* temp = head;
    printf("\n [ All Nodes ] \n |-");
    while(temp != NULL){
        printf("-[%d]=>", temp -> data);
        temp = temp -> next;
    }
    printf("-|\n");
}

int main(){
    int choice, element;
    while(1){
        printf("\n\nLinked List");
        printf("\n1. Insert \n2. Display \n Enter Operation to Perform : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("\n Enter Elemnt To Add : ");
            scanf("%d", &element);
            insertNode(element);
            break;

            case 2:
            displayNodes();
            break;

        }
    }
}