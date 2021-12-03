#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;   
}Node;

void afficher(Node* tree){
    if(tree != NULL){
        afficher(tree->left);
        afficher(tree->right);
        printf("%d \n", tree->data);
    }
}


int main(){
    Node* tree = (Node*)malloc(sizeof(Node));
    tree->data = 12;
    tree->left = NULL;
    tree->right = NULL;
    afficher(tree);
    return 0;
}