#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
}

struct Node* head = NULL;

void insert_i(){
    int val;
    printf("Enter the Item to Display");
    scanf("%d", &val);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode ->data = NULL;
    newNode ->next = NULL;

    if(head == NULL){
        
    }
}
int main(){

}
