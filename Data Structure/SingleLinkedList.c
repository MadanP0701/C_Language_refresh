# include <stdio.h>
# include <stdlib.h> // For malloc
// Creating Node
typedef struct NODE{
    int data;
    struct NODE* link;
} node; 


int main(){
    node* head = NULL;
    head = (node*)malloc(sizeof(node)); // allocate memory to where head is pointing

    head->data = 45; // head->data == (*head).data
    head->link = NULL; // head(1000) --> [45(at 1000)|NULL]
    
    
    node* current = (node*)malloc(sizeof(node)); // We create current so that head is not destroyed
    current->data = 98; // Current is node2
    current->link = NULL;

    head->link = current;

    current = (node*)malloc(sizeof(node)); // Reusing the current var
    current->data = 4;
    current->link = NULL;

    head->link->link = current; 

    current = (node*)malloc(sizeof(node)); 
    current->data = 44;
    current->link = NULL;

    head->link->link->link = current; 

    return 0;

}