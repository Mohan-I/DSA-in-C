#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;

    printf("\nThe Node %d has been created successfully !", data);
}

void show(){
    struct Node* temp = head;
    if(temp == NULL){
        printf("\nThe are no Nodes available !");
    }else{
        printf("\n[-     -All Nodes-       -]\n");
        printf("|=-");
        while(temp != NULL){
            printf("-=[%d]=-",temp->data);
            temp = temp->next;
        }
        printf("-=|");
    }
}

int main(){
    int choice, element;

    while(1){
        printf("\n[   Linked List     ]");
        printf("\n|1.Insert Node\n|2.Display Node|\n3.Exit Program");
        printf("\n[Enter Operation to perform]");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("\n| Enter Node to Add : ");
            scanf("%d",&element);
            insert(element);
            break;

            case 2:
            show();
            break;

            case 3:
            exit(0);

            default: printf("\n[Incorrect Input Choice !]");
        }
    }

    return 0;
}