# include <stdio.h>
# include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* link;
} node;
node* linkedList(int d1, node* previous);
node* del_firstNode(node* head);
void print_values(node* head);
node* del_lastNode(node* head);


int main(){
    node* head = (node*)malloc(sizeof(node));
    head->data = 1;
    head->link = NULL;


    node* current =  head;
    current = linkedList(2, current);
    current = linkedList(3, current);
    current = linkedList(4, current);
    head = del_firstNode(head);
    print_values(head);
    head = del_lastNode(head);
    printf("\n"); 
    print_values(head);
}

node* linkedList(int d1, node* previous){

    node* temp = (node*)malloc(sizeof(node)); 
    temp->data=d1; 
    temp->link = NULL;

    previous->link = temp; 
    return temp;
}

node* del_firstNode(node* head){
    node* temp = head;
    head = head->link;
    free(temp);
    return head;
}
node* del_lastNode(node* head){
    node* temp = head;
    node* temp2 = head;
    while(temp->link != NULL){ // we need to also make 2nd last node's link == NULL
        temp2 = temp;
        temp = temp->link;
    }
    temp2->link = NULL;
    free(temp);
    temp = NULL;

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