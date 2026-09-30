# include <stdio.h>
#include <stdlib.h>

int main(){
    int* lst = (int* )malloc(sizeof(int));
    lst[0] = 1; // lst[0] means *(lst + 0) = 1, it dereferences
    
    printf("%d\n", lst); // prints address since lst is pointer
    printf("%d\n", *lst); // prints value at (lst + 0)
    printf("%d", lst[0]); // prints value at (lst + 0)

    return 0;
}