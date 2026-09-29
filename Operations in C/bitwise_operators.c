# include <stdio.h>

int main(){
        if(7&4)
            printf("7&4 is: %d\n", 7&4 );  // No need for{} if only one statement
        if(7|4)
            printf("7|4 is: %d\n", 7|4 );
        
    printf("7 XOR 4 is: %d\n", 7^4);

    printf("Left shift 7 by 2: %d\n", 7<<2);
    printf("Right shift 7 by 2: %d\n", 7>>2);
    /*
    7 --> 00000111
    4 --> 00000100

    7&4 --> 00000100 (i.e. 4)
    7|4 --> 00000111 (i.e. 7)
    !7 --> 11111000
    7^4 --> 00000011 (i.e. 3), same same = 0, different =1

    7<<2 --> 00011100 (i.e.28)
    7<<2 --> 00000001 (right most got discarded)

    left shift = left_op * 2**right_operand
    7<<2 = 7 * 2**2

    right shift = right_op / 2**left_operand

    */
return 0;
}