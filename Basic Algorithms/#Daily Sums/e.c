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

    printf("\nThe Node %d has been Created !", data);
}


void removeNode(int key){
    struct Node* temp = head, *prev = NULL;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        free(temp);
        printf("\nThe Node %d has been deleted !", key);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        printf("\nThe Node does not exist !");
    }

    prev->next = temp->next;
    printf("\nThe Node %d has been deleted !", key);
}

void showNode(){
    struct Node* temp = head;
    printf("\n|=-");
    while(temp != NULL){
        printf("-=[%d]=-", temp->data);
        temp = temp->next;
    }
    printf("-=|\n");
}

int main(){
    int choice, element;
    while(1){
    printf("\n[=====LINKED LIST=====]");
    printf("\n\n1.Insert\n2.Remove\n3.Show\n4.Exit");
    printf("\nEnter the Operation to perform :");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Enter element to Insert :");
        scanf("%d", &element);
        insertNode(element);
        break;

        case 2:
        printf("Enter element to Remove :");
        scanf("%d", &element);
        removeNode(element);
        break;

        case 3:
        printf("\n[All Nodes Present in the list]\n");
        showNode();
        break;

        case 4:
        exit(0);

        default: printf("\nIncorrect Choice !");
    }
}
}