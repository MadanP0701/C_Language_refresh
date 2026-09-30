# include <stdio.h>
#include <stdlib.h>

int main(){
    int* lst = (int* )malloc(sizeof(int));
    lst[0] = 1; // lst[0] means *(lst + 0) = 1, it dereferences
    if(lst == NULL){
        printf("Memory not allocated");
        free(lst);
        return 1;
    }
    printf("%d\n", lst); // prints address since lst is pointer
    printf("%d\n", *lst); // prints value at (lst + 0)
    printf("%d", lst[0]); // prints value at (lst + 0)

    free(lst);
    return 0;
}