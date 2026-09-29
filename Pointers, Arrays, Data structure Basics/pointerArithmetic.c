# include <stdio.h>

int main(){
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = a; // either this or int* p = &a[0]; DON'T DO int* p = &a
    // array pointer dont need &
    printf("%d", *(++p)); // to access next element
    return 0;
}