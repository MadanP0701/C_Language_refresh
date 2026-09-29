# include <stdio.h>
#include <stdlib.h>
int main(){
    // Memory allocated during compile time --> Static memory, fixed cannot be increased/decreased

    // Memory allocated during runtime --> Dynamic memory, allocated and deallocated randomly at any time

    // Allocated memory can be accessed through pointers 

    int x = 9;
    int * pointer = &x; // integer pointer named ptr is set to address of x
    int y = * pointer;
    printf("%X\n", pointer );
    printf("%X\n", &x );
    printf("%d\n", x );
    printf("%d\n", y );

    // Syntax of malloc: (data_type* )malloc(size), returns void pointer, we can typecaste it to data_type
    int i,n;
    printf("Enter number: ");
    scanf("%d", &n);
    int *ptr = (int* )malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated");
        exit(1); // exit() fnctn is used to terminate the program
                // return can only be used at the end of program
                // 0 signals program successful, 1 or any other means program failed at this particular line
            // Check using, ./file_name and echo $?
    }
    for(int i = 0; i < n; i++){

        printf("Enter an integer: ");
        scanf("%d",ptr + i );  // is &ptr[n] 
        
    }
    for(int i = 0; i < n; i++){
        printf("%d  ", *(ptr+i));
    }
    free(ptr); // releasing memory after use
    
    return 0;
}