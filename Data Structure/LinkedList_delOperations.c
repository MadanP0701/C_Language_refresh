# include <stdio.h>
# include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* link;
} node;


void print_values(node* head);
node* reverseList(node* head);
node* linkedList(int d1, node* previous);
node* delete_lastNode(node* head);
node* delete_firstNode(node* head);
node* delete_anyNode(node* head, int position);



int main(){
    node* head = (node*)malloc(sizeof(node));
    head->data = 1;
    head->link = NULL;


    node* current =  head;
    current = linkedList(2, current);
    current = linkedList(3, current);
    current = linkedList(4, current);
    current = linkedList(5, current);
    current = linkedList(6, current);
    
    print_values(head); // original l-list
    printf("\n");

    head = delete_lastNode(head);
    print_values(head); // l-list after deleting last node
    printf("\n");

    head = delete_firstNode(head); // l-list after deleting first node
    print_values(head);
    printf("\n");

    head = delete_anyNode(head, 2);
    print_values(head);
    printf("\n");

    head = reverseList(head);
    print_values(head);
    printf("\n");

}

node* reverseList(node* head){
    node* previous = NULL;
    node* current = head;
    node* next = head;
    while(next != NULL){
        next = current->link;
        current->link = previous;
        previous = current;
        current = next;
    }
    head = previous;
    return head;

    }


node* linkedList(int d1, node* previous){

    node* temp = (node*)malloc(sizeof(node));
    temp->data=d1; 
    temp->link = NULL;

    previous->link = temp; 
    return temp;
}

node* delete_lastNode(node* head){
    node* temp = head;
    while(temp->link->link != NULL){ // stops at second last node
        temp = temp->link;
    }
    free(temp->link); // free dereferences memory loc. and removes the space
    temp->link = NULL;

    return head;
}

node* delete_firstNode(node* head){
    node* temp = head;
    head = head->link;
    free(temp);
    return head;
}

void print_values(node* head){
    if(head == NULL){
        printf("Linked list is empty");
    }
    node* ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    
    }

}

node* delete_anyNode(node* head, int position){
    // current is pointing to the node we want to delete
    // previous is to update new value to previous node

    node* current = head;
    node* previous = head;
    if(head == NULL){
        printf("List is empty");
    }
    else if(position == 1){
        delete_firstNode(head);
    }
    else{
        while(position != 1){
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }

    return head;
}
