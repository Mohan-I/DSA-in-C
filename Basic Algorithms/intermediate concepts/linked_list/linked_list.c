#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = head;
    head = newNode;

    printf("\nThe node %d has been created !", data);
}

void showNode(){
    struct Node* temp = head;
    printf("\n|=-");
    while(temp != NULL){
        printf("-=[%d]=-", temp->data);
        temp = temp->next;
    }
    printf("-=|\n");

    free(temp);
}

void removeNode(int key){
    struct Node* temp = head, *prev = NULL;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        free(temp);
        printf("\nThe Value of the Node %d has been found !", key);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        printf("\nThe Value is not found in the List", key);
        return;
    }

    prev->next = temp->next;
    printf("\nNode with value %d deleted.", key);
}   

int main(){
    int choice, element;
    while(1){
        printf("\n[=====LINKED LIST=====]");
        printf("\n1.Insert\n2.Remove\n3.Show\n4.Exit");
        printf("\nEnter operation to perform :");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("\n[ Enter Element to Insert ]: ");
            scanf("%d", &element);
            insertNode(element);
            break;

            case 2:
            printf("\n[ Enter Element to Remove ]: ");
            scanf("%d", &element);
            removeNode(element);
            break;

            case 3:
            printf("\nAll Nodes present in the Current MEMORY !\n");
            showNode();
            break;

            case 4:
            printf("\nExiting system... Happy Coding!");
            exit(0);

            default: printf("\n[Incorrect Value ! Please try again.]\n");
        }
    }
}