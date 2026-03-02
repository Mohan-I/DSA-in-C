#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB_SIZE 10

typedef struct Node{
    int key[50];
    int value;
    struct Node* next;
} Node;

Node* newNode[TAB_SIZE];
unsigned int hash(char* key){
    unsigned int value = 0;
    for(int i = 0; i < strlen(key); i++){
        value += value * i;
    }
    return value % 12;
}

int main(){
    printf("MOHAN - > %d", hash("MOHAN"));
    return 0;
}