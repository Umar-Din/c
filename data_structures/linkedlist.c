
#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

Node* createNode(int value){
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
};

void displayLinkedlist(Node* linkedlist){
    Node* current = linkedlist;
    while(current != NULL){
        printf("-> [%d]",current->value);
        current = current->next;
    }
}

int main(){
    Node* linkendlist = NULL;
    Node* temp = linkendlist;
    for(int i=1; i<5; i++){
        Node* n = createNode(i);
        if(linkendlist == NULL){
            linkendlist = n;
            temp = linkendlist;
        }
        temp->next = n;
        temp = temp->next;
    }

    displayLinkedlist(linkendlist);
    return 0;
}