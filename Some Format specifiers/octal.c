#include <stdio.h>

int main(){
    int var = 054;
    printf("%d\n", var); // Prints 44, 0 infront of any value is treated as octal value, not decimal value

    /*
    054= 8^0 has 2, 8^1 has 5, 8^2 has 0, i.e. by converting octal value to decimal 1*4 + 8*5 + 16*0,
    i.e. 44
    */

    printf("%o\n", var); // --> 54
    
    int v1 = 01001; // treated as octal value since it starts from 0;
    // if it was not starting from 0, it will treat it as integer
    
    printf("%d\n", v1);
    return 0;
}