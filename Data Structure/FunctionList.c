// Since in linked list, current part is repeating,
// we can convert it to function

# include <stdio.h>
# include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* link;
} node;

node* linkedList(int d1, node* previous){

    node* temp = (node*)malloc(sizeof(node)); // creating temporary node pointer 
    temp->data=d1; // temp is pointing to a node whose data is d1
    temp->link = NULL;

    previous->link = temp; // previous link [ we added current in main() ] is pointing to this temp node
    return temp;
}

int main(){
    node* head = (node*)malloc(sizeof(node));
    head->data = 1;
    head->link = NULL;


    node* current =  head;
    current = linkedList(2, current);
    current = linkedList(3, current);
    current = linkedList(4, current);
    current = linkedList(5, current);

}