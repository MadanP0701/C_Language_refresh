# include <stdio.h>
# include <stdlib.h>

typedef struct doubleNODE{
    int data;
    struct doubleNODE* prevLink;
    struct doubleNODE* nexLink;

} d_node;


int main(){

    d_node* head = NULL;
    head = (d_node* )malloc(sizeof(d_node)); // memory created and head is pointing to that memory
    head->prevLink = NULL; // previous link of node(which is pointed by head) is NULL

    head->data = 1; 
    head->nexLink = NULL;

    d_node* current = (d_node* )malloc(sizeof(d_node)); // current is a moving pointer
    current->data = 2;
    current->prevLink = head; // previous link is set to head
    head->nexLink = current; // head's next link is set to current

    current = (d_node* )malloc(sizeof(d_node)); // pointer current is allocated new block of memory
    current->prevLink = head->nexLink; // head's next link is now pointing to previous node we need
    head->nexLink->nexLink = current;
    current->data = 3;
    current->nexLink = NULL;

    // Do your work
    d_node* temp = head;
    d_node* next = NULL;
while(temp != NULL){
        next = temp->nexLink;
        free(temp);
        temp = next;
    }

    return 0;
}