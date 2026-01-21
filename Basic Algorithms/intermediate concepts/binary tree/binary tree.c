#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure correctly
struct Node {
    int data;
    struct Node* left;  // Expert tip: always use 'struct Node*' inside the struct
    struct Node* right;
};

// 2. The Constructor Function
struct Node* createNode(int data) {
    // Allocate memory for one node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Safety check: always ensure malloc didn't fail
    if (newNode == NULL) {
        return NULL; 
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}

int main() {
    // 3. Building the tree
    struct Node* root = createNode(5);
    root->left = createNode(4);
    root->right = createNode(6);

    // 4. Output
    printf("Root: %d\n", root->data);
    printf("Left Node: %d\n", root->left->data);
    printf("Right Node: %d\n", root->right->data);

    return 0;
}