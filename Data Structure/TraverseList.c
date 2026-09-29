// Traverse linked list and count number of nodes

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* link;
} node;
 

void count_nodes(node* head);
void print_values(node* head);

int main()
{

    node* head = NULL;
    head = (node* )malloc(sizeof(node));
    head->data = 11;
    head->link = NULL;

    node* current = (node* )malloc(sizeof(node));
    current->data = 52;
    current->link = NULL;
    head->link = current;

    current = (node* )malloc(sizeof(node));
    current->data = 39;
    current->link = NULL;
    head->link->link = current;

    count_nodes(head);
    print_values(head);

    return 0;
}

void count_nodes(node* head){
    int count = 0;
    if(head == NULL)
        printf("Empty linked list");
    node* ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->link; 
    }
    printf("%d\n", count );

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