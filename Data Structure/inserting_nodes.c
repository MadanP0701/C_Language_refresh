# include <stdio.h>
# include <stdlib.h>

typedef struct NODE{
    int data;
    struct NODE* link;
} node;

node* linkedList(int d1, node* previous_ptr){
    node* temp = malloc(sizeof(node)); 
    temp->data = d1;
    temp->link = NULL;
    previous_ptr->link = temp;

    return temp;

}

int main(){
    node* head = NULL;
    head = (node*)malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;

    node* current = head;
    current = linkedList(98, current);

    node* insert_this = NULL;
    insert_this = (node*)malloc(sizeof(node));
    insert_this->data = 3;
    insert_this->link = NULL;

    insert_this->link = head;
    head = insert_this;


    
    
    return 0;
}