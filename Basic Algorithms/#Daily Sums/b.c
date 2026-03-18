#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
}

struct Node* head = NULL;

void insertNode(int user_data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = user_data;
    newnode -> next = head;
    head = newNode;

    printf("\n[the node has been created !]");
}

void showNodes(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("-=[%d]=-", temp->data);
        temp = temp->next;
    }
}

void removeNode(int key){
    
}

int main(){
    int choice, element;
    while(1){
        printf("\n[----Linked List----]");
        printf("\n1.Insert\n2.remove\n3.Show\n4.Exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("\nEnter The node :");
            scanf("%d", &element);
            insertNode(element);
            break;

            case 2:
            printf("\nRemoving Node........");
            break;

            case 3:
            printf("\n[===ALL NODES===]\n");
            showNodes();
            break;

            case 4:
            return 0;
            
            default: printf("\nINCORRECT CHOICE");
        }
    }
}