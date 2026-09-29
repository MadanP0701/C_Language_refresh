// Why exactly we use pointer, example 1:
#include <stdio.h>

void withoutPointer(int p){
    p = 1; // assigns value but gets destroyed and returns nothing
}

void withPointer(int* p){
        *p = 1; // assigns value directly to memory location
}


int main(){
    int number = 0;
    printf("Original number: %d\n", number);
    withoutPointer(number);
    printf("Without pointer: %d\n", number);
     // the value isnt altered since function local variables get destroyed
     // and function is not returning the variable
    withPointer(&number);
    printf("With Pointer: %d\n", number);

}