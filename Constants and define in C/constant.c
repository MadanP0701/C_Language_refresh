# include <stdio.h>
#define C1 9
#define add(x,y) x+y
#define greater(w,z) if(w>z) \
                        printf("%d is greatest number", w); \
                     else \
                        printf("%d is greatest number", z);

                        
// {} is not required for only 1 statements

// #define name value is a method to define constants in C
// use capital letters for constants is traditional,easy to read
// in define, we can use multiple lines by using "\"

int main(){
    const int C2 = 9;
    // in this code file, C1 will be replaced by 9 in every place by preprocessor
    // int C1 = 77; will be read as int 9 = 77
    // to avoid such errors, CONST are always capital
    printf("SUM is: %d\n", add(2,4));

    greater(3,55);

    // How define works, it will first replace the name with the following
    /* first it will replace add(2,3) with 2+3,
    i.e. it will read code like printf("%d", 3*2+3),
    it wont do 2+3 first*/
    printf("\n%d", 3* add(2,3));
    printf("\n%d", 3*2+3);


    // pre defined names, __DATE__ & __TIME__

    printf("\n%s", __DATE__);
    printf("\n%s", __TIME__);

    return 0;
}