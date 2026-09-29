# include <stdio.h>
void levelUp(int* ptr);
int main(){

    // Syntax: data_type *variable; --> DECLARATION;
    // Never apply indirection(ValueOf) operator on uninitialised pointer
    // Assume variable x has address as 1000
    // ptr = &x; --> INITIALISATION ptr with memory address 2000(assume) is storing address 1000


    int x = 10;
    int* ptr = &x;
    printf("%X\n", ptr); // hexadecimal address
    printf("%p\n", ptr);
    *ptr = 4;
    printf("%d\n", x);



    /* 
    Q. Why use pointers when we can do it without pointer?
    --> Pointers allow manipulate memory directly, but changing variables change it locally
    which is why pointers are highly preferred over directly changing variables in many
    cases. 
    --> Pointers are very useful in memory allocation

    */
   // for example
    int myLevel = 5;
    levelUp(&myLevel); // Pass the memory address using '&'
    
    printf("Level: %d\n", myLevel); // Outputs: Level: 6 (Success!)


    return 0;
}

void levelUp(int* ptr1){

    *ptr1 = *ptr1 + 1;
    
    // if we took integer instead of pointer, it wont directly manipulate memory, making the variables change locally until it is returned

    
}
