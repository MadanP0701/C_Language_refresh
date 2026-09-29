# include <stdio.h>

int main(){
    int var = 0x43FF; 
    // hexadecimal value starts from 0x
    // octal value starts from 0

    printf("%x\n", var); // --> 43ff
    printf("%X\n", var); // --> 43FF
    printf("%d\n", var); // hexadecimal is 16 base, where 0 is 0, 9 is 9 and F is 15

    /*
    16^0 * F is 1*15 = 15, 
    16^1 *F is 16 * 15 = 240,
    16^2 * 3 = 768,
    16^3 * 4 = 16384,
    adding and converting to decimal --> 15+240+768+16384

    i.e. printf("%d", var); will give 17407 as output
    */

    return 0;
}