#include <stdlib.h>
# include <stdio.h>

int main(){
    int* ptr = (void*) malloc(3*sizeof(int));


    if(ptr == NULL){
        printf("Memory Allocation failed\n");
        return 1;
    }
    else{
        printf("Memory Allocation done!\n");
    }
    free(ptr);

    return 0;
}